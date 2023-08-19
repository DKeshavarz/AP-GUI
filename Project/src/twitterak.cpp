#include "includes/twitterak.h"

#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>
#include <stdio.h>

using namespace std;

Twitterak::Twitterak():mainUser{nullptr},tempUser{nullptr},numberOfUsers{0}
{
    ifstream input("main.txt",ios::in);
    if(!input)
        cerr << "Twitterak::Twitterak()->can't read\n";

    string userName,password ;
    int id ;
    char type ;
    while(input >> userName >> password >> id >> type)
    {
        usersMap[userName];
        usersMap[userName].password = password;
        usersMap[userName].id       = id ;
        usersMap[userName].type     = type;

        numberOfUsers = id>numberOfUsers?id:numberOfUsers;
    }
    numberOfUsers++;
    input.close();
}
BaseUser* Twitterak::makeUser(string userName)
{
    BaseUser* tempPtr {nullptr};

    if(!usersMap.count(userName))
        throw invalid_argument("user dosen't exist");
    else if(usersMap[userName].type == 'p')
        tempPtr =new PersonalUser    ;
    else if(usersMap[userName].type == 'a')
        tempPtr =new AnonymousUser   ;
    else if(usersMap[userName].type == 'o')
        tempPtr =new OrganisationUser;
    else
        throw invalid_argument ("file isn't corret ...main.txt");

    tempPtr->readFromFile(usersMap[userName].id);
    return tempPtr;
}
void Twitterak::setMainUser(string name   ,string userName,string password
                           ,string manager,string phone   ,char   type    )
{
    clearMainUser();

    if(usersMap.count(userName))//check user name
        throw invalid_argument("Dublicated user name");

    if     (type == 'p')//creat personall user
    {
        mainUser =new PersonalUser(name,userName,password,phone);
    }
    else if(type == 'a')
    {
        mainUser =new AnonymousUser(userName,password);
    }
    else if(type == 'o')
    {
        if(!usersMap.count(manager))
            throw invalid_argument("Manager user name dosen't exist niger");

        mainUser =new OrganisationUser(name,userName,password,phone,manager);
    }
    else
    {
        throw invalid_argument("You haven't select a type");
    }

    mainUser->setId( numberOfUsers );
    usersMap[userName];
    usersMap[userName].password = password;
    usersMap[userName].id       = numberOfUsers ;
    usersMap[userName].type     = type;

    numberOfUsers++ ;
}
void Twitterak::loadMainUser(string userName,string password)
{
    clearMainUser();
    std::cerr << "Twitterak::loadMainUser->after clear try\n";
    if(!usersMap.count(userName))
        throw invalid_argument("User name didn't found");
    else if(usersMap[userName].password != password)
        throw invalid_argument("incorect password");

    mainUser = makeUser(userName) ;
    std::cerr << "Twitterak::loadMainUser->after clear end\n";
}
void Twitterak::clearMainUser()
{
    //clog << "Twitterak::clearMainUser->start\n";
    if(mainUser != nullptr)
    {
        //clog << "Twitterak::clearMainUser->" << mainUser->getUserName() << " saved and pointer deleted\n";
        mainUser->save();
    }
    delete mainUser;
    mainUser = nullptr;
}
void Twitterak::deleteUser(string userName)
{
    int allTweets = mainUser->getAllTweets();
    clearMainUser();
    if(!usersMap.count(userName))
    {
        cerr << "Twitterak::deleteUser->can delete user name\n";
        throw invalid_argument("User name don't exist");
    }
    int id = usersMap[userName].id;
    usersMap.erase(userName);
    string path = "user"+ to_string(id) +".txt";
    if(remove(path.data()) == 0)
    {
        cerr<< "delete " << path  << "line 114\n";
    }
    for(int i {1}; i < allTweets ; ++i)
    {
        path = "user"+ to_string(id) + "tweet" + to_string(i) +".txt";
        if(remove(path.data()) == 0)
        {
            cerr<< "delete " << path  << "line 123\n";
        }
    }

}
Twitterak::~Twitterak()
{
    ofstream output("main.txt",ios::out);
    if(!output)
        cerr << "cant't open main.txt \n";


    for (const auto& i : usersMap)
    {
        output << i.first       << ' ' << (i.second).password << ' '
               << (i.second).id << ' ' << (i.second).type     << '\n';
    }
    output.close();

    clearTempUser();
    clearMainUser();
}
void Twitterak::addTweet(string tweetText)
{
    mainUser->addTweet(tweetText);
}
void Twitterak::loadTempUser (string userName)
{
    if(!usersMap.count(userName))
    {
        cerr << "Twitterak::loadTempUser->user name dont exist\n" ;
        throw invalid_argument("user name don't exist");
    }
    clearTempUser();
    tempUser = makeUser(userName);

}
void Twitterak::clearTempUser()
{
    if(mainUser != tempUser && tempUser != nullptr)
    {
        tempUser->save();
        delete tempUser;
    }

    tempUser = nullptr;
}
void Twitterak::follow()
{
    if      (mainUser == nullptr) throw invalid_argument("main user dosen't exist") ;
    else if (tempUser == nullptr) throw invalid_argument("temp user dosen't exist") ;

    tempUser->addFollowers (mainUser->getId());
    mainUser->addFollowings(tempUser->getId());
}
bool Twitterak::isFollow()
{
    return mainUser->isFollow(tempUser->getId());
}
void Twitterak::like()
{
    if      (mainUser == nullptr) throw invalid_argument("main user dosen't exist") ;
    else if (tempUser == nullptr) throw invalid_argument("temp user dosen't exist") ;

    tempUser->likeBy(mainUser->getId());
}
char Twitterak::bringType(string userName)
{
    if(!usersMap.count(userName))
        throw invalid_argument ("user name dosen't exist");

    return usersMap[userName].type;
}
char Twitterak::bringType()
{
    if(mainUser == nullptr)
        throw invalid_argument("main user dosen't exist");
    return bringType(mainUser->getUserName());
}
