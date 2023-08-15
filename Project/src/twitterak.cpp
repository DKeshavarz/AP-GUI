#include "includes/twitterak.h"

#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>

using namespace std;

Twitterak::Twitterak():mainUser{nullptr},tempUser{nullptr},numberOfUsers{1}
{
    cout << "in constructor\n" ;

    ifstream input("myFiles/main.txt",ios::in);
    if(!input)
        cout << "fuck\n";

    string userName,password ;
    int id ;
    char type ;
    while(input >> userName >> password >> id >> type)
    {
        numberOfUsers++ ;
        cout << userName <<'\n';
        usersMap[userName];
        usersMap[userName].password = password;
        usersMap[userName].id       = id ;
        usersMap[userName].type     = type;
    }
    input.close();
}

void Twitterak::setMainUser(string name   ,string userName,string password
                            ,string manager,string phone   ,char   type)
{
    delete mainUser;
    BaseUser* mainUserPtr {nullptr};

    if(usersMap.count(userName))//check user name
        throw invalid_argument("Dublicated user name");

    if     (type == 'p')//creat personall user
    {
        mainUserPtr =new PersonalUser(name,userName,password,phone);
    }
    else if(type == 'a')
    {
        mainUserPtr =new AnonymousUser(userName,password);
    }
    else if(type == 'o')
    {
        //cout << "pas:" << manager << '\n' ;
        if(!usersMap.count(manager))//check boss user name
            throw invalid_argument("Manager user name dosen't exist niger");

        mainUserPtr =new OrganisationUser(name,userName,password,phone,manager);
    }
    else
    {
        throw invalid_argument("You haven't select a type");
    }

    mainUser = mainUserPtr ;
    mainUser->setId( numberOfUsers );

    usersMap[userName];
    usersMap[userName].password = password;
    usersMap[userName].id       = numberOfUsers ;
    usersMap[userName].type     = type;

    numberOfUsers++ ;
}

void Twitterak::loadMainUser(string userName,string password)
{
    if(!usersMap.count(userName))
        throw invalid_argument("User name didn't found");
    else if(usersMap[userName].password != password)
        throw invalid_argument("incorect password");

    if     (usersMap[userName].type == 'p')//creat personall user
    {
        mainUser =new PersonalUser(usersMap[userName].id);
    }
    else if(usersMap[userName].type == 'a')
    {
        mainUser =new AnonymousUser(usersMap[userName].id);
    }
    else if(usersMap[userName].type == 'o')
    {
        mainUser =new OrganisationUser(usersMap[userName].id);
    }
    else
        throw invalid_argument ("file isn't corret ...main.txt") ;
}

Twitterak::~Twitterak()
{
    ofstream output("myFiles/main.txt",ios::out);
    if(!output)
        cout << "cant't open myFiles/main.txt \n";

    for (const auto& i : usersMap)
    {
        output << i.first       << ' ' << (i.second).password << ' '
               << (i.second).id << ' ' << (i.second).type     << '\n';
    }


    output.close();

    // carefull about times main == temp is true
    delete mainUser ;
    delete tempUser ;
}
