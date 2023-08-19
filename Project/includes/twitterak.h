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
    void addTweet     (std::string);
    void deleteUser   (std::string);
    void clearMainUser();

    void loadTempUser (std::string);
    void clearTempUser();

    void follow  ();
    bool isFollow();
    void like    ();

    char bringType(std::string);
    char bringType();

    BaseUser* getMainUser(){return mainUser;}
    BaseUser* getTempUser(){return tempUser;}

private:
    std::unordered_map<std::string ,userInfo >usersMap ;
    BaseUser* mainUser ;
    BaseUser* tempUser ;

    int numberOfUsers  ;

    BaseUser* makeUser(std::string);
};

#endif // TWITTERAK_H
