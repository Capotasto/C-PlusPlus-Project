//
//  ParkingClient.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/1/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "ParkingClient.hpp"

//Constructor
ParkingClient::ParkingClient(int id, string plate, string first, string last, string tell, int balance, bool paidFlag, vector<ParkingSPot*> parkingList){};
//Getter
int ParkingClient::getCid(){
    return mCid;
};
string ParkingClient::getPlate(){
    return mPlate;
};
string ParkingClient::getFirst(){
    return mFirst;
};
string ParkingClient::getLast(){
    return mLast;
};
string ParkingClient::getTelephone(){
    return mTelephone;
};
int ParkingClient::getBalance(){
    return mBalance;
};
bool ParkingClient::getHasPaid(){
    return mhasPaid;
};
vector<ParkingSPot*> ParkingClient::getParkingList(){
    return mParkingList;
};
//Setter
ParkingClient & ParkingClient::setCid(int id){
    mCid = id;
    return *this;
};
ParkingClient & ParkingClient::setPlate(string plate){
    mPlate = plate;
    return *this;
};
ParkingClient & ParkingClient::setFirst(string first){
    mFirst = first;
    return *this;
};
ParkingClient & ParkingClient::setLast(string last){
    mLast = last;
    return *this;
};
ParkingClient & ParkingClient::setTelephone(string tell){
    mTelephone = tell;
    return *this;
};
ParkingClient & ParkingClient::setBalance(int balance){
    mBalance = balance;
    return *this;
};
ParkingClient & ParkingClient::setHasPaid(bool paidFlag){
    mhasPaid = paidFlag;
    return *this;
};
ParkingClient & ParkingClient::setParkingList(vector<ParkingSPot*> parkingList){
    mParkingList = parkingList;
    return *this;
};
//Other
void ParkingClient::print(){
    cout << "CID:" << getCid()<<endl;
    cout << "Plate:"<< getPlate()<<endl;
    cout << "Fist Name:"<< getFirst()<<endl;
    cout << "Last Name:"<< getLast()<<endl;
    cout << "Phone:"<< getTelephone()<<endl;
    cout << "Balance:"<< getBalance()<<endl;
    cout << "Has already Paind:"<< getHasPaid() <<endl;
    for(int i = 0; i < getParkingList().size(); i++){
        getParkingList()[i]->print();
    }
};