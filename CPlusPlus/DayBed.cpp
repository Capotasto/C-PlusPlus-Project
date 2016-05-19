//
//  DayBed.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/18/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "DayBed.hpp"

//constructor
DayBed::DayBed(int mattless, string name, int drawerNum, int price, string color, bool hashead, bool hasFoot, string material):
mattless(mattless),
Bed(name, drawerNum, price, color, hashead, hasFoot, material)
{};
//getter
int DayBed::getMattless(){
    return mattless;
};
//setter
void DayBed::setMattless(int mattless){
    this->mattless = mattless;
};

//other
void DayBed::print(){
    Bed::print();
    cout << "Bed mattles is " << getMattless() << endl;
};