//
//  BunkBed.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/18/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef BunkBed_hpp
#define BunkBed_hpp

#include <iostream>
#include "BedExer11.hpp"

class BunkBed : public Bed{
public:
    //constructor
    BunkBed(int height, int width, int ladder, int shelve,string name, int drawerNum, int price, string color, bool hashead, bool hasFoot, string material);
    //getter
    int getHeight();
    int getWidth();
    int getLadder();
    int getShelve();
    
    //setter
    void setHeight(int height);
    void setWidth(int width);
    void setLadder(bool ladder);
    void setShelve(bool shelve);
    
    //other
    void print();

private:
    
    int height;
    int width;
    int ladder;
    int shelve;
};

#endif /* BunkBed_hpp */
