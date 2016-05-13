//
//  EmployeeExer8.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/12/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef EmployeeExer8_hpp
#define EmployeeExer8_hpp

#include <iostream>
#include <ctime>

using namespace std;

class EmployeeExer8{
public:
    //constructor
    EmployeeExer8();
    //destructor
    ~EmployeeExer8();
    //getter
    int getId();
    string getFirstName();
    string getLastName();
    int getBirthYear();
    int getBirthMonth();
    int getBirthDate();
    int getSalaryMonthly();
    string getPosition();
    string getPhoneNumber();
    string getAddress();

    //setter
    void setId(int id);
    void setFirstName(string first);
    void setLastName(string last);
    void setBirthYear(int year);
    void setBirthMonth(int month);
    void setBirthDate(int date);
    void setSalaryMonthly(int salary);
    void setPosition(string position);
    void setPhoneNumber(string phoneNum);
    void setAddress(string address);
    
    //other
    void displayEmployeeExer8();
    void updateEmployeeExer8(int id);
    int calculateAge();
    int calculateAnualSalary();

private:
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

};

#endif /* EmployeeExer8_hpp */
