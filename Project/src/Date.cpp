#include <iostream>
#include <stdexcept>
#include <ctime>

#include "includes/Date.h"

using namespace std;


Date::Date(){}

void Date::setUserAge()
{
    userAge = stoi(getTime().substr(20 , 4)) - stoi(accessToBirth -> getBirthDate().substr(2 , 2));

}
string Date::getTime()
{
    time_t thisTime = time(0);
    char* outputTime = ctime(&thisTime);
    return outputTime;
}
