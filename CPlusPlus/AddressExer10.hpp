//
//  AddressExer10.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/17/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef AddressExer10_hpp
#define AddressExer10_hpp

#include <iostream>
using namespace std;

class AddressExer10{
public:
    //constructor
    AddressExer10();
    
    //getter
    string getStreetName();
    int getUnitNumber();
    string getCity();
    string getCountry();
    string getPostalCode();
    int getFloor();
    string getBuildingName();

    //setter
    void setStreetName(string street);
    void setUnitNumber(int unit);
    void setCity(string city);
    void setCountry(string country);
    void setPostalCode(string code);
    void setFloor(int floor);
    void setBuildingName(string building);
    
    //other
    void printAddress();
    
private:
    string streetName;
    int unitNumber;
    string city;
    string country;
    string postalCode;
    int floor;
    string buildingName;

};

#endif /* AddressExer10_hpp */
