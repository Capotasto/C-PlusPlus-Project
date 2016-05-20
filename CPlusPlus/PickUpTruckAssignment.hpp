//
//  PickUpTruckAssignment.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/20/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef PickUpTruckAssignment_hpp
#define PickUpTruckAssignment_hpp

#include "TruckAssignment.hpp"

class PickUpTruck : public Truck{
public:
    //constructor
    PickUpTruck(PickUpTruck & pickUpTruck, Truck &truck, Vehicle &vehicle);
    PickUpTruck(string usage, int length, Truck &truck, Vehicle &vehicle);
    //getter
    string getUsage();
    int getLenght();
    //setter
    PickUpTruck & setUsage(string usage);
    PickUpTruck & setLenght(int length);
    //other
    void print();
private:
    string mUsage;
    int mLength;
};

#endif /* PickUpTruckAssignment_hpp */
