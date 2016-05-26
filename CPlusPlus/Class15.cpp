//
//  Class15.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/26/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "Class15.hpp"

void func1(int num){//+
    int input;
    cout << "Enter the number : ";
    cin >> input;
    cout << "func1's answer is "<< input <<"+"<< num << "="<< input+num<< endl;
}
void func2(int num){//-
    int input;
    cout << "Enter the number : ";
    cin >> input;
    cout << "func1's answer is "<< input <<"-"<< num << "="<< input-num << endl;
}
void func3(int num){//*
    int input;
    cout << "Enter the number : ";
    cin >> input;
    cout << "func1's answer is "<< input <<"*"<< num << "="<< input*num << endl;
}

void doFunctionPointer(){
    void(*ptr[3])(int) = {func1, func2, func3};
    
    int input;
    
    cout << "Enter the number from 1 to 3, 999 to the end. : ";
    cin >> input;
    
    while (1 <= input && input <= 3 && input != 999) {
        (*ptr[input-1])(input);
        cout << "Enter the number from 1 to 3, 999 to the end. : ";
        cin >> input;
    }
}

void copyToNewArray(char *array1, char *array2, int size){
    
    strncpy ( array2, array1, size );
    array2[size] = '\0';
    
    for (int i = 0 ; i < size; i++) {
        cout << "array2["<<i<<"] = " << array2[i]<< endl;
    }

}

void doCopyToArray(){
    int const SIZE_CLASS15 = 5;
    char input[SIZE_CLASS15];
    char newArray[SIZE_CLASS15];
    
    for (int i = 0 ; i < SIZE_CLASS15; i++) {
        cout << "Enter the charactor ("<<i+1<<"/"<<SIZE_CLASS15<<"): ";
        cin >> input[i];
    }
    
    copyToNewArray(input, newArray, SIZE_CLASS15);

}

void mainClass15(){
    
    //doFunctionPointer();
    
    doCopyToArray();

}