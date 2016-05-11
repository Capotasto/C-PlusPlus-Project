//
//  Exercise6.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/10/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef Exercise6_hpp
#define Exercise6_hpp

#include <iostream>

using namespace std;

void mainExercise6();

enum color_type_exer6{
    RED,
    BLUE,
    YELLOW,
    WHITE,
    BLACK

};

class CarExer6{
    
public:
    CarExer6();
    CarExer6(int id, string model, string brand, string color, int price, int year);
    int getId();
    string getModel();
    string getBrand();
    string getColor();
    int getPrice();
    int getYear();
    
    void setId(int id);
    void setModel(string model);
    void setBrand(string brand);
    void setColor(string color);
    void setPrice(int price);
    void setYear(int year);
    
    void printCarExer6();
    ~CarExer6();
    
private:
    int id;
    string model;
    string brand;
    string color;
    int price;
    int year;
    
};

#endif /* Exercise6_hpp */
