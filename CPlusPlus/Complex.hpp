//
//  Complex.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/22/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef Complex_hpp
#define Complex_hpp

#include <iostream>
#include <fstream>
using namespace std;

class Complex{
    friend ostream & operator<<(ostream & output, Complex & complex);
    friend istream & operator>>(istream & input, Complex & complex);
public:
    //Constuctor
    Complex();
    Complex(int real, int imaginaly);
    //Destructor
    ~Complex();
    //Getter
    int getReal();
    int getImaginary();
    //Setter
    void setReal(int real);
    void setimaginary(int imaginaly);
    //OperatorOverloading
    Complex& operator= (Complex& complex);
    bool operator== (Complex& complex);
    bool operator!= (Complex& complex);
    Complex operator+ (Complex& complex);
    Complex operator- (Complex& complex);
    Complex operator++ (int num);
    Complex operator-- (int num);
    Complex operator* (Complex& complex);
    Complex operator/ (Complex& complex);
    
private:
    int mReal;
    int mImaginary;
};

#endif /* Complex_hpp */
