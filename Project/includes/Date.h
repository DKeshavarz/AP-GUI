#ifndef DATE_H
#define DATE_H

#include <string>
#include "includes/baseUser.h"

class Date
{
public:
    Date();

    void setUserAge();

    std::string getTime   ();
    std::string getUserAge(){return userAge;};

private:
    std::string userAge{""};

    BaseUser *accessToBirth{nullptr};
};


#endif // DATE_H
