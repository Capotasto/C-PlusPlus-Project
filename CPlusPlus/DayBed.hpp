//
//  DayBed.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/18/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef DayBed_hpp
#define DayBed_hpp

#include <iostream>
#include "BedExer11.hpp"

using namespace std;

class DayBed:public Bed{
public:
    //constructor
    DayBed(int mattless, string name, int drawerNum, int price, string color, bool hashead, bool hasFoot, string material);
    //getter
    int getMattless();
    //setter
    void setMattless(int mattless);
    
    //other
    void print();
private:
    int mattless;
};

#endif /* DayBed_hpp */
