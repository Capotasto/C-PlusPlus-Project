//
//  ParkingSpot.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/1/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef ParkingSpot_hpp
#define ParkingSpot_hpp

#include <iostream>

using namespace std;

enum Type_Rate{
    HOUR = 3,
    DAY = 10,
    MONTH = 100
    
};

class ParkingSPot{
public:
    //Constructor
    ParkingSPot(int id, string location, Type_Rate type, int rate,
                string date, bool emptyFlag, int floor, bool handi);
    //Getter
    int getPid();
    string getLocation();
    Type_Rate getTypeRate();
    int getRate();
    string getDate();
    bool getIsEmpty();
    int getFloor();
    bool getHandicap();
    
    //Setter
    ParkingSPot & setPid(int id);
    ParkingSPot & setLocation(string location);
    ParkingSPot & setTypeRate(Type_Rate type);
    ParkingSPot & setRate(int rate);
    ParkingSPot & setDate(string date);
    ParkingSPot & setIsEmpty(bool emptyFlag);
    ParkingSPot & setFloor(int floor);
    ParkingSPot & setHandicap(bool handi);
    
    //other
    void print();
    
private:
    int mPid;
    string mLocation;
    Type_Rate mTypeRate;
    int mRate;
    string mDate;
    bool mIsEmpty;
    int mFloor;
    bool mHandicap;
    
};

#endif /* ParkingSpot_hpp */
