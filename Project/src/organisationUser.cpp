#include "includes/organisationUser.h"

using namespace std ;

OrganisationUser::OrganisationUser()
{
    //empty
}
OrganisationUser::OrganisationUser(int id):BaseUser(id)
{
    // find way to get boss
}
OrganisationUser::OrganisationUser(string name, string uName, string pass,string phone,string bossName)
:BaseUser(name, uName, pass,phone)
{
    setBoss(bossName);
}
void OrganisationUser ::setBoss(string input)
{
    boss = input ;
}
