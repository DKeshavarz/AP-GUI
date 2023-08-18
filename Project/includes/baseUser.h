#ifndef baseUser_H
#define baseUser_H

#include <unordered_set>
#include <string>
#include <fstream>

#include "includes/tweet.h"

class BaseUser 
{
public:
    BaseUser ();
    BaseUser (std::string, std::string, std::string,std::string);
    virtual ~BaseUser ();

    virtual void readFromFile(int);
    virtual void readFromFile(std::ifstream&);

    void setId         (int);
    void setFirsrName  (std::string);
    void setUserName   (std::string);
    void setLink       (std::string);
    void setPassword   (std::string);
    void setLastPass   (std::string);
    void setBiography  (std::string);
    void setCountry    (std::string);
    void setPhoneNum   (std::string);  
    void setBirthDate  (std::string);
    void setProfilePic (std::string);
    void setHeaderColor(std::string);

    void addTweet      (std::string);
    void clearCurrentTweet();

    void setTweet     (int);
    void goToNextTweet   ();
    void goToLastTweet   ();
    bool canShowNextTweet();
    bool canShowLastTweet();
    Tweet* getTweet      ();

    void addFollowings   (int);
    void addFollowers    (int);
    bool isFollow        (int);

    int         getId         () const{return id         ;}
    int         getAllTweets  () const{return allTweets  ;}
    std::string getFirstName  () const{return firsName   ;}
    std::string getUserName   () const{return userName   ;}
    std::string getLink       () const{return link       ;}
    std::string getPassword   () const{return password   ;}
    std::string getLastPass   () const{return previousPassword;}
    std::string getBiogarghy  () const{return biography  ;}
    std::string getCountry    () const{return country    ;}
    std::string getPhoneNum   () const{return phoneNumber;}
    std::string getProfilePic () const{return ProfilePic ;}
    std::string getHeaderColor() const{return headerColor;}

    virtual void save   ();
    virtual std::string getInfo();
private:
    int id ;
    int currentTweetNum {1};
    int allTweets       {1};

    std::string firsName;
    std::string userName;
    std::string password;
    std::string previousPassword;
    std::string phoneNumber;
    std::string biography;
    std::string link;
    std::string country;
    std::string ProfilePic;
    std::string headerColor;

    Tweet* currenTweet {nullptr};

    std::unordered_set<int>followings ;
    std::unordered_set<int>followers  ;

    //date

};

#endif
