//
//  BedExer11.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/18/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "BedExer11.hpp"

//constructor
Bed::Bed(string name, int drawerNum, int price, string color, bool hashead, bool hasFoot, string material):
name(name),
drawer(drawerNum),
price(price),
color(color),
hasHeadBoard(hashead),
hasFootBoard(hasFoot),
material(material)
{};

//getter
string Bed::getName(){
    return name;
};
int Bed::getDrawer(){
    return drawer;
};
int Bed::getPrice(){
    return price;
};
string Bed::getColor(){
    return color;
};
bool Bed::getHasHeadBoard(){
    return hasHeadBoard;
};
bool Bed::getHasFootBoard(){
    return hasFootBoard;
};
string Bed::getMaterial(){
    return material;
};

//setter
void Bed::setName(string name){
    this->name =name;
};
void Bed::setDrawer(int count){
    this->drawer = count;
};
void Bed::setPrice(int price){
    this->price =price;
};
void Bed::setColor(string color){
    this->color =color;
};
void Bed::setHasHeadBoard(bool flag){
    this->hasHeadBoard =flag;
};
void Bed::setHasFootBoard(bool flag){
    this->hasFootBoard =flag;
};
void Bed::setMaterial(string material){
    this->material =material;
};

//ohter
void Bed::print(){
    cout << "Bed name is " << getName() << endl;
    cout << "Bed drawer is " << getDrawer() << endl;
    cout << "Bed price is " << getPrice() << endl;
    cout << "Bed color is " << getColor() << endl;
    cout << "Bed has Head Board? " << noboolalpha << getHasHeadBoard() << endl;
    cout << "Bed has Foot Board? " << noboolalpha << getHasFootBoard() << endl;
    cout << "Bed material is" << getMaterial() << endl;
};