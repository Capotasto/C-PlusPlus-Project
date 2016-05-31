//
//  TechInforMidterm.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/31/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "TechInforMidterm.hpp"

//constructor
TechInforMidterm::TechInforMidterm(int cylinder, int horse, int volume){
    setCylinderNumber(cylinder).setHorsePower(horse).setEngineVolume(volume);
};
//getter
int TechInforMidterm::getCylinderNumber(){
    return mCylinderNumber;
};
int TechInforMidterm::getHorsePower(){
        return mHorsePower;
};
int TechInforMidterm::getEngineVolume(){
    return mEngineVolume;
};
//setter
TechInforMidterm & TechInforMidterm::setCylinderNumber(int cylinder){
    if (cylinder < 1) {
        cylinder = 1;
    }else if(cylinder > 12){
        cylinder = 12;
    }
    mCylinderNumber = cylinder;
    return *this;
};
TechInforMidterm & TechInforMidterm::setHorsePower(int horse){
    if (horse < 1) {
        horse = 1;
    }
    mHorsePower = horse;
    return *this;
};
TechInforMidterm & TechInforMidterm::setEngineVolume(int volume){
    if (volume < 1) {
        volume = 1;
    }
    mEngineVolume = volume;
    return *this;
};

void TechInforMidterm::print(){
    cout << "Cylinder Number is " << getCylinderNumber() << endl;
    cout << "Horse Power is " << getHorsePower() << endl;
    cout << "EngineVolume is " << getEngineVolume() << endl;
};


