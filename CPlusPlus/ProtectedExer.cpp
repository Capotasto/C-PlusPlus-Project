//
//  ProtectedExer.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/30/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "ProtectedExer.hpp"

#include "House.hpp"
#include "Apartment.hpp"

void mainProtectedExer(){
    
    int floor, washRooms, bedRooms, kitchen, size;
    int landry, parking, storage;
    
    cout << "Enter the number of floor:";
    cin >> floor;
    
    cout << "Enter the number of Wash rooms:";
    cin >> washRooms;

    
    cout << "Enter the number of bed rooms:";
    cin >> bedRooms;

    
    cout << "Enter the number of kitchen:";
    cin >> kitchen;

    cout << "Enter the number of size:";
    cin >> size;

    cout << "Enter the number of landry type below:" << endl;
    cout << "1. Shared, 2. Indoor" << endl;
    cin >> landry;

    cout << "Enter the number of parking type below:"<< endl;
    cout << "1. None, 2. 1parking, 3. 2Parking" << endl;

    cin >> parking;

    cout << "Enter the number of strage type below:"<< endl;
    cout << "1. None, 2. 1Strage, 3. 2Strage" << endl;
    cin >> storage;
    
    House house(floor, washRooms, bedRooms, kitchen, size);
    Apartment apartment(landry, parking, storage, house);
    
    apartment.print();

}