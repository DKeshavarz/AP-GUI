#include <string>

#include "includes/tweet.h"

using namespace std ;

Tweet::Tweet()
{
    //empty
}
Tweet::Tweet(string input)
{
    setTweetStr(input);
}

void Tweet::setTweetStr(string input)
{
    tweetStr = input ;
}
