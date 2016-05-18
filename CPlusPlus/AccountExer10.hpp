//
//  AccountExer10.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/17/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef AccountExer10_hpp
#define AccountExer10_hpp

#include <iostream>
using namespace std;

class AccountExer10{
public:
    //constructor
    AccountExer10(string first, string last, int birth[3], int balance);
    
    //Other
    void display();
    
private:
    const string firstName;
    string lastName;
    const int* birthDay;
    int balance;

};

#endif /* AccountExer10_hpp */
