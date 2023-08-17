#ifndef anonymousUser_H
#define anonymousUser_H

#include "baseUser.h"

class AnonymousUser : public BaseUser
{
public:
    AnonymousUser();
    AnonymousUser(std::string,std::string);

private:

};

#endif
