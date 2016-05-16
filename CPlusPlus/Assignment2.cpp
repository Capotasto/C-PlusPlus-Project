//
//  Assignment2.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/12/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "Assignment2.hpp"
#include "Airplane.hpp"

enum typ_action_assignment2{
    RESERVATION,//0
    CANCELATION//1
};

bool validateRowAndCol(int classType, int row, int col, int planeType){
    bool isOK = true;
    
    switch (classType) {
        case FIRST:
            if (row > 5 || row < 0) {
                isOK =false;
                cout << "Row num is wrong!!" << endl;
            }
            if (col > 7 || col < 4) {
                isOK =false;
                cout << "Col num is wrong!!" << endl;
            }
            break;
        case BUISINESS:
            if (row > 11 || row < 0) {
                isOK =false;
                cout << "Row num is wrong!!" << endl;
            }
            if (col > 8 || col < 3) {
                isOK =false;
                cout << "Col num is wrong!!" << endl;
            }

            break;
    
        case ECONOMY:
            if (planeType == AIRBUS_300A) {
                if (row > 35 || row < 0) {
                    isOK =false;
                    cout << "Row num is wrong!!" << endl;
                }
                if (col > 10 || col < 0) {
                    isOK =false;
                    cout << "Col num is wrong!!" << endl;
                }
            }else if(planeType == BOEING_747){
                if (row > 45 || row < 0) {
                    isOK =false;
                    cout << "Row num is wrong!!" << endl;
                }
                if (col > 10 || col < 0) {
                    isOK =false;
                    cout << "Col num is wrong!!" << endl;
                }
            }
            break;
            
            
        default:
            break;
    }
    
    return isOK;
}

void mainAssignment2(){
    int actionType, planeId, planeType, classType;
    
    cout << "Choose your action and type the number below: "<< endl;
    cout << "1.Reservation"<< endl;
    cout << "2.Cancellation"<< endl;
    cin >> actionType;
    
    cout << "Choose the Plane Type below: "<< endl;
    cout << "1.AIRBUS 300A"<< endl;
    cout << "2.BOEING 747"<< endl;
    cin >> planeType;
    
    int sizeRow;
    switch (planeType-1) {
        case AIRBUS_300A:
            sizeRow = 24;
            break;
        case BOEING_747:
            sizeRow = 34;
            break;
            
        default:
            break;
    }
    
    Airplane airPlane(planeId, sizeRow);
    airPlane.displayReservation();
    
    cout << "Choose the Class Type below and enter the number: "<< endl;
    cout << "1.First Class"<< endl;
    cout << "2.Business Class"<< endl;
    cout << "3.Economy Class"<< endl;
    cin >> classType;
    
    int row, col;
    switch (actionType-1) {
        case RESERVATION:
            cout << "Choose and enter the Row Number for reservation: "<< endl;
            cin >> row;
            cout << "Choose and enter the Culumn Number for reservation: "<< endl;
            cin >> col;
            if (validateRowAndCol(classType-1, row, col, planeType-1)){
                airPlane.updateReservation(classType-1, row, col, true);
            }else{
                cout << "Fuck you! lol" << endl;
            }
            
            break;
            
        case CANCELATION:
            cout << "Choose and enter the Row Number for cancelation: "<< endl;
            cin >> row;
            cout << "Choose and enter the Culumn Number for cancelation: "<< endl;
            cin >> col;
            if (validateRowAndCol(classType-1, row, col, planeType-1)){
                airPlane.updateReservation(classType-1, row, col, false);
            }else{
                cout << "Fuck you! lol" << endl;
            }
            break;
            
        default:
            break;
    }
    
    airPlane.displayReservation();
}