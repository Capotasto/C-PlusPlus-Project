//
//  driverPolymorphism.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/3/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "driverPolymorphism.hpp"


enum type_tenant{
    OFFICE=1,
    KITCHEN
};

string getEnumName(type_tenant type);

class BuildingPoly{
public:
    virtual void displayInfo(){cout <<"This is parent class."<<endl;}
    
protected:
    int mFloor;
    int mNumber;
    string mName;
    type_tenant mType;
    
};

class OfficePoly:public BuildingPoly{
public:
    OfficePoly(int floor, int number, type_tenant type):
    mFloor(floor), mNumber(number), mType(type){};
    //getter
    int getFloor(){return mFloor;}
    int getNumber(){return mNumber;}
    type_tenant getType(){return mType;}
    //setter
    void setFloor(int floor){mFloor = floor;}
    void setNumber(int number){mNumber = number;}
    void setType(type_tenant type){mType = type;}

    void displayInfo(){
        cout << "floor is "<< getFloor() << endl;
        cout << "number is "<< getNumber() << endl;
        cout << "Type is "<< getEnumName(getType()) << endl;
    };
private:
    int mFloor;
    int mNumber;
    type_tenant mType;

};


class KitchenPoly:public BuildingPoly{
public:
    KitchenPoly(int floor, int number, type_tenant type):
    mFloor(floor), mNumber(number), mType(type){};
    //gettter
    int getFloor(){return mFloor;}
    int getNumber(){return mNumber;}
    type_tenant getType(){return mType;}
    //setter
    void setFloor(int floor){mFloor = floor;};
    void setNumber(int number){mNumber = number;};
    void setType(type_tenant type){mType = type;}
    void displayInfo(){
        cout << "floor is "<< getFloor() << endl;
        cout << "number is "<< getNumber() << endl;
        cout << "Type is "<< getEnumName(getType()) << endl;
    };

    
private:
    int mFloor;
    int mNumber;
    type_tenant mType;

};

string getEnumName(type_tenant type){
    if (type == OFFICE) {
        return "OFFICE";
    }else if(type == KITCHEN){
        return "KITCHEN";
    }
    return "";
}

void mainDriverPolymorphism(){
    int inputFloor, inputNumber;
    BuildingPoly *building1;
    BuildingPoly *building2;
    
    cout << "Enter the number for floor (Office):";
    cin >> inputFloor;
    cout << "Enter the number for number (Office):";
    cin >> inputNumber;

    building1 = new OfficePoly(inputFloor, inputNumber, OFFICE);
    
    cout << "Enter the number for floor (Kitchen):";
    cin >> inputFloor;
    cout << "Enter the number for number (Kitchen):";
    cin >> inputNumber;
    
    building2 = new KitchenPoly(inputFloor, inputNumber, KITCHEN);
    
    building1->displayInfo();
    building2->displayInfo();
    
    delete building1;
    delete building2;
    
}