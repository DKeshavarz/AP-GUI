#ifndef TWITTERAK_H
#define TWITTERAK_H

#include <unordered_map>

#include "includes/personalUser.h"
#include "includes/organisationUser.h"
#include "includes/anonymousUser.h"

class userInfo
{
public:
    std::string password;
    int  id ;
    char type ;
};

class Twitterak
{
public:
    Twitterak();
    ~Twitterak();

    void setMainUser(std::string,std::string,std::string
                    ,std::string,std::string,char);


    void loadMainUser (std::string ,std::string);
    void clearMainUser();

    void addTweet(std::string);

    void deleteUser(std::string);

    BaseUser* getMainUser(){return mainUser;}

private:
    std::unordered_map<std::string ,userInfo >usersMap ;
    BaseUser* mainUser ;
    BaseUser* tempUser ;
    int numberOfUsers  ; //count how many user do we have on our app

    BaseUser* makeUser(char);
};

#endif // TWITTERAK_H
