//
//  Airplane.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/13/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef Airplane_hpp
#define Airplane_hpp

#include <iostream>
#include <string>

using namespace std;

const int FIRST_ROW = 5;
const int FIRST_COL = 4;
const int BUSINESS_ROW = 6;
const int BUSINESS_COL = 6;
const int ECONOMY_COL = 10;

enum type_plane{
    AIRBUS_300A,//0
    BOEING_747//1
};

enum type_class{
    FIRST,//0
    BUISINESS,//1
    ECONOMY//2
};

class Airplane{

public:
    //constructor
    Airplane(int planeType, int rowSize);
    //destructor
    ~Airplane();
    //getter
    int getPlaneId();
    int getPlaneType();
    bool** getFirstClass();
    bool** getBusinessClass();
    bool** getEconomyClass();
    //setter
    void setPlaneId(int id);
    void setPlaneType(int type);
    void setFirstClass(bool** first);
    void setBusinessClass(bool** business);
    void setEconomyClass(bool** economy);
    //other
    void displayReservation();
    void updateReservation(int classType, int row, int col, bool isReserve);
    
private:
    int planeId;
    int planeType;
    bool** firstClass;
    bool** businessClass;
    bool** economyClass;
    int economyRowNum;
    
};

#endif /* Airplane_hpp */
