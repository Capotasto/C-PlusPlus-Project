//
//  ClassRoom.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/16/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef ClassRoom_hpp
#define ClassRoom_hpp

#include <iostream>

using namespace std;

class ClassRoom{

public:
    //constructor
    ClassRoom();
    ClassRoom(int number, int floor, string name, bool flag);
    //getter
    int getRoomNumber();
    int getFloor();
    string getBuildingName();
    bool getIsEmpty();
    //setter
    void setRoomNumber(int number);
    void setFloor(int floor);
    void setBuildingName(string name);
    void setIsEmpty(bool flag);
    //other
    void print();
    
    
private:
    int number;
    int floor;
    string building;
    bool isEmpty;
    
};

#endif /* ClassRoom_hpp */
