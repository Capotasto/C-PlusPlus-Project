//
//  driverExceptionExer.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/7/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "driverExceptionExer.hpp"

void doDivision(int num1, int num2){
    if (num2 == 0) {
        throw DivideByZeroException();
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
    
    
    
}