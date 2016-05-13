//
//  DriverExer8.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/12/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "DriverExer8.hpp"

void callProductExer8(){
    int id, price, quantity;
    string name;
    
    cout << "Enter a name for your first product:";
    getline(cin, name);
    
    cout << "Enter an ID for your first product:";
    cin >> id;
    
    cout << "Enter an price for your first product:";
    cin >> price;
    
    cout << "Enter an quantity for your first product:";
    cin >> quantity;
    
    ProductExer8 product(id);
    product.setName(name);
    product.setPrice(price);
    product.setQuantity(quantity);
    product.displayProduct();
}

void callEmployeeExer8(){
    int id;
    string firstName;
    string lastName;
    int birthYear;
    int birthMonth;
    int birthDate;
    int salaryMonthly;
    string position;
    string phoneNumber;
    string address;
    
    cout << "Enter the number for employee ID: ";
    cin >> id;
    
    getchar();
    cout << "Enter the String for employee Fist name: ";
    getline(cin, firstName);
    
    cout << "Enter the String for employee Last name: ";
    getline(cin, lastName);
    
    cout << "Enter the number for employee birth year: ";
    cin >> birthYear;
    
    cout << "Enter the number for employee birth month: ";
    cin >> birthMonth;
    
    cout << "Enter the number for employee birth day: ";
    cin >> birthDate;
    
    cout << "Enter the number for employee saraly(mo): ";
    cin >> salaryMonthly;
    
    getchar();
    cout << "Enter the string for employee Position: ";
    getline(cin, position);
    cout << "Enter the string for employee phone number: ";
    getline(cin, phoneNumber);
    cout << "Enter the string for employee address: ";
    getline(cin, address);
    
    EmployeeExer8 employee;
    
    employee.setId(id);
    employee.setFirstName(firstName);
    employee.setLastName(lastName);
    employee.setBirthYear(birthYear);
    employee.setBirthMonth(birthMonth);
    employee.setBirthDate(birthDate);
    employee.setSalaryMonthly(salaryMonthly);
    employee.setPosition(position);
    employee.setPhoneNumber(phoneNumber);
    employee.setAddress(address);
    
    employee.displayEmployeeExer8();
    
    cout << "Your Age is " << employee.calculateAge() << endl;
    
    cout << "Your Anual Saraly is " << employee.calculateAnualSalary() << endl;
    
    cout << "Your new id is : " ;
    cin >> id;
    
    employee.updateEmployeeExer8(id);
    
    employee.displayEmployeeExer8();
    
}

void mainDriverExer8(){
    
    //callProductExer8();
    
    callEmployeeExer8();
}