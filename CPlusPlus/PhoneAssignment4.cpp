//
//  PhoneAssignment4.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/30/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "PhoneAssignment4.hpp"

//Constructor
PhoneAssignmet4::PhoneAssignmet4(int id, string maker, string model, DateAssignment4 &buildDate, DateAssignment4 &soldDate, int price,string feature):
mBuildDate(buildDate),mSoldDate(soldDate)
{
setId(id).setMaker(maker).setModel(model).setPrice(price).setFeature(feature);
};
//Getter
int PhoneAssignmet4::getId(){
    return mId;
};
string PhoneAssignmet4::getMaker(){
    return mMaker;
};
string PhoneAssignmet4::getModel(){
    return mModel;
};
DateAssignment4 PhoneAssignmet4::getBuildDate(){
    return mBuildDate;
};
DateAssignment4 PhoneAssignmet4::getSoldDate(){
    return mSoldDate;
};
int PhoneAssignmet4::getPrice(){
    return mPrice;
};
string PhoneAssignmet4::getFeature(){
    return mFeature;
};


//Setter
PhoneAssignmet4 & PhoneAssignmet4::setId(int id){
    mId = id;
    return *this;
};
PhoneAssignmet4 & PhoneAssignmet4::setMaker(string maker){
    mMaker = maker;
    return *this;
};
PhoneAssignmet4 & PhoneAssignmet4::setModel(string model){
    mModel = model;
    return *this;
};
PhoneAssignmet4 & PhoneAssignmet4::setBuildDate(DateAssignment4 buildDate){
    mBuildDate = buildDate;
    return *this;
};
PhoneAssignmet4 & PhoneAssignmet4::setSoldDate(DateAssignment4 soldDate){
    mSoldDate = soldDate;
    return *this;
};
PhoneAssignmet4 & PhoneAssignmet4::setPrice(int price){
    mPrice = price;
    return *this;
};
PhoneAssignmet4 & PhoneAssignmet4::setFeature(string feature){
    mFeature = feature;
    return *this;
}

//other
void PhoneAssignmet4::print(){
    cout << "Phone ID is "<< getId() << endl;
    cout << "Phone Maker is "<< getMaker() << endl;
    cout << "Phone Model is "<< getModel() << endl;
    cout << "Phone Build Date is " << getBuildDate().getStringDate() <<endl;
    cout << "Phone Sold date is " << getSoldDate().getStringDate() << endl;
    cout << "Phone Price is "<< getPrice() << endl;
    cout << "Phone Feature is "<< getFeature() << endl;
}