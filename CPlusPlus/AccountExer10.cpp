//
//  AccountExer10.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/17/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "AccountExer10.hpp"

//constructor
AccountExer10::AccountExer10(string first, string last, int birth[3], int balance):
firstName(first),lastName(last), birthDay(birth), balance(balance) {
    
};

//Other
void AccountExer10::display(){
    
    cout << "Fist name is "<< this->firstName << endl;
    cout << "Last name is "<< this->lastName << endl;
    printf("%d/%d/%d\n", this->birthDay[0],this->birthDay[1],this->birthDay[2]);
    cout << "balance is "<< this->balance << endl;
};