//
//  DutyTruckAssignment.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/20/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef DutyTruckAssignment_hpp
#define DutyTruckAssignment_hpp

#include "TruckAssignment.hpp"

class DutyTruck: public Truck{
public:
    DutyTruck(DutyTruck &dutyTruck, Truck &truck, Vehicle &vehicle);
    DutyTruck(double tonnage, int wheel, Truck &truck, Vehicle &vehicle);
    
    //getter
    double getTonnage();
    int getNoofwheels();
    
    //setter
    DutyTruck & setTonnage(double tonnage);
    DutyTruck & setNoofwheels(int wheel);
    
    void print();

private:
    double mTonnage;
    int mNoofwheels;
};

#endif /* DutyTruckAssignment_hpp */
