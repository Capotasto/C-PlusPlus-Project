//
//  StringFunctionExer.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/14/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "StringFunctionExer.hpp"

void printNormal(string str){
    cout << "String is " << str << endl;
}

void printReverse(string str){
    std::reverse(str.begin(), str.end());
    printNormal(str);
}

void concatenate(string str1, string str2){
    
    cout << "Concatenae is "<< str1 + str2 <<endl;
}

void changeCharactor(string str){
    cout << "Changing the string charactor!"<< endl;
    char *cstr = new char[str.length() + 1];
    strcpy(cstr, str.c_str());
    
    for (int i = 0; i < str.length() + 1; i++) {
        if (i % 2 == 0) {
            *(cstr+i) = 'J';
        }else{
            *(cstr+i) = 'A';
        }
    }
    
    for (int i = 0; i < str.length() + 1; i++) {
        cout << *(cstr + i);
    }
    cout << endl;
    
}

void mainStringFunctionExer(){
    
    string inputStr1, inputStr2, inputStr3;
    
    cout << "Enter the string for str1:";
    cin >> inputStr1;
    cout << "Enter the string for str2:";
    cin >> inputStr2;
    cout << "Enter the string for str3:";
    cin >> inputStr3;
    
    printNormal(inputStr1);
    
    printReverse(inputStr2);
    
    concatenate(inputStr3, inputStr1);
    concatenate(inputStr3, inputStr2);
    
    changeCharactor(inputStr3);
    
}