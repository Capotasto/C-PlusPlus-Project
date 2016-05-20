//
//  PassengerAssignment.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/20/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef PassengerAssignment_hpp
#define PassengerAssignment_hpp

#include "VehicleAssignment.hpp"

class PassengerVehicle : Vehicle{
public:
    //constructor
    PassengerVehicle(PassengerVehicle &passengerVehicle, Vehicle &vehicle);
    PassengerVehicle(string type, int passenger, Vehicle &vehicle);
    
    //getter
    string getType();
    int getNoofpassengers();

    //setter
    PassengerVehicle & setType(string type);
    PassengerVehicle & setNoofpassengers(int passenger);
    
    //other
    void print();

private:
    string mType;
    int mNoofpassengers;
    
};

#endif /* PassengerAssignment_hpp */
