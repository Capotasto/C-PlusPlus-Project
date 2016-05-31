//
//  PhoneAssignment4.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/30/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef PhoneAssignment4_hpp
#define PhoneAssignment4_hpp

#include "DateAssignmet4.hpp"
#include <fstream>

#endif /* PhoneAssignment4_hpp */

class PhoneAssignmet4{
public:
    //Constructor
    PhoneAssignmet4(int id, string maker, string model, DateAssignment4 &buildDate, DateAssignment4 &soldDate, int price, string feature);
    //Getter
    int getId();
    string getMaker();
    string getModel();
    DateAssignment4 getBuildDate();
    DateAssignment4 getSoldDate();
    int getPrice();
    string getFeature();
    //Setter
    PhoneAssignmet4 & setId(int id);
    PhoneAssignmet4 & setMaker(string maker);
    PhoneAssignmet4 & setModel(string model);
    PhoneAssignmet4 & setBuildDate(DateAssignment4 buildDate);
    PhoneAssignmet4 & setSoldDate(DateAssignment4 soldDate);
    PhoneAssignmet4 & setPrice(int price);
    PhoneAssignmet4 & setFeature(string feature);
    //other
    void print();
    
private:
    int mId;
    string mMaker;
    string mModel;
    DateAssignment4 mBuildDate;
    DateAssignment4 mSoldDate;
    int mPrice;
    string mFeature;
};