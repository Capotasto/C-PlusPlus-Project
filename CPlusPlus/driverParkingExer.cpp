//
//  driverParkingExer.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/1/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "driverParkingExer.hpp"

void generateClientClass(ParkingClient *client, vector<ParkingSPot*> &list){

    //Client
    int mCid;
    string mPlate;
    string mFirst;
    string mLast;
    string mTelephone;
    int mBalance;
    bool mhasPaid;
    
    //todo input data
    
    client = new ParkingClient(mCid, mPlate, mFirst, mLast, mTelephone, mBalance, mhasPaid, list);

}

void generateParkingClass(ParkingSPot *parking){
    int mPid;
    string mLocation;
    Type_Rate mTypeRate;
    int mRate;
    string mDate;
    bool mIsEmpty;
    int mFloor;
    bool mHandicap;
    
    //Todo input data
    
    parking = new ParkingSPot(mPid, mLocation, mTypeRate ,mRate, mDate, mIsEmpty, mFloor, mHandicap);
}

void mainDriverParkingExer(){
    
    vector<ParkingSPot*> mParkingList;
    ParkingClient *client;
    
    //user
    int inputAmountCar;
    
    fstream outCredit( "ParkingData.dat", ios::in | ios::out | ios::binary );
    
    // exit program if fstream cannot open file
    if ( !outCredit )
    {
        cerr << "File could not be opened." << endl;
        exit( 1 );
    } // end if
    
    cout << "How many parking do you use?: ";
    cin >> inputAmountCar;
    
    for (int i = 0; i < inputAmountCar; i++) {
        //Parking
        ParkingSPot *parking;
        generateParkingClass(parking);
        mParkingList.push_back(parking);
    }
    
    generateClientClass(client, mParkingList);
    client->print();
    
    //Todo output the data.
    
}