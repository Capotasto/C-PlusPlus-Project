//
//  TruckAssignment.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/20/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef TruckAssignment_hpp
#define TruckAssignment_hpp

#include "VehicleAssignment.hpp"

class Truck: public Vehicle{
public:
    //constructor
    Truck(Truck &, Vehicle &);
    Truck(string size, int power, bool flag, Vehicle &);
    //getter
    string getCabSize();
    int getHorsePower();
    bool getHaswinch();
    //setter
    Truck & setCabSize(string size);
    Truck & setHorsePower(int power);
    Truck & setHaswinch(bool flag);
    void print();
private:
    string mCabSize;
    int mHorsePower;
    bool mHaswinch;
};

#endif /* TruckAssignment_hpp */
