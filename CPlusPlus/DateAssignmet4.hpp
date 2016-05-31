//
//  DateAssignmet4.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/30/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef DateAssignmet4_hpp
#define DateAssignmet4_hpp

#include <iostream>
#include <string>

const int MIN_YEAR = 2000;
const int THIS_YEAR = 2016;

enum type_month{
    January = 1,//1
    February,//2
    March,//3
    April,//4
    May,//5
    June,//6
    July,//7
    August,//8
    September,//9
    October,//10
    November,//11
    December//12
};

enum tyep_day_of_the_week{
    Sunday=1,//1
    Monday,//2
    Tuesday,//3
    Wednesday,//4
    Thursday,//5
    Friday,//6
    Saturday//7

};

using namespace std;

class DateAssignment4{
public:
    //Constructor
    DateAssignment4(int month, int day, int year, int week);
    //getter
    int getMonth();
    int getYear();
    int getDay();
    int getDayOfTheWeek();
    //setter
    DateAssignment4 & setMonth(int month);
    DateAssignment4 & setYear(int year);
    DateAssignment4 & setDay(int day);
    DateAssignment4 & setDayOfTheWeek(int week);
    //Othre
    void print();
    string getStringDate();

private:
    string getMonthStringFromInt(int month);
    string getDayOfTheWeekStringFromInt(int week);
    int getDaysOfMonth(int month);
    int mMonth;
    int mYear;
    int mDday;
    int mDayOfTheWeek;
};

#endif /* DateAssignmet4_hpp */
