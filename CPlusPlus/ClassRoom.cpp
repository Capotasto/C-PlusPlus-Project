//
//  ClassRoom.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/16/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "ClassRoom.hpp"

//constructor
ClassRoom::ClassRoom(){
    
};
ClassRoom::ClassRoom(int number, int floor, string name, bool flag){
    this->number = number;
    this->floor = floor;
    this->building = name;
    this->isEmpty = flag;
    
};
//getter
int ClassRoom::getRoomNumber(){
    return number;
};
int ClassRoom::getFloor(){
    return floor;
};
string ClassRoom::getBuildingName(){
    return building;
};
bool ClassRoom::getIsEmpty(){
    return isEmpty;
};
//setter
void ClassRoom::setRoomNumber(int number){
    this->number = number;
};
void ClassRoom::setFloor(int floor){
    this->floor = floor;
};
void ClassRoom::setBuildingName(string name){
    this->building = name;
};
void ClassRoom::setIsEmpty(bool flag){
    this->isEmpty = flag;
};
//other
void ClassRoom::print(){
    cout << "Class Room Number is " << getBuildingName() << endl;
    cout << "Class Room Floor is " << getFloor() << endl;
    cout << "Class Room Building Name is " << getBuildingName() << endl;
    string empty = getIsEmpty() ? "Avarable" : "Unavarable";
    cout << "Now Class Room is " << empty << endl;

};