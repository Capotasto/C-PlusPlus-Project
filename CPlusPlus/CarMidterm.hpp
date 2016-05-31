//
//  CarMidterm.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/31/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef CarMidterm_hpp
#define CarMidterm_hpp

#include "TechInforMidterm.hpp"
#include  <iomanip>
using namespace std;

class CarMidterm{
public:
    //constructor
    CarMidterm(int vin, string maker, string model, int year, string color, TechInforMidterm &tech);
    //getter
    int getVin();
    string getMaker();
    string getModel();
    int getYear();
    string getColor();
    TechInforMidterm getTechInfo();
    //setter
    CarMidterm & setVin(int vin);
    CarMidterm & setMaker(string maker);
    CarMidterm & setModel(string model);
    CarMidterm & setYear(int year);
    CarMidterm & setColor(string color);
    CarMidterm & setTechInfo(TechInforMidterm &tech);
    //other
    void print();
private:
    int mVin;
    string mMaker;
    string mModel;
    int mYear;
    string mColor;
    TechInforMidterm mTechInfo;
};

#endif /* CarMidterm_hpp */
