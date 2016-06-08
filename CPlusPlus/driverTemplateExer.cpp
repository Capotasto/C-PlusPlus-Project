//
//  driverTemplateExer.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/8/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "driverTemplateExer.hpp"

enum type_menu_template{
    SUM_INT=1,
    SUB_INT,
    MUL_INT,
    DIV_INT,
    SUM_DOUBLE,
    SUB_DOUBLE,
    MUL_DOUBLE,
    DIV_DOUBLE,
    QUIT
};

template <typename T>
void addNumbers(T num1, T num2) {
    cout << typeid(num1).name() << ":Sum is :" << num1 + num2 << endl;
}

template <typename T>
void subNumbers(T num1, T num2) {
    cout << typeid(num1).name() << ":Deduction is :" << num1 - num2 << endl;
}

template <typename T>
void mulNumbers(T num1, T num2) {
    cout << typeid(num1).name() << ":Multiplication is :" << num1 * num2 << endl;
}

template <typename T>
void divNumbers(T num1, T num2) {
    if (num2 != 0) {
        cout << typeid(num1).name() <<":Division is :" << num1 / num2 << endl;
    }else{
        cout << "denominator is 0!!!"<< endl;
    }

}



void displayMenu(){
    cout << "Choose the number below." << endl;
    cout << "1.Sum of Integers." << endl;
    cout << "2.Deduction of Integers." << endl;
    cout << "3.Multiplication of Integers." << endl;
    cout << "4.Division of Integers." << endl;
    cout << "5.Sum of Doubles." << endl;
    cout << "6.Deduction of Doubles." << endl;
    cout << "7.Multiplication of Doubles." << endl;
    cout << "8.Division of Doubles." << endl;
    cout << "9.Quit." << endl;
}

void driverTemplateExer(){
    
    int intNum1, intNum2;
    double doubleNum1, doubleNum2;
    
    cout << "Enter the integer Number for num1: ";
    cin >> intNum1;
    
    cout << "Enter the integer Number for num2: ";
    cin >> intNum2;
    
    cout << "Enter the Double Number for doubleNum1: ";
    cin >> doubleNum1;
    
    cout << "Enter the Double Number for doubleNum2: ";
    cin >> doubleNum2;
    
    displayMenu();
    int inputMenu;
    
    while (inputMenu != QUIT) {
        cin >> inputMenu;
        switch (inputMenu) {
            case SUM_INT:
                addNumbers(intNum1, intNum2);
                break;
            case SUB_INT:
                subNumbers(intNum1, intNum2);
                break;
                
            case MUL_INT:
                mulNumbers(intNum1, intNum2);
                break;
                
            case DIV_INT:
                divNumbers(intNum1, intNum2);
                break;
                
            case SUM_DOUBLE:
                addNumbers(doubleNum1, doubleNum2);
                break;
                
            case SUB_DOUBLE:
                subNumbers(doubleNum1, doubleNum2);
                break;
                
            case MUL_DOUBLE:
                mulNumbers(doubleNum1, doubleNum2);
                break;
                
            case DIV_DOUBLE:
                divNumbers(doubleNum1, doubleNum2);
                break;
                
            case QUIT:
                exit(0);
                break;
                
                
            default:
                break;
        }
    }
}