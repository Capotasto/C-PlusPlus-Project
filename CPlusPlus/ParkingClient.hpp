//
//  ParkingClient.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/1/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef ParkingClient_hpp
#define ParkingClient_hpp

#include "ParkingSpot.hpp"
#include <vector>

class ParkingClient{
public:
    //Constructor
    ParkingClient(int id, string plate, string first, string last, string tell, int balance, bool paidFlag, vector<ParkingSPot*> parkingList);
    //Getter
    int getCid();
    string getPlate();
    string getFirst();
    string getLast();
    string getTelephone();
    int getBalance();
    bool getHasPaid();
    vector<ParkingSPot*> getParkingList();
    //Setter
    ParkingClient & setCid(int id);
    ParkingClient & setPlate(string plate);
    ParkingClient & setFirst(string first);
    ParkingClient & setLast(string last);
    ParkingClient & setTelephone(string tell);
    ParkingClient & setBalance(int balance);
    ParkingClient & setHasPaid(bool paidFlag);
    ParkingClient & setParkingList(vector<ParkingSPot*> parkingList);
    //Other
    void print();

private:
    int mCid;
    string mPlate;
    string mFirst;
    string mLast;
    string mTelephone;
    int mBalance;
    bool mhasPaid;
    vector<ParkingSPot*> mParkingList;
};

#endif /* ParkingClient_hpp */
