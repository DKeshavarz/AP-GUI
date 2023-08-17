#include "includes/organisationUser.h"

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std ;

OrganisationUser::OrganisationUser()
{
    //empty
}

OrganisationUser::OrganisationUser(string name, string uName, string pass,string phone,string bossName)
:BaseUser(name, uName, pass,phone)
{
    setBoss(bossName);
}
void OrganisationUser::setBoss(string input)
{
    boss = input ;
}
string OrganisationUser::getInfo()
{
    ostringstream output ;

    output <<":"<< boss << '\n' << BaseUser::getInfo();
    cerr << "OrganisationUser::getInfo-> we use virual get info \n" ;

    return output.str();
}

 void OrganisationUser::readFromFile(int id)
{
    ifstream input("user"+ to_string(id) +".txt",ios::in);
    if(!input)
        cout << "BaseUser::readFromFile->cant't open user"+ to_string(id) +".txt\n";
    else
        readFromFile(input);

    input.close();
}
 void OrganisationUser::readFromFile(ifstream& input)
{
    std::string temp;
    input >> temp;  setBoss    (temp.substr(1));
    cerr << "OrganisationUser::readFromFile->boss name:" << boss << endl ;

    BaseUser::readFromFile(input);

}
