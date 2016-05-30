//
//  House.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/30/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "House.hpp"

House::House(int floor, int wash, int bed, int kitchen, int size):
mFloor(floor), mWashRooms(wash), mBedRooms(bed), mKitchen(kitchen), mSize(size){};
House::House(House &house):
mFloor(house.mFloor), mWashRooms(house.mWashRooms), mBedRooms(house.mBedRooms), mKitchen(house.mKitchen), mSize(house.mSize){};