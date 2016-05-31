//
//  driverMidterm.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/31/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "driverMidterm.hpp"

enum typeMenuMidterm{
    ADD = 1,
    EDIT,
    DELETE,
    OUTPUT,
    QUIT
};

void createMenu(){
    cout << "\nChoose the number below."<< endl;
    cout << "1.Add car info" << endl;
    cout << "2.Edit car info" << endl;
    cout << "3.Delete car info" << endl;
    cout << "4.Output car info to external file."<< endl;
    cout << "5.Quit" << endl;
}

bool isCheckVin(vector<CarMidterm*> &carList, int vin){
    bool isDupulicated = false;
    for (int i=0; i < carList.size(); i++) {
        if (carList[i]->getVin() == vin) {
            cout << "This vin has already exist.Chage the number." <<endl;
            isDupulicated = true;
        }
    }
    return isDupulicated;
}

bool hasThisVin(vector<CarMidterm*> carList, int editVin){
    bool isExsitNum = false;
    for (int i = 0; i < carList.size(); i++) {
        if (carList[i]->getVin() == editVin) {
            isExsitNum = true;
        }
    }
    if(!isExsitNum) cout << "This vin has 11not found."<<endl;
    return isExsitNum;
}

void printList(vector<CarMidterm*> &carList){

    for (int i = 0; i < carList.size(); i++) {
        carList[i]->print();
        cout << endl;
    }
}

void addCarInfo(vector<CarMidterm*> &carList){
    
    int vin;
    string maker;
    string model;
    int year;
    string color;
    int cylinderNumber;
    int horsePower;
    int engineVolume;
    
    do {
        cout << "Enter the number for car vin: ";
        cin >> vin;
    } while (isCheckVin(carList, vin));
    
    
    cout << "Enter the maker name: ";
    getchar();
    getline(cin, maker);
    
    cout << "Enter the model name: ";
    getline(cin, model);
    
    cout << "Enter the number for car manufactured year: ";
    cin >> year;
    
    cout << "Enter the color name: ";
    getchar();
    getline(cin, color);
    
    cout << "Enter the number for car cylinder: ";
    cin >> cylinderNumber;
    
    cout << "Enter the number for car horse power: ";
    cin >> horsePower;
    
    cout << "Enter the number for car engine volume: ";
    cin >> engineVolume;
    
    TechInforMidterm *techInfo = new TechInforMidterm(cylinderNumber, horsePower, engineVolume);
    CarMidterm *car = new CarMidterm(vin, maker, model, year, color, *techInfo);
    
    carList.push_back(car);
    
    printList(carList);
}

void editCarInfo(vector<CarMidterm*> &carList){
    int editVin;
    do {
        cout << "Enter the vin number to edit car information :";
        cin >> editVin;
    } while (!hasThisVin(carList, editVin));
    
    string maker;
    string model;
    int year;
    string color;
    int cylinderNumber;
    int horsePower;
    int engineVolume;
    
    cout << "OK, Enter the new infomation for vin:" << setfill('0') << setw(10)<< editVin<<endl;
    
    cout << "Enter the maker name: ";
    getchar();
    getline(cin, maker);
    
    cout << "Enter the model name: ";
    getline(cin, model);
    
    cout << "Enter the number for car manufactured year: ";
    cin >> year;
    
    cout << "Enter the color name: ";
    getchar();
    getline(cin, color);
    
    cout << "Enter the number for car cylinder: ";
    cin >> cylinderNumber;
    
    cout << "Enter the number for car horse power: ";
    cin >> horsePower;
    
    cout << "Enter the number for car engine volume: ";
    cin >> engineVolume;
    
    for (int i = 0; i < carList.size(); i++) {
        if (carList[i]->getVin() == editVin) {
            carList[i]->setMaker(maker);
            carList[i]->setModel(model);
            carList[i]->setYear(year);
            carList[i]->setColor(color);
            carList[i]->getTechInfo().setCylinderNumber(cylinderNumber);
            carList[i]->getTechInfo().setHorsePower(horsePower);
            carList[i]->getTechInfo().setEngineVolume(engineVolume);
        }
    }
    printList(carList);
}

void deleteCarInfo(vector<CarMidterm*> &carList){
    int deleteVin;
    do {
        cout << "Enter the vin number to delte car information:";
        cin >> deleteVin;
    } while (!hasThisVin(carList, deleteVin));
    
    for (int i = 0; i < carList.size(); i++) {
        if (carList[0]->getVin() == deleteVin) {
            carList.erase(carList.begin()+i);
        }
    }
    printList(carList);
}

void outPutCarInfo(vector<CarMidterm*> &carList){
    int inputYesNo;
    cout << "Do you wanna append this information to the file? 1.Yes, 2.No"<<endl;
    cin >> inputYesNo;
    if (inputYesNo == 1) {
        ofstream outfile;
        outfile.open("outFile.txt",ios::app);
        
        for (int i = 0; i < carList.size(); i++) {
            char s = ' ';
            outfile << setfill('0') << setw(10) << carList[i]->getVin() << s
            << carList[i]->getMaker() << s
            << carList[i]->getModel() << s
            << carList[i]->getYear() << s
            << carList[i]->getColor() << s
            << carList[i]->getTechInfo().getCylinderNumber() << s
            << carList[i]->getTechInfo().getHorsePower() << s
            << carList[i]->getTechInfo().getEngineVolume()
            << endl;
        }
        
        outfile.close();
        cout << "Check it out your output file[outFile.txt]"<<endl;
    }    
}

void driverMidterm(){
    
    vector<CarMidterm*> carList;
    
    int inputMenu;
    //Create Menu
    while (inputMenu != 5) {
        createMenu();
        cin >> inputMenu;
        switch (inputMenu) {
            case ADD:
                addCarInfo(carList);
                break;
            case EDIT:
                if (carList.size() <= 0) {
                    cout << "Enter the car information first.";
                }else{
                    editCarInfo(carList);
                }
                break;

            case DELETE:
                if (carList.size() <= 0) {
                    cout << "Enter the car information first.";
                }else{
                    deleteCarInfo(carList);
                }
                break;
            case OUTPUT:
                if (carList.size() <= 0) {
                    cout << "Enter the car information first.";
                }else{
                    outPutCarInfo(carList);
                }

                break;
            case QUIT:
                //nothing to do
                break;
                
            default:
                inputMenu = 5;
                break;
        }
    }
}