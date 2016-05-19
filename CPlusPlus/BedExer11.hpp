//
//  BedExer11.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/18/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef BedExer11_hpp
#define BedExer11_hpp

#include <iostream>

using namespace std;

class Bed{
public:
    //constructor
    Bed(string name, int drawerNum, int price, string color, bool hashead, bool hasFoot, string material);
    
    //getter
    string getName();
    int getDrawer();
    int getPrice();
    string getColor();
    bool getHasHeadBoard();
    bool getHasFootBoard();
    string getMaterial();
    
    //setter
    void setName(string name);
    void setDrawer(int count);
    void setPrice(int price);
    void setColor(string color);
    void setHasHeadBoard(bool flag);
    void setHasFootBoard(bool flag);
    void setMaterial(string material);
    
    //other
    void print();
    
private:
    string name;
    int drawer;
    int price;
    string color;
    bool hasHeadBoard;
    bool hasFootBoard;
    string material;
    
};

#endif /* BedExer11_hpp */
