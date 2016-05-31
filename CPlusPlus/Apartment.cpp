//
//  Apartment.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/30/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "Apartment.hpp"

Apartment::Apartment(int landry, int parking, int strage, House &house)
:mLandry(landry),mParking(parking),mStrage(strage), House(house){};
int Apartment::getLandry(){
    return mLandry;
};
int Apartment::getParking(){
    return mParking;
};
int Apartment::getStrage(){
    return mStrage;
};

Apartment & Apartment::setLandry(int landry){
    mLandry = landry;
    return *this;
};
Apartment & Apartment::setParking(int parking){
    mParking = parking;
        return *this;
};
Apartment & Apartment::setStrage(int strage){
    mStrage = strage;
        return *this;
};

void Apartment::print(){
    cout << "Floor is "<< mFloor<< endl;
    cout << "WashRooms are "<< mWashRooms<< endl;
    cout << "BedRooms are "<< mBedRooms<< endl;
    cout << "Kinchen is "<< mKitchen<< endl;
    cout << "Size is "<< mSize<< endl;
    
    string landry = (mLandry == 1)? "Shared" :"Indoor";
    cout << "Landry is "<< landry << endl;
    
    string parking;
    switch (mParking) {
        case 1:
            parking = "None";
            break;
        case 2:
            parking = "1 Parking";
            break;
        case 3:
            parking = "2 Parkings";
            break;
        default:
            break;
    }
    cout << "Parking is "<< parking<< endl;
    
    string strage;
    switch (mStrage) {
        case 1:
            strage = "None";
            break;
        case 2:
            strage = "1 Storage";
            break;
        case 3:
            strage = "2 Storages";
            break;
        default:
            break;
    }
    cout << "Strage is "<< strage<< endl;

};
