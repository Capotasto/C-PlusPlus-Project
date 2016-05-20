//
//  driverAssignment3.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/20/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "driverAssignment3.hpp"

void driverAssignment3(){
    //Vehicle
    int mVin;
    string mMaker;
    string mModel;
    string mColor;
    //Truck
    int optCabSize;
    string mCabSize;
    int mHorsePower;
    int optWinch;
    bool mHaswinch;
    //Duty
    double mTonnage;
    int mNoofwheels;
    //Pickup
    string mUsage;
    int mLength;
    //Passenger
    string mType;
    int mNoofpassengers;
    
    cout << "Enter the number for VIN: ";
    cin >> mVin;
    
    cout << "Enter the maker name: ";
    getchar();
    getline(cin, mMaker);
    
    cout << "Enter the model name: ";
    getline(cin, mModel);
    
    cout << "Enter the color name: ";
    getline(cin, mColor);
    
    Vehicle *vehicle = new Vehicle(mVin, mMaker, mModel, mColor);
    vehicle->print();
    puts("");
    
    cout << "Enter the Number of cab size below: " << endl;
    cout << "1. Quad cab" << endl;
    cout << "2. Double cab"<< endl;
    cin >> optCabSize;
    if(optCabSize == 1) mCabSize = "Quad cab";
    else if(optCabSize == 2) mCabSize = "Double cab";
    else mCabSize = "Unknown Cab";
    
    cout << "Enter the number for HorsePower: ";
    cin >> mHorsePower;
    
    cout << "Enter the Number below: " << endl;
    cout << "1. Has winch" << endl;
    cout << "2. No winch"<< endl;
    cin >> optWinch;
    if(optWinch == 1) mHaswinch = true;
    else if(optWinch == 2) mHaswinch = false;
    else mHaswinch = false;
    
    Truck *truck = new Truck(mCabSize, mHorsePower, mHaswinch, *vehicle);
    truck->print();
    puts("");
    
    cout << "Enter the number(avalabe double) for Tonnage: ";
    cin >> mTonnage;
    
    cout << "Enter the number for Noofwheels: ";
    cin >> mNoofwheels;
    
    DutyTruck *dutyTruck = new DutyTruck(mTonnage, mNoofwheels, *truck, *vehicle);
    dutyTruck->print();
    puts("");
    
    cout << "Enter the Usage: ";
    getchar();
    getline(cin, mUsage);
    
    cout << "Enter the number for Length: ";
    cin >> mLength;
    
    PickUpTruck *pickUpTruck = new PickUpTruck(mUsage, mLength, *truck, *vehicle);
    pickUpTruck->print();
    puts("");
    
    cout << "Enter the Type: ";
    getchar();
    getline(cin, mType);
    
    cout << "Enter the number for Noofpassengers: ";
    cin >> mNoofpassengers;
    
    PassengerVehicle* passenger = new PassengerVehicle(mType, mNoofpassengers, *vehicle);
    passenger->print();
    puts("");
    
    delete vehicle;
    delete truck;
    delete dutyTruck;
    delete pickUpTruck;
    delete passenger;
    
}