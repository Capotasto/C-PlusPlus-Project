//
//  VehicleAssignment.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/20/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "VehicleAssignment.hpp"

//constructor
Vehicle::Vehicle(Vehicle & vehicle):
mVin(vehicle.getVin()), mMaker(vehicle.getMaker()), mModel(vehicle.getModel()), mColor(vehicle.getColor()){};
//constructor2
Vehicle::Vehicle(int vin, string maker, string model, string color):
mVin(vin), mMaker(maker), mModel(model), mColor(color){};
//getter
int Vehicle::getVin(){
    return mVin;
};
string Vehicle::getMaker(){
    return mMaker;
};
string Vehicle::getModel(){
    return mModel;
};
string Vehicle::getColor(){
    return mColor;
};
//setter
Vehicle & Vehicle::setVin(int vin){
    mVin = vin;
    return *this;
};
Vehicle & Vehicle::setMaker(string maker){
    mMaker = maker;
    return *this;
};
Vehicle & Vehicle::setModel(string model){
    mModel = model;
    return *this;
};
Vehicle & Vehicle::setColor(string color){
    mColor = color;
    return *this;
};

void Vehicle::print(){
    cout << "-----Vehicle Class------"<< endl;
    cout << "Vehicle Maker is "<< getMaker() << endl;
    cout << "Vehicle Model is "<< getModel() << endl;
    cout << "Vehicle Color is "<< getColor() << endl;
}
