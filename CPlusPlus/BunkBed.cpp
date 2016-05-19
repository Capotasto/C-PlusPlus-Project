//
//  BunkBed.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/18/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "BunkBed.hpp"
BunkBed::BunkBed(int height, int width, int ladder, int shelve,string name, int drawerNum, int price, string color, bool hashead, bool hasFoot, string material):
height(height),
width(width),
ladder(ladder),
shelve(shelve),
Bed(name, drawerNum, price, color, hashead, hasFoot, material)
{};

//getter
int BunkBed::getHeight(){
    return height;
};
int BunkBed::getWidth(){
    return width;
};
int BunkBed::getLadder(){
    return ladder;
};
int BunkBed::getShelve(){
    return shelve;
};

//setter
void BunkBed::setHeight(int height){
    this->height = height;
};
void BunkBed::setWidth(int width){
    this->height = width;
};
void BunkBed::setLadder(bool ladder){
    this->height = ladder;
};
void BunkBed::setShelve(bool shelve){
    this->height = shelve;
};

//other
void BunkBed::print(){
    Bed::print();
    cout << "Bed Heght is "<< getHeight() << endl;
    cout << "Bed Width is "<< getWidth() << endl;
    cout << "The number of Bed Ladder is "<< getLadder() << endl;
    cout << "The number of bed shelves is "<< getShelve() << endl;
}