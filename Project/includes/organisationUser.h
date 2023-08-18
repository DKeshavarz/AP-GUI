#ifndef organisationUser_H
#define organisationUser_H

#include "includes/baseUser.h"

class OrganisationUser : public BaseUser
{
public:
    OrganisationUser();
    OrganisationUser(std::string,std::string,std::string,std::string,std::string);

    virtual void readFromFile(int);
    virtual void readFromFile(std::ifstream&);

    void setBoss(std::string);
    std::string getBoss(){return boss;}

    virtual std::string getInfo()override;
private:
    std::string boss ;
    std::string biography;

};

#endif
