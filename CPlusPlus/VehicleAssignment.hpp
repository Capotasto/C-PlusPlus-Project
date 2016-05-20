//
//  VehicleAssignment.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/20/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef VehicleAssignment_hpp
#define VehicleAssignment_hpp

#include <iostream>
using namespace std;

class Vehicle{
public:
    
    //constructor1
    Vehicle(Vehicle &);
    //constructor2
    Vehicle(int vin, string maker, string model, string color);
    //getter
    int getVin();
    string getMaker();
    string getModel();
    string getColor();
    //setter
    Vehicle & setVin(int vin);
    Vehicle & setMaker(string maker);
    Vehicle & setModel(string model);
    Vehicle & setColor(string color);
    
    void print();
    
private:
    int mVin;
    string mMaker;
    string mModel;
    string mColor;
    
};

#endif /* VehicleAssignment_hpp */
