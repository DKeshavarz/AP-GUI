#ifndef organisationUser_H
#define organisationUser_H

#include "baseUser.h"

class OrganisationUser : public BaseUser
{
public:
    OrganisationUser();
    OrganisationUser(int);
    OrganisationUser(std::string,std::string,std::string,std::string,std::string);

    void setBoss(std::string);
    std::string getBoss(){return boss;}
private:
    std::string boss ;
};

#endif
