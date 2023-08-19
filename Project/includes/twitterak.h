#ifndef TWITTERAK_H
#define TWITTERAK_H

#include <unordered_map>
#include <forward_list>
#include <vector>

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
class TweetInfo
{
public:
    TweetInfo(int u,int i)
    {userId = u ; tweetId = i;}
    int userId ;
    int tweetId;
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

    std::vector<std::string> searchForHasgtags(std::string);
    void addHashtags     (std::string);
    bool canBeInHashtag  (char);
    void saveHastagMap   ();
    void getInfoHastagMap();

    BaseUser* getMainUser(){return mainUser;}
    BaseUser* getTempUser(){return tempUser;}

private:
    std::unordered_map<std::string ,userInfo >usersMap ;
    std::unordered_map<std::string ,std::forward_list<TweetInfo> >hashtagsMap ;

    BaseUser* mainUser ;
    BaseUser* tempUser ;

    int numberOfUsers  ;

    BaseUser* makeUser(std::string);
};

#endif // TWITTERAK_H
