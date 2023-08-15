
#include "includes/anonymousUser.h"

using namespace std ;

AnonymousUser::AnonymousUser()
{
    //empty
}
AnonymousUser::AnonymousUser(int id):BaseUser(id)
{
    //empty
}
AnonymousUser::AnonymousUser(string uName,string pass)
:BaseUser("AnonymousUser",uName,pass,"")
{
    //empty
}
