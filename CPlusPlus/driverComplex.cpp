//
//  driverComplex.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/22/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "driverComplex.hpp"

void mainDriverComplex(){
    
    Complex comp1(2, 3);
    cout << comp1;
    Complex comp2(5, 6);
    cout << comp2;
    
    cout << "\n= operator" << endl;
    Complex comp3;
    comp3 = comp1;
    cout << "comp3 = comp1 //" << comp3.getReal() << " : "<< comp3.getImaginary() << endl;
    comp3 = comp2;
    cout << "comp3 = comp2 //"<< comp3.getReal() << " : "<< comp3.getImaginary() << endl;
    
    cout << "\n== operator" << endl;
    cout << "comp1 == comp2 : " << boolalpha <<((comp1==comp2)? true : false ) << endl;
    
    cout << "\n!= operator" << endl;
    cout << "comp1 != comp2 : " << boolalpha << ((comp1!=comp2)? true : false ) << endl;
    
    cout << "\n+ operator" << endl;
    cout << "(comp1 + comp2).getReal()= " << boolalpha << (comp1 + comp2).getReal() << endl;
    cout << "(comp1 + comp2).getImaginary= " << boolalpha << (comp1 + comp2).getImaginary() << endl;
    
    cout << "\n- operator" << endl;
    cout << "(comp1 - comp2).getReal()= " << boolalpha << (comp1 - comp2).getReal() << endl;
    cout << "(comp1 - comp2).getImaginary= " << boolalpha << (comp1 - comp2).getImaginary() << endl;

    cout << "\n++ operator" << endl;
    cout << "-- operator" << endl;
    cout << "comp3.getReal()= " << boolalpha << comp3.getReal() << endl;
    cout << "(comp3++).getReal()= " << boolalpha << (comp3++).getReal() << endl;
    cout << "(comp3--).getReal()= " << boolalpha << (comp3--).getReal() << endl;

    cout << "\n* operator" << endl;
    cout << "(comp1 * comp2).getReal()= " << boolalpha << (comp1 * comp2).getReal() << endl;
    cout << "(comp1 * comp2).getImaginary= " << boolalpha << (comp1 * comp2).getImaginary() << endl;

    cout << "\n/ operator" << endl;
    cout << "(comp1 / comp2).getReal()= " << boolalpha << (comp1 / comp2).getReal() << endl;
    cout << "(comp1 / comp2).getImaginary= " << boolalpha << (comp1 / comp2).getImaginary() << endl;
    
    cout << "\n << and >> operator" << endl;
    Complex comp;
    cin >> comp;
    cout << comp;
    
}