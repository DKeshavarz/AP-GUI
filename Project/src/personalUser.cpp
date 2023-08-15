#include "includes/personalUser.h"

using namespace std;

PersonalUser::PersonalUser()
{
    //empty
}
PersonalUser::PersonalUser(int id):BaseUser(id)
{
    //empty
}
PersonalUser::PersonalUser(string name, string uName, string pass,string phone)
:BaseUser( name,  uName,  pass, phone)
{
    //empty
}

void PersonalUser::setBoss(string input)  
{
    bossName = input ;
}
