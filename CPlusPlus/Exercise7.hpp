//
//  Exercise7.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/11/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef Exercise7_hpp
#define Exercise7_hpp

#include <iostream>

//using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::string;

void mainExercise7();

class PaintExer7 {

public:
    //constructor
    PaintExer7();
    PaintExer7(int id);
    PaintExer7(int id, string colorName);
    PaintExer7(int id, string colorName, int price, string producer, string usage);
    //destructor
    ~PaintExer7();
    //Getter
    int getId();
    string getColorName();
    int getPrice();
    string getProducer();
    string getUsage();

    //Setter
    void setId(int id);
    void setColorName(string colorName);
    void setPrice(int price);
    void setProducer(string producer);
    void setUsage(string usage);
    
    //other
    void printPaintExer7();
    void updatePaintExer7(int id);
    bool updatePaintExer7(int id, string colorName);
private:
    int id;
    string colorName;
    int price;
    string producer;
    string usage;
    
};

#endif /* Exercise7_hpp */
