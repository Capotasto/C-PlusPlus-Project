//
//  Excercise10.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/17/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "Excercise10.hpp"
#include "AccountExer10.hpp"
#include "AddressExer10.hpp"
#include "DepartmentExer10.hpp"

void executeAccountExer(){
    string fistName, lastName;
    int birthday[3];
    int balance;
    
    cout << "Enter the your first name:";
    getline(cin, fistName);
    
    cout << "Enter the your last name:";
    getline(cin, lastName);
    
    cout << "Enter the your birt month:";
    cin >> birthday[0];
    
    cout << "Enter the your birt day:";
    cin >> birthday[1];
    
    cout << "Enter the your birt Year:";
    cin >> birthday[2];
    
    cout << "Enter the your balance:";
    cin >> balance;
    
    
    AccountExer10 account(fistName, lastName, birthday, balance);
    account.display();
}

void executeDepartmentExer(){
    
    string departmentName, telephone, email;
    string streetName, city, country, postal, code, builduingName;
    int unitNumber, floor;
    
    cout << "Enter the your Department name:";
    getline(cin,departmentName );
    
    cout << "Enter the your Department telephone:";
    getline(cin,telephone );
    
    cout << "Enter the your Department email:";
    getline(cin,email );
    
    cout << "Enter the your Department Address Building name:";
    getline(cin,builduingName );
    
    cout << "Enter the your Department Address street name:";
    getline(cin,streetName );
    
    cout << "Enter the your Department Address floor(Number):";
    cin >> floor;
    
    cout << "Enter the your Department Address unit number(Number):";
    cin >> unitNumber;
    
    cout << "Enter the your Department Address city name:";
    getchar();
    getline(cin,city );
    
    cout << "Enter the your Department Address country name:";
    getline(cin,country );
    
    cout << "Enter the your Department Address postal code:";
    getline(cin,postal );
    
    AddressExer10 addressExer10;
    addressExer10.setStreetName(streetName);
    addressExer10.setUnitNumber(unitNumber);
    addressExer10.setCity(city);
    addressExer10.setCountry(country);
    addressExer10.setPostalCode(postal);
    addressExer10.setFloor(floor);
    addressExer10.setBuildingName(builduingName);
    
    DepartmentExer10 departmentExer10(departmentName, addressExer10, telephone, email);
    departmentExer10.display();
    

}

void mainExcercise10(){
    
    //executeAccountExer();
    
    executeDepartmentExer();
    
}