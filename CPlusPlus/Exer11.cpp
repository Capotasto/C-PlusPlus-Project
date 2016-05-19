//
//  Exer11.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/18/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "Exer11.hpp"
#include "BunkBed.hpp"
#include "DayBed.hpp"

void mainExer11(){
    
    int bedType, height,width,ladder, shelve, drawerNum, price, headboard, footboard, mattless;
    string color, bedName, material;
    bool hashead = false, hasFoot = false;
    
    cout << "Choose the number below:"<< endl;
    cout << "1.Bunk Bed."<< endl;
    cout << "2.Day Bed.";
    cin >> bedType;
   
    cout << "Enter the your Bed name:";
    getchar();
    getline(cin, bedName);
    
    cout << "Enter the number of drawer:";
    cin >> drawerNum;
    
    cout << "Enter the number for bed price:";
    cin >> price;
    
    cout << "Choose the number below" << endl;
    cout << "1.Have a HeadBoard."<< endl;
    cout << "2.Not have a HeadBoard.";
    cin >> headboard;
    if (headboard == 1) {
        hashead = true;
    }else if(headboard == 2){
        hashead = false;
    }
    
    cout << "Choose the number below"<< endl;
    cout << "1.Have a FootBoard."<< endl;
    cout << "2.Not have a FootBoard.";
    cin >> footboard;
    if (footboard == 1) {
        hasFoot = true;
    }else if(footboard == 2){
        hasFoot = false;
    }
    
    cout << "Enter the color name:";
    getchar();
    getline(cin, color);

    cout << "Enter the bed material name:";
    getline(cin,material);
    
    DayBed *dayBed;
    BunkBed *bunkBed;
    
    switch (bedType) {
        case 1://Bunk Bed
            cout << "Enter the bed height";
            cin >> height;
            
            cout << "Enter the bed width";
            cin >> width;
            
            cout << "Enter the number of ladder";
            cin >> ladder;
            
            cout << "Enter the number of shelves";
            cin >> shelve;
            
            bunkBed = new BunkBed(height, width, ladder, shelve, bedName, drawerNum, price, color, hashead, hasFoot, material);
            bunkBed->print();

            break;
            
        case 2://Day Bed
            cout << "Enter the number of mattless";
            cin >> mattless;
            
            dayBed = new DayBed(mattless, bedName ,drawerNum, price, color, hashead, hasFoot, material);
            dayBed->print();

            break;

            
        default:
            
            break;
    }
    
}