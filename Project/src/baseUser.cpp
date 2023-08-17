#include <string>
#include <stdexcept>
#include <fstream>
#include <iostream>
#include <sstream>

#include "includes/baseUser.h"

using namespace std ;

const int securityLevel {1} ;

BaseUser::BaseUser()
{
    //empty
}

void BaseUser::readFromFile(int id)
{
    ifstream input("user"+ to_string(id) +".txt",ios::in);
    if(!input)
        cout << "BaseUser::readFromFile->cant't open user"+ to_string(id) +".txt\n";
    else
        readFromFile(input);

    input.close();

}
void BaseUser::readFromFile(ifstream& input)
{
    std::string temp;

    input >> temp;  id        =stoi (temp.substr(1));
    cerr << "id is :" << id << endl ;
    input >> temp;  setFirsrName    (temp.substr(1));
    input >> temp;  setUserName     (temp.substr(1));
    input >> temp;  setPassword     (temp.substr(1));
    input >> temp;  setLastPass     (temp.substr(1));
    input >> temp;  setPhoneNum     (temp.substr(1));
    input >> temp;  setBiogarghy    (temp.substr(1));
    input >> temp;  setLink         (temp.substr(1));
    input >> temp;  setCountry      (temp.substr(1));
    input >> temp;  setHeaderColor  (temp.substr(1));
    input >> temp;  allTweets = stoi(temp.substr(1));
    input >> temp;  //get profile pic

    setTweet(currentTweetNum);

}
BaseUser::BaseUser(string name, string uName, string pass,string phone)
{
    setFirsrName(name) , setUserName(uName) , setPassword(pass) , setPhoneNum(phone);
}
void BaseUser::setId (int input)
{
    id = input ;
}
void BaseUser::setFirsrName(string fName)
{
    firsName = fName;
}
void BaseUser::setUserName(string uName)
{

    if (uName.size() < 5)
        throw invalid_argument("! Username is to short");


    for (size_t i = 0; i < uName.size(); ++i) //get without @
    {
        if ( !('a' <= uName[i] && uName[i] <= 'z') &&
             !('A' <= uName[i] && uName[i] <= 'Z')) 
        {
            throw invalid_argument("! Username contain invalid character");
        }
    }

    string reservedWord[]{ "exit","help","login","edit","signup","logout","profile","tweet"}; //sort string for binery search and add more

    for(const string& i : reservedWord)
    {
        if(i == uName)
            throw invalid_argument("! You can't use reserved key");
    }

    userName = uName;
}
void BaseUser::setPassword(string pass) 
{
    if (pass == previousPassword)
        throw invalid_argument("! You can not use your previous password");

    bool isCaptal {0} ; bool isSmall  {0} ;
    bool isNumber {0} ; bool isChar   {0} ;
    bool longPas  {pass.size()>8 ? true : false };

    for(size_t i {0} ; i < pass.size() ; ++i)
    {
        if     ('a' <= pass[i] && pass[i] <='z') isSmall  = true ;
        else if('0' <= pass[i] && pass[i] <='9') isNumber = true ;
        else if('A' <= pass[i] && pass[i] <='Z') isCaptal = true ;
        else                                     isChar   = true ;
    }

    if(isCaptal+isChar+isSmall+isNumber+longPas > securityLevel) //const int define in class defenition
    {
        setLastPass(password);
        password = pass ;
    }
    else
        throw invalid_argument("! Password is too easy") ;
    
}
void BaseUser::setLastPass(string input)
{
    previousPassword = input ;
}
void BaseUser::setBiogarghy(string bio)
{
    if (bio.size() < 160)
        biogarghy = bio;
    else
        throw invalid_argument("! Len of biograghy is too long...");
}
void BaseUser::setCountry(string country)
{
    this->country = country;
}
void BaseUser::setLink(string inputLink)
{
    if (inputLink.find("https://") == string :: npos) // fix this
    {
        link = "https://" + inputLink;
    }
    else
    {
        link = inputLink;
    }

}
void BaseUser::setPhoneNum(string phone) // dose it need validation?
{
    for (size_t i = 0 ; i < phone.size() ; ++i)
    {
        if (!(phone[i] >= '0' && phone[i] <= '9'))
        {
            throw invalid_argument ("! You most enter a number");
        }
    }

    phoneNumber = phone;
}
void BaseUser::setHeaderColor(string inputColor)
{
    string reservedColors[8] { "blue ","green ","red ","yellow ","black ","white ","orange ","purple " };
    for (int i = 0 ; i < 8 ; i++)
        if (reservedColors[i] == inputColor)
             throw invalid_argument ("! Your color does not exist");
              
    headerColor = inputColor;
    
}

BaseUser::~BaseUser()
{
    clearCurrentTweet();
}


void BaseUser::addTweet (string tweetText)
{

    //tweetsSet.insert(tweetsSet.size()+1);
    cerr << "add tweet " << allTweets << " to " << userName << '\n' ;
    currenTweet = new Tweet(tweetText,id,allTweets);
    ++allTweets;
    clearCurrentTweet();
}
void BaseUser::clearCurrentTweet()
{
    delete currenTweet;
    currenTweet = nullptr ;
}
bool BaseUser::canShowNextTweet()
{
    return currentTweetNum < allTweets - 1;
}

bool BaseUser::canShowLastTweet()
{
    return currentTweetNum > 1 ;
}
void BaseUser::goToNextTweet   ()
{
    if(canShowNextTweet())
    {
        ++currentTweetNum;
        setTweet(currentTweetNum);
    }
    else
        throw out_of_range("There is no next tweet");
}

void BaseUser::goToLastTweet()
{
    if(canShowLastTweet())
    {
        --currentTweetNum;
        setTweet(currentTweetNum);
    }
    else
        throw out_of_range("There is no previous tweet");
}
Tweet* BaseUser::getTweet()
{
    if(currenTweet == nullptr)
    {
        cerr << "BaseUser::getTweet\n";
        throw invalid_argument("There is no current tweet");
    }

    return currenTweet;

}
void BaseUser::setTweet (int tweetId)
{
    if(tweetId < allTweets)
    {
        clearCurrentTweet();
        currenTweet = new Tweet (id,tweetId );
    }
    else
        cerr << "line 227:tweet don't exict\n";
}

void BaseUser::save()
{
    clearCurrentTweet();

    ofstream output("user"+ to_string(id) +".txt",ios::out);
    if(!output)
        cerr << "Base::save->cant't open user"+ to_string(id) +".txt\n";

    output << this->getInfo();

    output.close();
}
string BaseUser::getInfo()
{
    ostringstream output ;

    output <<":"   << id                << "\n:" << firsName
           <<"\n:" << userName          << "\n:" << password
           <<"\n:" << previousPassword  << "\n:" << phoneNumber
           <<"\n:" << biogarghy         << "\n:" << link
           <<"\n:" << country           << "\n:" << headerColor
           <<"\n:" << allTweets         << "\n:" << ProfilePic;

    return output.str();
}
