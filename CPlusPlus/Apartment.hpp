//
//  Apartment.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/30/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef Apartment_hpp
#define Apartment_hpp

#include "House.hpp"

class Apartment: public House{
public:
    Apartment(int landry, int parking, int strage, House &house);
    int getLandry();
    int getParking();
    int getStrage();
    
    Apartment & setLandry(int landry);
    Apartment & setParking(int parking);
    Apartment & setStrage(int strage);
    
    void print();
private:
    
    int mLandry;
    int mParking;
    int mStrage;


};
#endif /* Apartment_hpp */
