#ifndef TWEET_H
#define TWEET_H

#include <string>
#include <unordered_set>

class Tweet 
{
public:
    Tweet();
    Tweet(std::string);

    void setTweetStr(std::string);

    std::string getTweetStr() const{return tweetStr;}

    std::unordered_set<std::string> getLikeSet() const { return likeSet; }

private:
    std::string tweetStr;
    std::unordered_set<std::string> likeSet;
};

#endif