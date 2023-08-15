#ifndef PersonalUser_H
#define PersonalUser_H

#include "baseUser.h"

class PersonalUser : public BaseUser
{
public:
    PersonalUser();
    PersonalUser(int);
    PersonalUser(std::string,std::string,std::string,std::string);

    void setBoss(std::string);
    
    std::string getBoss() {return bossName;}

private:
    std::string bossName ;

};

#endif