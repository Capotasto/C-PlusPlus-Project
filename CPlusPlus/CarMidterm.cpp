//
//  CarMidterm.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/31/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "CarMidterm.hpp"

//constructor
CarMidterm::CarMidterm(int vin, string maker, string model, int year, string color, TechInforMidterm &tech):mTechInfo(tech){
    setVin(vin).setMaker(maker).setModel(model).setYear(year).setColor(color);
};
//getter
int CarMidterm::getVin(){
    return mVin;
};
string CarMidterm::getMaker(){
    return mMaker;
};
string CarMidterm::getModel(){
    return mModel;
};
int CarMidterm::getYear(){
    return mYear;
};
string CarMidterm::getColor(){
    return mColor;
};
TechInforMidterm CarMidterm::getTechInfo(){
    return mTechInfo;
};
//setter
CarMidterm & CarMidterm::setVin(int vin){
    if (vin < 1) {
        vin = 1;
    }else if(vin > 1000000000){
        vin = 1000000000;
    }
    mVin = vin;
    return *this;
};
CarMidterm & CarMidterm::setMaker(string maker){
    mMaker = maker;
    return *this;
};
CarMidterm & CarMidterm::setModel(string model){
    mModel = model;
    return *this;
};
CarMidterm & CarMidterm::setYear(int year){
    if (year < 1950) {
        year = 1950;
    }else if(year > 2016){
        year = 2016;
    }
    mYear = year;
    return *this;
};
CarMidterm & CarMidterm::setColor(string color){
    mColor = color;
    return *this;
};
CarMidterm & CarMidterm::setTechInfo(TechInforMidterm &tech){
    mTechInfo = tech;
    return *this;
};
//other
void CarMidterm::print(){
    cout << "VIN is "<< setfill('0') << setw(10) << getVin() << endl;
    cout << "Maker is " << getMaker() << endl;
    cout << "Model is " << getModel() << endl;
    cout << "Year is " << getYear() << endl;
    cout << "Color is " << getColor() << endl;
    getTechInfo().print();

};