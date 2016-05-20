//
//  DutyTruckAssignment.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/20/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "DutyTruckAssignment.hpp"

DutyTruck::DutyTruck(DutyTruck & dutyTruck, Truck &truck, Vehicle &vehicle):
mTonnage(dutyTruck.getTonnage()), mNoofwheels(dutyTruck.getNoofwheels()), Truck(truck, vehicle)
{};

DutyTruck::DutyTruck(double tonnage, int wheel, Truck & truck, Vehicle &vehicle):
mTonnage(tonnage), mNoofwheels(wheel), Truck(truck, vehicle)
{};

//getter
double DutyTruck::getTonnage(){
    return mTonnage;
};
int DutyTruck::getNoofwheels(){
    return mNoofwheels;
};

//setter
DutyTruck & DutyTruck::setTonnage(double tonnage){
    mTonnage = tonnage;
    return *this;
};
DutyTruck & DutyTruck::setNoofwheels(int wheel){
    mNoofwheels = wheel;
    return *this;
};

void DutyTruck::print(){
    Truck::print();
    cout << "-----DutyTruck Class------"<< endl;
    cout << "DutyTruck tonnage is "<< getTonnage() << endl;
    cout << "DutyTruck noofwheels are "<< getNoofwheels() << endl;

};