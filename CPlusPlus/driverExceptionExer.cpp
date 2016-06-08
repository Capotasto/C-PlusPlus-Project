//
//  driverExceptionExer.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/7/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "driverExceptionExer.hpp"

class Storage{
public:
    Storage(){};
    Storage(int number, double size):mSize(size), mNumber(number){}
    int getNumber(){ return mNumber;}
    double getSize(){ return mSize;}
    void setNumber(int number){mNumber = number;}
    void setSize(double size){mSize = size;}
    Storage operator-(Storage& strage){
        Storage storage;
        storage.setNumber(this->getNumber()-strage.getNumber());
        storage.setSize(this->getSize()-strage.getSize());
        return storage;
    }
    Storage operator/(Storage& strage){
        Storage storage;
        storage.setNumber(this->getNumber()/strage.getNumber());
        storage.setSize(this->getSize()/strage.getSize());
        return storage;
    }
private:
    int mNumber;
    double mSize;
};

class DivideByZeroException : public runtime_error{
public:
    // constructor specifies default error message
    DivideByZeroException():runtime_error("attempted to divide by zero"){}
};

class EmptyStringException : public runtime_error{
public:
    EmptyStringException():runtime_error("String is empty"){}
};

class DoubleTypeException : public runtime_error{
public:
    DoubleTypeException():runtime_error("The type is not double, it's char"){};
};


void doDivision(int num1, int num2){
    if (num2 == 0) {
        throw DivideByZeroException();
    }
}

void getName(){
    string name;
    cout << "Enter your name: ";
    cin >> name;
    if (name.empty()) {
        throw EmptyStringException();
    }
}

void getDoubleArray(){
    double array[5];
    
    for (int i = 0; i < 5; i++) {
        cout << "Enter the double Number index" << i <<": ";
        cin >> array[i];
    }

}

void driverExceptionExer(){
    
    int inputNum1, inputNum2;
    
    cout << "Enter the number for input1:";
    cin >> inputNum1;
    
    cout << "Enter the number for input2:";
    cin >> inputNum2;
    
    try {
        doDivision(inputNum1, inputNum2);
    } catch (DivideByZeroException &e) {
        cout << "Exception occurred: " << e.what() << endl;

    }
    
    try {
        getName();
    } catch (EmptyStringException &e) {
        cout << "Exception occured: " << e.what() << endl;
    }
    
    try {
        getDoubleArray();
    } catch (EmptyStringException &e) {
        cout << "Exception occured: " << e.what() << endl;
    }

    
    
    
    
}