//
//  EmployeeExer8.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/12/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "EmployeeExer8.hpp"

//constructor
EmployeeExer8::EmployeeExer8(){};
//destructor
EmployeeExer8::~EmployeeExer8(){};
//getter
int EmployeeExer8::getId(){
    return this->id;
};
string EmployeeExer8::getFirstName(){
    return this->firstName;
};
string EmployeeExer8::getLastName(){
    return this->lastName;
};
int EmployeeExer8::getBirthYear(){
    return this->birthYear;
};
int EmployeeExer8::getBirthMonth(){
    return this->birthMonth;
};
int EmployeeExer8::getBirthDate(){
    return this->birthDate;
};
int EmployeeExer8::getSalaryMonthly(){
    return this->salaryMonthly;
};
string EmployeeExer8::getPosition(){
    return this->position;
};
string EmployeeExer8::getPhoneNumber(){
    return this->phoneNumber;
};
string EmployeeExer8::getAddress(){
    return this->address;

};

//setter
void EmployeeExer8::setId(int id){
    this->id = id;
};
void EmployeeExer8::setFirstName(string first){
    this->firstName = first;
};
void EmployeeExer8::setLastName(string last){
    this->lastName = last;
};
void EmployeeExer8::setBirthYear(int year){
    this->birthYear = year;
};
void EmployeeExer8::setBirthMonth(int month){
    this->birthMonth = month;
};
void EmployeeExer8::setBirthDate(int date){
    this->birthDate = date;
};
void EmployeeExer8::setSalaryMonthly(int salary){
    this->salaryMonthly = salary;
};
void EmployeeExer8::setPosition(string position){
    this->position = position;
};
void EmployeeExer8::setPhoneNumber(string phoneNum){
    this->phoneNumber = phoneNum;
};
void EmployeeExer8::setAddress(string address){
    this->address = address;
};

//other
void EmployeeExer8::displayEmployeeExer8(){
    cout << "The Employee Id is " <<  this->id << endl;
        cout << "The Employee first name is " <<  this->firstName << endl;
        cout << "The Employee last name is " <<  this->lastName << endl;
        cout << "The Employee birth year is " <<  this->birthYear << endl;
        cout << "The Employee birth month is " <<  this->birthMonth << endl;
        cout << "The Employee birth date is " <<  this->birthDate << endl;
        cout << "The Employee salary(mo) is " <<  this->salaryMonthly << endl;
        cout << "The Employee position is " <<  this->position << endl;
        cout << "The Employee phone number is " <<  this->phoneNumber << endl;
        cout << "The Employee address is " <<  this->address << endl;
};
void EmployeeExer8::updateEmployeeExer8(int id){
    setId(id);
};
int EmployeeExer8::calculateAge(){
    int age;
    
    time_t t = time(0);   // get time now
    struct tm * now = localtime( & t );
    
    int currentYear = (now->tm_year + 1900);
    int currentMonth = (now->tm_mon + 1);
    int currentDate = now->tm_mday;
    
    age = currentYear - this->birthYear;
    if (currentMonth < this->birthMonth) {
        age -= 1;
    }else if(currentMonth == this->birthMonth){
        if (currentDate < this->birthDate) {
            age -= 1;
        }
    }
    
    return age;
};

int EmployeeExer8::calculateAnualSalary(){
    return salaryMonthly*12;
};
