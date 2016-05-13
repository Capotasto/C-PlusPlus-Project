//
//  ProductExer8.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/12/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef ProductExer8_hpp
#define ProductExer8_hpp

#include <iostream>
#include <string>

using namespace std;

class ProductExer8{
public:
    //constructor
    ProductExer8(int id);
    //destructor
    ~ProductExer8();
    //getter
    int getId();
    string getName();
    int getPrice();
    int getQuantity();
    //setter
    void setId(int id);
    void setName(string name);
    void setPrice(int price);
    void setQuantity(int quantity);
    //other
    void displayProduct();
    
private:
    int id;
    string name;
    int price;
    int quantity;

};

#endif /* ProductExer8_hpp */
