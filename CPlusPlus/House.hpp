//
//  House.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/30/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef House_hpp
#define House_hpp

#include <iostream>

using namespace std;

class House{
public:
    House(int floor, int wash, int bed, int kitchen, int size);
    House(House &house);
    
protected:
    int mFloor;
    int mWashRooms;
    int mBedRooms;
    int mKitchen;
    int mSize;

};

#endif /* House_hpp */
