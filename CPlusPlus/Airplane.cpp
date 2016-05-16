//
//  Airplane.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/13/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "Airplane.hpp"

//constructor
Airplane::Airplane(int planeType, int rowSize){
    switch (planeType) {
        case AIRBUS_300A:
            this->planeId = 1;
            break;
            
        case BOEING_747:
            this->planeId = 2;
            break;
            
        default:
            break;
    }
    this->planeType = planeType;
    
    this->firstClass = (bool **)malloc(FIRST_ROW * sizeof(bool *));
    for (size_t i = 0; i < FIRST_ROW; i++) {
        *(this->firstClass+i) = (bool *)malloc(FIRST_COL * sizeof(bool));
    }
    
    this->businessClass = (bool **)malloc(BUSINESS_ROW * sizeof(bool *));
    for (size_t i = 0; i < BUSINESS_ROW; i++) {
        *(this->businessClass+i) = (bool *)malloc(BUSINESS_COL * sizeof(bool));
    }
    
    this->economyClass = (bool **)malloc(rowSize * sizeof(bool *));
    for (size_t i = 0; i < rowSize; i++) {
        *(this->economyClass+i) = (bool *)malloc(ECONOMY_COL * sizeof(bool));
    }
    
    this->economyRowNum = rowSize;
    
};
//destructor
Airplane::~Airplane(){
    free(firstClass);
    free(businessClass);
    free(economyClass);
};
//getter
int Airplane::getPlaneId(){
    return planeId;
};
int Airplane::getPlaneType(){
    return planeType;
};
bool** Airplane::getFirstClass(){
    return this->firstClass;
};
bool** Airplane::getBusinessClass(){
    return this->businessClass;
};
bool** Airplane::getEconomyClass(){
    return this->economyClass;
};

//setter
void Airplane::setPlaneId(int id){
    this->planeId = id;
};
void Airplane::setPlaneType(int type){
    this->planeType = type;
};
void Airplane::setFirstClass(bool** first){
    this->firstClass = first;
};
void Airplane::setBusinessClass(bool** business){
    this->businessClass = business;
};

void Airplane::setEconomyClass(bool** economy){
    this->economyClass = economy;
};

//other
void Airplane::displayReservation(){
    cout << "    01 02 03 04 05 06 07 08 09 10 "<< endl;
    cout << "  -  -  -  -  First Calss -  -  - "<< endl;
    
    for (int i = 0; i < FIRST_ROW; i++) {
        //cout << " " << setfill('0') << setw(5) << right << i+1 << "  -  -  -  ";
        printf(" %02d  -  -  -  ", i+1);
        for (int j = 0; j < FIRST_COL; j++) {
            if (firstClass[i][j]) {
                cout << "E  ";
            }else{
                cout << "X  ";
            }
        }
        cout << "-  -  - " << endl;
    }
    cout << "  -  -  -   Business Calss   -  - "<< endl;
    for (int i = 0; i < BUSINESS_ROW; i++) {
        //cout << " " << i+FIRST_ROW+1 << "  -  -  ";
        printf(" %02d  -  -  ", i+FIRST_ROW+1);
        for (int j = 0; j < BUSINESS_COL; j++) {
            if (businessClass[i][j]) {
                cout << "E  ";
            }else{
                cout << "X  ";
            }
        }
        cout << "-  - " << endl;
    }
    
    cout << "  -  -  -  - Economy Calss   -  - "<< endl;
    for (int i = 0; i < this->economyRowNum; i++) {
        //cout << " " << i+FIRST_ROW + BUSINESS_ROW + 1 << "  ";
        printf(" %02d  ", i+FIRST_ROW + BUSINESS_ROW + 1);
        for (int j = 0; j < ECONOMY_COL; j++) {
            if (economyClass[i][j]) {
                cout << "E  ";
            }else{
                cout << "X  ";
            }
        }
        cout << " " << endl;
    }
}

void Airplane::updateReservation(int classType, int row, int col, bool isReserve){
    
    switch (classType) {
        case FIRST:
            firstClass[row][col] = isReserve;
            break;
        case BUISINESS:
            businessClass[row][col] = isReserve;
            break;
        case ECONOMY:
            economyClass[row][col] = isReserve;
            break;
            
        default:
            break;
    }
    
}
