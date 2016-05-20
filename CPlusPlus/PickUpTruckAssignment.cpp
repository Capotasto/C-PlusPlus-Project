//
//  PickUpTruckAssignment.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/20/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "PickUpTruckAssignment.hpp"

//constructor
PickUpTruck::PickUpTruck(PickUpTruck & pickUpTruck, Truck &truck, Vehicle &vehicle):
mUsage(pickUpTruck.getUsage()), mLength(pickUpTruck.getLenght()), Truck(truck, vehicle)
{};

PickUpTruck::PickUpTruck(string usage, int length, Truck &truck, Vehicle &vehicle):
mUsage(usage), mLength(length), Truck(truck, vehicle){};
//getter
string PickUpTruck::getUsage(){
    return mUsage;
};
int PickUpTruck::getLenght(){
    return mLength;
};
//setter
PickUpTruck & PickUpTruck::setUsage(string usage){
    mUsage= usage;
    return *this;
};
PickUpTruck & PickUpTruck::setLenght(int length){
    mLength = length;
    return *this;
};
//other
void PickUpTruck::print(){
    Truck::print();
    cout << "-----PickUpTruck Class------"<< endl;
    cout << "PickUpTruck Usage is "<< getUsage() << endl;
    cout << "PickUpTruck Length is "<< getLenght() << endl;
};
