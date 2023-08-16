#include "includes/tweet.h"

#include <iostream>
#include <string>
#include <fstream>

using namespace std ;

Tweet::Tweet()
{
    //empty
}
Tweet::Tweet(string input,int userId ,int tweetId)
{
    setTweetStr(input);
    this->tweetId = tweetId;
    this->userId  = userId ;
}

void Tweet::setTweetStr(string input)
{
    tweetStr = input ;
}
Tweet::~Tweet()
{
    string path = "user" + to_string(userId) + "tweet" + to_string(tweetId) + ".txt";
    ofstream file (path,ios::out);

    if(!file)
        cerr << "~Tweet():can't open and write in " << path << '\n' ;

    file << ":" << userId   <<"\n"
         << ":" << tweetId  <<"\n"
         << ":" << tweetStr <<"\n";
}
