//
//  Exercise9.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/16/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "Exercise9.hpp"
#include "ClassRoom.hpp"

void mainExercise9(){

    int number, floor;
    string building;
    int isEmpty;
    
    cout << "Type the number for classroom number:";
    cin >> number;
    
    cout << "Type the number for classroom floor:";
    cin >> floor;
    
    cout << "Type the number for classroom Builgind Name:";
    getchar();
    getline(cin, building);

    cout << "Type the number for classroom is Empty or not (0:False, 1: True):";
    
    cin >> isEmpty;
    
    ClassRoom obj1(number, floor, building, isEmpty);
    
    ClassRoom *obj2 = &obj1;
    
    ClassRoom &obj3 = obj1;
    
    obj1.print();
    
    puts("");
    
    obj2->print();
    
    puts("");
    
    obj3.print();

}