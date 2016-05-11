//
//  Exercise6.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/10/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "Exercise6.hpp"
//Constructer
CarExer6::CarExer6(){}

CarExer6::CarExer6(int id, string model, string brand, string color, int price, int year){
    setId(id);
    setModel(model);
    setBrand(brand);
    setColor(color);
    setPrice(price);
    setYear(year);
}

//destructer
CarExer6::~CarExer6(){}

int CarExer6::getId(){
    return id;
}
string CarExer6::getModel(){
    return model;
}
string CarExer6::getBrand(){
    return brand;
}
string CarExer6::getColor(){
    return color;
}
int CarExer6::getPrice(){
    return price;
}
int CarExer6::getYear(){
    return year;
}

void CarExer6::setId(int id){
    this->id = id;
}
void CarExer6::setModel(string model){
    this->model = model;
}
void CarExer6::setBrand(string brand){
    this->brand = brand;
}
void CarExer6::setColor(string color){
    this->color = color;
}
void CarExer6::setPrice(int price){
    this->price = price;
}
void CarExer6::setYear(int year){
    this->year = year;
}

void CarExer6::printCarExer6(){
    cout << "Car ID: " << getId() << endl;
    cout << "Car Model: " <<  getModel()<< endl;
    cout << "Car Brand: " << getBrand() << endl;
    cout << "Car Color: " << getColor() << endl;
    cout << "Car Price: " << getPrice() << endl;
    cout << "Car Year: " << getYear() << endl;
}

void useSetter(){
    CarExer6 car;
    int inputNumber;
    string inputString;
    
    cout << "Enter the number for Car ID:";
    cin >>inputNumber;
    //getchar();//Both OK
    car.setId(inputNumber);
    
    cin.ignore(1000, '\n');//Both OK
    cout << "Enter the number for Car Model:";
    getline(cin,inputString);
    car.setModel(inputString);
    
    cout << "Enter the number for Car Brand:";
    getline(cin,inputString);
    car.setBrand(inputString);
    
    cout << "Enter the number for Car Color:";
    getline(cin, inputString);
    car.setColor(inputString);
    
    cout << "Enter the number for Car getPrice:";
    cin >>inputNumber;
    car.setPrice(inputNumber);
    
    cout << "Enter the number for Car Year:";
    cin >>inputNumber;
    car.setYear(inputNumber);
    
    car.printCarExer6();


}

void useConstructer(){
    
    
    int inpuId,inputPrice, inputYear;
    string inputModel, inputBrand, inputColor;
    
    cout << "Enter the number for Car ID:";
    cin >>inpuId;
    
    cin.ignore(1000, '\n');//Both OK
    cout << "Enter the number for Car Model:";
    getline(cin,inputModel);
    
    cout << "Enter the number for Car Brand:";
    getline(cin,inputBrand);
    
    cout << "Enter the number for Car Color:";
    getline(cin, inputColor);
    
    cout << "Enter the number for Car getPrice:";
    cin >>inputPrice;
    
    cout << "Enter the number for Car Year:";
    cin >>inputYear;
    
    CarExer6 car(inpuId, inputModel, inputBrand, inputColor, inputPrice, inputYear);
    
    car.printCarExer6();

    
}

void makeClassExer6(){
    //id
    //name
    //price
    //quantity
    //manufacture
    //type
    
    //set
    //get
    //display
    //getTotal
    //const
    //destructer
}

void mainExercise6(){
    
    //useSetter();
    
    //useConstructer();
    
    makeClassExer6();
    
}