//
//  DepartmentExer10.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/17/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "DepartmentExer10.hpp"

//constructor
DepartmentExer10::DepartmentExer10(string name, AddressExer10 &location, string telephone, string email):
name(name),
location(location),
telephone(telephone),
email(email)
{};
//gettter
string DepartmentExer10::getName(){
    return this->name;
};
AddressExer10 DepartmentExer10::getLocation(){
    return this->location;
};
const string DepartmentExer10::getTelephone(){
    return telephone;
};
string DepartmentExer10::getEmail(){
    return email;
};

//setter
void DepartmentExer10::setName(string name){
    this->name = name;
};
void DepartmentExer10::setLocation(AddressExer10 &location){
    this->location = location;
};
//const string setTelephone;
void DepartmentExer10::setEmail(string email){
    this->email = email;
};

void DepartmentExer10::display(){

    cout << "Department name is " << getName() << endl;
    getLocation().printAddress();
    cout << "Department telephone is " << getTelephone() << endl;
    cout << "Department email is " << getEmail() << endl;

}
