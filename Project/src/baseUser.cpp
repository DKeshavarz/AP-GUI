#include <string>
#include <stdexcept>
#include <fstream>
#include <iostream>

#include "includes/baseUser.h"

using namespace std ;

const int securityLevel {2} ;

BaseUser::BaseUser()
{
    //empty
}

BaseUser::BaseUser(int id)//make this function more readble
{
    ifstream input("user"+ to_string(id) +".txt",ios::in);
    if(!input)
        cout << "cant't open myFiles/user"+ to_string(id) +".txt\n";

    std::string temp;

        input >> temp;  setId         (id);
        input >> temp;  setFirsrName  (temp.substr(1));
        input >> temp;  setUserName   (temp.substr(1));
        input >> temp;  setPassword   (temp.substr(1));
        input >> temp;  setLastPass   (temp.substr(1));
        input >> temp;  setPhoneNum   (temp.substr(1));
        input >> temp;  setBiogarghy  (temp.substr(1));
        input >> temp;  setLink       (temp.substr(1));
        input >> temp;  setCountry    (temp.substr(1));
        input >> temp;  setHeaderColor(temp.substr(1));
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
    ofstream output("user"+ to_string(id) +".txt",ios::out);
    if(!output)
        cout << "cant't open user"+ to_string(id) +".txt\n";


    output <<":"   << id                << "\n:" << firsName
           <<"\n:" << userName          << "\n:" << password
           <<"\n:" << previousPassword  << "\n:" << phoneNumber
           <<"\n:" << biogarghy         << "\n:" << link
           <<"\n:" << country           << "\n:" << headerColor;

    output.close();
}
