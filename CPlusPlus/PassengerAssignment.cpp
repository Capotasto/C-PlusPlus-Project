//
//  PassengerAssignment.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/20/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "PassengerAssignment.hpp"

//constructor
PassengerVehicle::PassengerVehicle(PassengerVehicle &passengerVehicle, Vehicle &vehicle):
mType(passengerVehicle.getType()), mNoofpassengers(passengerVehicle.getNoofpassengers()),
Vehicle(vehicle){};

PassengerVehicle::PassengerVehicle(string type, int passenger, Vehicle &vehicle):
mType(type), mNoofpassengers(passenger), Vehicle(vehicle){};

//getter
string PassengerVehicle::getType(){
    return mType;
};
int PassengerVehicle::getNoofpassengers(){
    return mNoofpassengers;
};

//setter
PassengerVehicle & PassengerVehicle::setType(string type){
    mType = type;
    return *this;
};
PassengerVehicle & PassengerVehicle::setNoofpassengers(int passenger){
    mNoofpassengers = passenger;
    return *this;
};

//other
void PassengerVehicle::print(){
    Vehicle::print();
    cout << "-----PassengerVehicle Class------"<< endl;
    cout << "PassengerVehicle type is "<< getType() << endl;
    cout << "PassengerVehicle noofpassengers are "<< getNoofpassengers() << endl;
    
};
