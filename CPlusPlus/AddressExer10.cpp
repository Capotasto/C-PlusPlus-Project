//
//  AddressExer10.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/17/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "AddressExer10.hpp"

//constructor
AddressExer10::AddressExer10(){};

//getter
string AddressExer10::getStreetName(){
    return this->streetName;
};
int AddressExer10::getUnitNumber(){
    return this->unitNumber;
};
string AddressExer10::getCity(){
    return this->city;
};
string AddressExer10::getCountry(){
    return this->country;
};
string AddressExer10::getPostalCode(){
    return this->postalCode;
};
int AddressExer10::getFloor(){
    return this->floor;
};
string AddressExer10::getBuildingName(){
    return this->buildingName;
};

//setter
void AddressExer10::setStreetName(string street){
    this->streetName = street;
};
void AddressExer10::setUnitNumber(int unit){
    this->unitNumber = unit;
};
void AddressExer10::setCity(string city){
    this->city = city;
};
void AddressExer10::setCountry(string country){
    this->country = country;
};
void AddressExer10::setPostalCode(string code){
    this->postalCode = code;
};
void AddressExer10::setFloor(int floor){
    this->floor = floor;
};
void AddressExer10::setBuildingName(string building){
    this->buildingName = building;
};

//other
void AddressExer10::printAddress(){

    cout << "Address:Street name is " << getStreetName()<< endl;
    cout << "Address:unit Number is " << getUnitNumber()<< endl;
    cout << "Address:city name is " << getCity()<< endl;
    cout << "Address:country is " << getCountry()<< endl;
    cout << "Address:Postal Code is " << getPostalCode()<< endl;
    cout << "Address:Floor is " << getFloor()<< endl;
    cout << "Address:Building name is " << getBuildingName()<< endl;
};