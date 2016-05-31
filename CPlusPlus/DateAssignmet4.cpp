//
//  DateAssignmet4.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/30/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "DateAssignmet4.hpp"

//Constructor
DateAssignment4::DateAssignment4(int month, int day, int year, int week){
    setMonth(month).setDay(day).setYear(year).setDayOfTheWeek(week);
};
//getter
int DateAssignment4::getMonth(){
    return mMonth;
};
int DateAssignment4::getYear(){
    return mYear;
};
int DateAssignment4::getDay(){
    return mDday;
};
int DateAssignment4::getDayOfTheWeek(){
    return mDayOfTheWeek;
};


//setter
DateAssignment4 & DateAssignment4::setMonth(int month){
    if (month < January) {
        month = January;
    }else if(month > December){
        month = December;
    }
    mMonth = month;
    return *this;
};
DateAssignment4 & DateAssignment4::setYear(int year){
    if (year > THIS_YEAR) {
        year = THIS_YEAR;
    }else if (year < MIN_YEAR){
        year = MIN_YEAR;
    }
    mYear = year;
    return *this;
};
DateAssignment4 & DateAssignment4::setDay(int day){
    if (day > getDaysOfMonth(getMonth())) {
        day = getDaysOfMonth(getMonth());
    }else if (day < 1){
        day = 1;
    }
    mDday = day;
    return *this;
};
DateAssignment4 & DateAssignment4::setDayOfTheWeek(int week){
    if (week < Sunday) {
        week = Sunday;
    }else if(week > Saturday){
        week = Saturday;
    }

    mDayOfTheWeek = week;
    return *this;
};

void DateAssignment4::print(){
    printf("Date is %s %d, %d, %s\n",getMonthStringFromInt(getMonth()).c_str(), getDay(), getYear(),getDayOfTheWeekStringFromInt(getDayOfTheWeek()).c_str());
};

string DateAssignment4::getStringDate(){
    string outString = "";
    outString.append(getMonthStringFromInt(getMonth()));
    outString.append(" ");
    outString.append(to_string(getDay()));
    outString.append(" ");
    outString.append(to_string(getYear()));
    outString.append(" ");
    outString.append(getDayOfTheWeekStringFromInt(getDayOfTheWeek()));
    
    return outString;
}

string DateAssignment4::getMonthStringFromInt(int month){
    switch (month) {
        case January: return "January";
        case February: return "February";
        case March: return "March";
        case April: return "April";
        case May: return "May";
        case June: return "June";
        case July: return "July";
        case August: return "August";
        case September: return "September";
        case October: return "October";
        case November: return "November";
        case December: return "December";
        default: return "";
    }

};
string DateAssignment4::getDayOfTheWeekStringFromInt(int week){
    switch (week) {
        case Sunday: return "Sunday";
        case Monday: return "Monday";
        case Tuesday: return "Tuesday";
        case Wednesday: return "Wednesday";
        case Thursday: return "Thursday";
        case Friday: return "Friday";
        case Saturday: return "Saturday";
        default: return "";
    }
};

int DateAssignment4::getDaysOfMonth(int month){
    switch (month) {
        case January: return 31;
        case February: return 28;//ignore leap years
        case March: return 31;
        case April: return 30;
        case May: return 31;
        case June: return 30;
        case July: return 31;
        case August: return 31;
        case September: return 30;
        case October: return 31;
        case November: return 30;
        case December: return 31;
        default: return 0;
    }

};
