//
//  Complex.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/22/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "Complex.hpp"

//Constuctor
Complex::Complex(){};
Complex::Complex(int real, int imaginaly){
    mReal = real;
    mImaginary = imaginaly;
};
//Destructor
Complex::~Complex(){};
//Getter
int Complex::getReal(){
    return mReal;
};
int Complex::getImaginary(){
    return mImaginary;
};
//Setter
void Complex::setReal(int real){
    mReal = real;
};
void Complex::setimaginary(int imaginaly){
    mImaginary = imaginaly;
};

//

//Complex& Complex::operator= (Complex& complex){
//    Complex newComp;
//    newComp.setReal(complex.getReal());
//    newComp.setimaginary(complex.getImaginary());
//    return newComp;
//};

Complex& Complex::operator= (Complex& complex){
    this->mReal = complex.mReal;
    this->mImaginary = complex.mImaginary;
    return *this;
};

bool Complex::operator== (Complex& complex){
    if (mReal == complex.getReal() && mImaginary == complex.getImaginary()) {
        return true;
    }
    return false;
};
bool Complex::operator!= (Complex& complex){
    if (mReal != complex.getReal() || mImaginary != complex.getImaginary()) {
        return true;
    }
    return false;
};
Complex Complex::operator+ (Complex& complex){
    Complex newComp;
    newComp.setReal(mReal + complex.getReal());
    newComp.setimaginary(mImaginary + complex.getImaginary());
    return newComp;

};
Complex Complex::operator- (Complex& complex){
    Complex newComp;
    newComp.setReal(mReal - complex.getReal());
    newComp.setimaginary(mImaginary - complex.getImaginary());
    return newComp;
    
};
Complex Complex::operator++ (int num){
    Complex newComp;
    newComp.setReal(mReal+num);
    newComp.setimaginary(mImaginary+num);
    return newComp;
};
Complex Complex::operator-- (int num){
    Complex newComp;
    newComp.setReal(mReal - num);
    newComp.setimaginary(mImaginary - num);
    return newComp;
};
Complex Complex::operator* (Complex& complex){
    Complex newComp;
    newComp.setReal(mReal*complex.getReal());
    newComp.setimaginary(mImaginary*getImaginary());
    return newComp;
};
Complex Complex::operator/ (Complex& complex){
    Complex newComp;
    if (complex.getReal() != 0) {
        newComp.setReal(mReal/complex.getReal());
    }else{
        newComp.setReal(mReal);
    }
    if (complex.getImaginary() != 0) {
        newComp.setimaginary(mImaginary/complex.getImaginary());
    }else{
        newComp.setimaginary(mImaginary);
    }
    return newComp;
};

ostream & operator<<(ostream & output, Complex & complex){
    output << "Real: " << complex.getReal() << endl;
    output << "Imaginary: " << complex.getImaginary() << endl;
    return output;
}

istream & operator>>(istream & input, Complex & complex){
    
    cout << "Enter the Real Number for ComplexNumber: ";
    cin >> complex.mReal;
    cout << "Enter the Imaginaly Number for ComplexNumber: ";
    cin >> complex.mImaginary;
    return input;
}
