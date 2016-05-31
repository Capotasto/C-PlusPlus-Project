//
//  driverAssignment4.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/30/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "driverAssignment4.hpp"

DateAssignment4* getDateInfomation(){
    
    int month, day, year, dayOfTheWeek;
    
    cout << "Choose the number for Month below."<<endl;
    cout << "1.January, 2.February, 3.March, 4.April, 5.May, 6.June, 7.July, 8.August , 9.September , 10.October , 11.November , 12.December."<<endl;
    cin >>month;
    
    cout << "Enter the proper number for day of the month that you selected."<<endl;
    cin >> day;
    
    cout << "Enter the number for year"<<endl;
    cin >> year;
    
    
    cout << "Choose the number for day of the week below."<<endl;
    cout << "1.Sunday, 2.Monday, 3.Tuesday, 4.Wednesday, 5.Thursday, 6.Friday, 7.Saturday."<<endl;
    cin >> dayOfTheWeek;
    
    return new DateAssignment4(month, day, year, dayOfTheWeek);
    
}

bool isValidInput(DateAssignment4* built, DateAssignment4* sold){
    if (built == NULL || sold == NULL) {
        return false;
    }
    int aYear = built->getYear();
    int aMonth = built->getMonth();
    int aDay = built->getDay();
    int bYear =sold->getYear();
    int bMonth = sold->getMonth();
    int bDay = sold->getDay();
    
    if(aYear > bYear){
        cout << "Input Year is wrong.Try it again!" << endl;
        return false;
    }else if (aYear < bYear){
        return true;
    }if (aYear == bYear) {
        //Month
        if(aMonth> bMonth){
            cout << "Input Month is wrong.Try it again!" << endl;
            return false;
        }else if (aMonth< bMonth){
            return true;
        }if (aMonth == bMonth) {
            //day
            if(aDay > bDay){
                cout << "Input Day is wrong.Try it again!" << endl;
                return false;
            }else if (aDay < bDay){
                return true;
            }if (aDay == bDay) {
                //nothing to do
            }
        }
    }
    
    return true;
}

void getPhoneInformation(int *id, string *maker, string *model, int *price, string *feature){
    
    cout << "Enter the number for Phone ID :";
    cin >> *id;
    
    cout << "Enter the name for Phone Maker :";
    getchar();
    getline(cin, *maker);
    
    cout << "Enter the name for Phone Model :";
    getline(cin, *model);
    
    cout << "Enter the number for Phone price :";
    cin >> *price;
    
    cout << "Enter the something for Phone feature :";
    getchar();
    getline(cin, *feature);
    
}

void outPutTheData(PhoneAssignmet4 &phone){
    ofstream outfile;
    outfile.open("outFile.txt",ios::app);
    
    char s = ' ';
    outfile << phone.getId() << s
    << phone.getMaker() << s
    << phone.getModel() << s
    << phone.getBuildDate().getStringDate() << s
    << phone.getSoldDate().getStringDate() << s
    << phone.getPrice() << s
    << phone.getFeature()<< endl;
    
    outfile.close();
}
int getMonth(string str){
    if (str.compare("January"))return 1;
    else if (str.compare("February"))return 2;
    else if (str.compare("March"))return 3;
    else if (str.compare("April"))return 4;
    else if (str.compare("May"))return 5;
    else if (str.compare("June"))return 6;
    else if (str.compare("July"))return 7;
    else if (str.compare("August"))return 8;
    else if (str.compare("September"))return 9;
    else if (str.compare("October"))return 10;
    else if (str.compare("November"))return 11;
    else if (str.compare("December"))return 12;
    return 0;
}

int getWeek(string str){
    if (str.compare("Sunday"))return 1;
    else if (str.compare("Monday"))return 2;
    else if (str.compare("Tuesday"))return 3;
    else if (str.compare("Wednesday"))return 4;
    else if (str.compare("Thursday"))return 5;
    else if (str.compare("Friday"))return 6;
    else if (str.compare("Saturday"))return 7;
    return 0;
}

void inPutTheData(vector<PhoneAssignmet4*> &vector){
    
    ifstream infile("inFile.txt", ios::in);
    string str;
    if (!infile) {
        cerr << "File could not be opened" << endl;
        exit(1);
    }
    
    while(getline(infile,str)){
        
        int id=0;
        string maker;
        string model;
        int bMonth=0;
        int bDay=0;
        int bYear=0;
        int bWeek=0;
        int sMonth=0;
        int sDay=0;
        int sYear=0;
        int sWeek=0;
        int price=0;
        string feature;
        
        std::string tmp;
        istringstream stream(str);
        int i =0;
        while(getline(stream,tmp,' ')){
            switch (i) {
                case 0: id = stoi(tmp); break;
                case 1: maker = tmp; break;
                case 2: model = tmp; break;
                case 3: bMonth = getMonth(tmp); break;
                case 4: bDay = stoi(tmp); break;
                case 5: bYear = stoi(tmp); break;
                case 6: bWeek = getWeek(tmp); break;
                case 7: sMonth = getMonth(tmp); break;
                case 8: sDay = stoi(tmp); break;
                case 9: sYear = stoi(tmp); break;
                case 10: sWeek = getWeek(tmp); break;
                case 11: price = stoi(tmp); break;
                case 12: feature = tmp; break;
                default:
                    break;
            }
            i++;
        }
        DateAssignment4 *builtDate = new DateAssignment4(bMonth,bDay, bYear, bWeek);
        DateAssignment4 *soldDate = new DateAssignment4(sMonth, sDay, sYear, sWeek);
        PhoneAssignmet4 *phone  = new PhoneAssignmet4(id, maker, model, *builtDate, *soldDate, price, feature);
        vector.push_back(phone);
    }
    for (int i = 0; i < vector.size(); i++) {
        cout << "Vector["<<i<<"]" << endl;
        vector[i]->print();
        cout << endl;
    }
    
}

void mainDriverAssignment4(){
    
    //Phase one:
    cout << "------------------Phase One------------------" <<endl;
    DateAssignment4 *date;
    date = getDateInfomation();
    date->print();
    
    //Phase Two
    cout << "------------------Phase Two------------------" <<endl;
    int id;
    string maker;
    string model;
    int price;
    string feature;
    
    getPhoneInformation(&id, &maker, &model, &price, &feature);
    
    DateAssignment4 *builtDate;
    DateAssignment4 *soldDate;
    
    while (!isValidInput(builtDate, soldDate)) {
        puts("");
        cout << "Enter the information for Phone Build Date"<<endl;
        builtDate = getDateInfomation();
        puts("");
        cout << "Enter the information for Phone Sold Date"<<endl;
        soldDate = getDateInfomation();
    }
    
    PhoneAssignmet4 phone(id, maker, model, *builtDate, *soldDate, price, feature);
    phone.print();
    
    //Phase Three
    vector<PhoneAssignmet4*> phoneVector;
    
    cout << "------------------Phase Three OutPutFile------------------" <<endl;
    int inputYesNo;
    cout << "Do you wanna append this information to the file? 1.Yes, 2.No"<<endl;
    cin >> inputYesNo;
    if (inputYesNo == 1) {
        outPutTheData(phone);
        cout << "Check it out your output file[outFile.txt]"<<endl;
    }
    
    cout << "------------------Phase Three OutPutFile------------------" <<endl;
    cout << "Do you wanna load some information from the file? 1.Yes, 2.No"<<endl;
    cin >> inputYesNo;
    if (inputYesNo == 1) {
        inPutTheData(phoneVector);
    }
}