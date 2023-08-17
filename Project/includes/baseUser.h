#ifndef baseUser_H
#define baseUser_H

#include <unordered_set>
#include <string>

#include "includes/tweet.h"

class BaseUser 
{
public:
    BaseUser ();
    BaseUser (int);
    BaseUser (std::string, std::string, std::string,std::string);
    virtual ~BaseUser ();

    void setId         (int);
    void setFirsrName  (std::string);
    void setUserName   (std::string);
    void setLink       (std::string);
    void setPassword   (std::string);
    void setLastPass   (std::string);
    void setBiogarghy  (std::string);
    void setCountry    (std::string);
    void setPhoneNum   (std::string); 
    void setHeaderColor(std::string); 
    void setBirthDate  (std::string);

    void addTweet      (std::string);
    void clearCurrentTweet();

    void setTweet     (int);
    void goToNextTweet   ();
    void goToLastTweet   ();
    bool canShowNextTweet();
    bool canShowLastTweet();
    Tweet* getTweet      ();


    int         getId         () const{return id         ;}
    int         getAllTweets  () const{return allTweets  ;}
    std::string getFirstName  () const{return firsName   ;}
    std::string getUserName   () const{return userName   ;}
    std::string getLink       () const{return link       ;}
    std::string getPassword   () const{return password   ;}
    std::string getLastPass   () const{return previousPassword;}
    std::string getBiogarghy  () const{return biogarghy  ;}
    std::string getCountry    () const{return country    ;}
    std::string getPhoneNum   () const{return phoneNumber;}

private:
    int id ;
    int currentTweetNum {1};
    int allTweets       {1};

    std::string firsName;
    std::string userName;
    std::string password;
    std::string previousPassword;
    std::string phoneNumber;
    std::string biogarghy;
    std::string link;
    std::string country;
    std::string headerColor;

    Tweet* currenTweet {nullptr};

    std::unordered_set<int>followings ;
    std::unordered_set<int>followers  ;

    //std::unordered_set<int>tweetsSet  ;

    //date 
    //profile pic
};

#endif
