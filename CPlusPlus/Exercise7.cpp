//
//  Exercise7.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/11/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "Exercise7.hpp"

//constracter

//constructor
PaintExer7::PaintExer7(){};
PaintExer7::PaintExer7(int id){
    this->setId(id);
};
PaintExer7::PaintExer7(int id, string colorName){
    this->setId(id);
    this->setColorName(colorName);
};
PaintExer7::PaintExer7(int id, string colorName, int price, string producer, string usage){
    this->setId(id);
    this->setColorName(colorName);
    this->setPrice(price);
    this->setProducer(producer);
    this->setUsage(usage);
};
//destructor
PaintExer7::~PaintExer7(){};
//Getter
int PaintExer7::getId(){
    return this->id;
};
string PaintExer7::getColorName(){
    return this->colorName;
};
int PaintExer7::getPrice(){
    return this->price;
};
string PaintExer7::getProducer(){
    return this->producer;
};
string PaintExer7::getUsage(){
    return this->usage;
};

//Setter
void PaintExer7::setId(int id){
    this->id = id;
};
void PaintExer7::setColorName(string colorName){
    this->colorName = colorName;
};
void PaintExer7::setPrice(int price){
    this->price = price;
};
void PaintExer7::setProducer(string producer){
    this->producer = producer;
};
void PaintExer7::setUsage(string usage){
    this->usage = usage;
};

//other
void PaintExer7::printPaintExer7(){
    cout << "Paint id : "<< getId() << endl;
    cout << "Paint Color Name : "<< getColorName() << endl;
    cout << "Paint Price : "<< getPrice() << endl;
    cout << "Paint Producer : "<< getProducer() << endl;
    cout << "Paint Usage : "<< getUsage() << endl;
    cout << endl;
};
void PaintExer7::updatePaintExer7(int id){
    this->id = id;
};

bool PaintExer7::updatePaintExer7(int id, string colorName){
    bool isUpdated = false;
    if (getId() == id) {
        this->id = id;
        this->colorName = colorName;
        isUpdated = true;
    }else{
        cout << id << " is not found." << endl;
    }
    return isUpdated;
};

void mainExercise7(){
    
    int inputId, inputPrice;
    string inputColorName, inputProducer, inputUsage;
    
    cout << "Enter the number for paint id: ";
    cin >> inputId;
    
    cout << "Enter the string for paint color name: ";
    getchar();
    getline(cin, inputColorName);
    
    cout << "Enter the number for paint price: ";
    cin >> inputPrice;
    
    cout << "Enter the string for paint producer: ";
    getchar();
    getline(cin, inputProducer);
    
    cout << "Enter the string for paint usage: ";
    getline(cin, inputUsage);
    
    PaintExer7 paint1(inputId, inputColorName, inputPrice, inputProducer, inputUsage);
    paint1.printPaintExer7();
    
    cout << "Enter the number for new paint id: ";
    cin >> inputId;
    
    PaintExer7 paint2(inputId);
    paint2.setColorName(paint1.getColorName());
    paint2.setPrice(paint1.getPrice());
    paint2.setProducer(paint1.getProducer());
    paint2.setUsage(paint1.getUsage());
    paint2.printPaintExer7();
    
    cout << "Enter the number for new paint id(using update function): ";
    cin >> inputId;
    
    paint2.updatePaintExer7(inputId);
    paint2.printPaintExer7();
    
    cout << "Enter the number for search paint id: ";
    cin >> inputId;
    
    cout << "Enter the string for new paint color name: ";
    getchar();
    getline(cin, inputColorName);
    
    PaintExer7 paint3(inputId, inputColorName);
    paint3.setPrice(paint2.getPrice());
    paint3.setProducer(paint2.getProducer());
    paint3.setUsage(paint2.getUsage());
    paint3.printPaintExer7();

    cout << "Enter the number for search paint id(using update function): ";
    cin >> inputId;
    
    cout << "Enter the string for new paint color name(using update function): ";
    getchar();
    getline(cin, inputColorName);
    
    if(paint3.updatePaintExer7(inputId, inputColorName)){
        paint3.printPaintExer7();
    }
    
    
}