//
//  ProductExer8.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/12/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "ProductExer8.hpp"

//constructor
ProductExer8::ProductExer8(int id){
    this->id = id;
};
//destructor
ProductExer8::~ProductExer8(){};
//getter
int ProductExer8::getId(){
    return this->id;
};
string ProductExer8::getName(){
    return this->name;
};
int ProductExer8::getPrice(){
    return this->price;
};
int ProductExer8::getQuantity(){
    return this->quantity;
};
//setter
void ProductExer8::setId(int id){
    this->id = id;
};
void ProductExer8::setName(string name){
    this->name = name;
};
void ProductExer8::setPrice(int price){
    this->price = price;
};
void ProductExer8::setQuantity(int quantity){
    this->quantity = quantity;
};
//other
void ProductExer8::displayProduct(){
    cout << " The procuct Id is: " << this->id << endl;
    cout << " The procuct name is: " << this->name << endl;
    cout << " The procuct price is: " << this->price << endl;
    cout << " The procuct quantity is: " << this->quantity << endl;
};