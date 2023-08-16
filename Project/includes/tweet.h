#ifndef TWEET_H
#define TWEET_H

#include <string>
#include <unordered_set>

class Tweet 
{
public:
    Tweet();
    Tweet(std::string,int,int);
    ~Tweet();

    void setTweetStr(std::string);

    std::string getTweetStr()             const {return tweetStr;}
    std::unordered_set<int> getLikeSet () const {return  likeSet;}
    std::unordered_set<int> getMentions() const {return  likeSet;}

private:
    int tweetId;
    int userId ;
    std::string tweetStr;

    std::unordered_set<int> likeSet ;
    std::unordered_set<int> mentions;
};

#endif
