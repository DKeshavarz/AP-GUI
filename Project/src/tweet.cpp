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
Tweet::Tweet(int userId ,int tweetId)
{
    this->tweetId = tweetId;
    this->userId  = userId ;

    string path = "user" + to_string(userId) + "tweet" + to_string(tweetId) + ".txt";
    ifstream input (path,ios::in);

    if(!input)
    {
        cerr << path << "donsn't exist to read \n";
        throw out_of_range(path + "donsn't exist");
    }
    string inputTweet ;
    input >> inputTweet ;
    tweetStr  = inputTweet.substr(1);


    while(input >> inputTweet && inputTweet.size()>0 && inputTweet[0] != ':')
    {
        tweetStr += " " + inputTweet;
    }

    input.close();
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

    file << ":" << tweetStr <<"\n";
}
