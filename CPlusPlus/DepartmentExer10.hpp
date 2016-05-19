//
//  DepartmentExer10.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/17/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef DepartmentExer10_hpp
#define DepartmentExer10_hpp

#include <iostream>
#include "AddressExer10.hpp"
using namespace std;

class DepartmentExer10{
public:
    //constructor
    DepartmentExer10(string name, AddressExer10 &location, string telephone, string email);
    //gettter
    string getName();
    AddressExer10 getLocation();
    const string getTelephone();
    string getEmail();

    //setter
    void setName(string name);
    void setLocation(AddressExer10 &location);
    //const string setTelephone;
    void setEmail(string email);
    
    //Other
    void display();
    
private:
    string name;
    AddressExer10 location;
    const string telephone;
    string email;
};

#endif /* DepartmentExer10_hpp */
