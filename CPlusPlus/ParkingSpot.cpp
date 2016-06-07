//
//  ParkingSpot.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/1/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "ParkingSpot.hpp"

//Constructor
ParkingSPot::ParkingSPot(int id, string location, Type_Rate type, int rate,
                         string date, bool emptyFlag, int floor, bool handi){
    setPid(id).setLocation(location).setTypeRate(type).setRate(rate).setDate(date).setIsEmpty(emptyFlag).setFloor(floor).setHandicap(handi);
};
//Getter
int ParkingSPot::getPid(){
    return mPid;
};
string ParkingSPot::getLocation(){
    return mLocation;
};
Type_Rate ParkingSPot::getTypeRate(){
    return mTypeRate;
};
int ParkingSPot::getRate(){
    return mRate;
};
string ParkingSPot::getDate(){
    return mDate;
};
bool ParkingSPot::getIsEmpty(){
    return mIsEmpty;
};
int ParkingSPot::getFloor(){
    return mFloor;
};
bool ParkingSPot::getHandicap(){
    return mHandicap;
};

//Setter
ParkingSPot & ParkingSPot::setPid(int id){
    mPid =id;
    return *this;
};
ParkingSPot & ParkingSPot::setLocation(string location){
    mLocation = location;
    return *this;
};
ParkingSPot & ParkingSPot::setTypeRate(Type_Rate type){
    mTypeRate = type;
    return *this;
};
ParkingSPot & ParkingSPot::setRate(int rate){
    mRate = rate;
    return *this;
};
ParkingSPot & ParkingSPot::setDate(string date){
    mDate = date;
    return *this;
};
ParkingSPot & ParkingSPot::setIsEmpty(bool emptyFlag){
    mIsEmpty = emptyFlag;
    return *this;
};
ParkingSPot & ParkingSPot::setFloor(int floor){
    mFloor = floor;
    return *this;
};
ParkingSPot & ParkingSPot::setHandicap(bool handi){
    mHandicap = handi;
    return *this;
};

//other
void ParkingSPot::print(){
    cout << "Pid:" << getPid()<< endl;
    cout << "Location: " << getLocation()<< endl;
    cout << "Type Of Rate: " << getTypeRate()<< endl;
    cout << "Rate: " << getRate()<< endl;
    cout << "Date: " << getDate()<< endl;
    cout << "IsEmpty: " << getIsEmpty()<< endl;
    cout << "Floor: " << getFloor()<< endl;
    cout << "Handicap: " << getHandicap()<< endl;
};
