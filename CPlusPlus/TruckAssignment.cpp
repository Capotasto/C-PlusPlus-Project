//
//  TruckAssignment.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/20/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "TruckAssignment.hpp"

//constructor
Truck::Truck(Truck & truck, Vehicle & vehicle):
mCabSize(truck.getCabSize()), mHorsePower(truck.getHorsePower()), mHaswinch(truck.getHaswinch()),Vehicle(vehicle){};
Truck::Truck(string size, int power, bool flag, Vehicle & vehicle):
mCabSize(size), mHorsePower(power), mHaswinch(flag), Vehicle(vehicle){};
//getter
string Truck::getCabSize(){
    return mCabSize;
};
int Truck::getHorsePower(){
    return mHorsePower;
};
bool Truck::getHaswinch(){
    return mHaswinch;
};
//setter
Truck & Truck::setCabSize(string size){
    mCabSize = size;
    return *this;
};
Truck & Truck::setHorsePower(int power){
    mHorsePower = power;
    return *this;
};
Truck & Truck::setHaswinch(bool flag){
    mHaswinch = flag;
        return *this;
};
void Truck::print(){
    Vehicle::print();
    cout << "-----Truck Class------"<< endl;
    cout << "Truck Cab Size is "<< getCabSize() << endl;
    cout << "Truck HorsePower is "<< getHorsePower() << endl;
    cout << "Truck has Winch is "<< boolalpha <<getHaswinch() << endl;
};
