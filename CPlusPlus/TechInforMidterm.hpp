//
//  TechInforMidterm.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/31/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef TechInforMidterm_hpp
#define TechInforMidterm_hpp

#include <iostream>
#include <string>

using namespace std;

class TechInforMidterm{
public:
    //constructor
    TechInforMidterm(int cylinder, int horse, int volume);
    //getter
    int getCylinderNumber();
    int getHorsePower();
    int getEngineVolume();
    //setter
    TechInforMidterm & setCylinderNumber(int cylinder);
    TechInforMidterm & setHorsePower(int horse);
    TechInforMidterm & setEngineVolume(int volume);
    //other
    void print();
private:
    int mCylinderNumber;
    int mHorsePower;
    int mEngineVolume;
};
#endif /* TechInforMidterm_hpp */
