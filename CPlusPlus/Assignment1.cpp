//
//  Assignment1.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/6/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "Assignment1.hpp"

enum type_input_assignment1{
    PARKING,
    EVEN,
    STRUCK12,
    PERFECT
};

void showOptionAssignment1(){
    
    cout << "Choose Number below." << endl;
    cout << "1. Parking Garage Quiz." << endl;
    cout << "2. Get the Even." << endl;
    cout << "3. Struck 12." << endl;
    cout << "4. Perfect Number." << endl;
    cout << "5. Exit." << endl;
}

void chargeFeeAssigment1(float *fee, int hour){
    
    if (hour <= 3){
        *fee = 2.00f;
    }else{
        *fee = 2.00f + (hour * 0.50f);
        if (*fee > 10.0f) {
            *fee = 10.0f;
        }
    }
}

void printFeeAssigment1(float *a, float *b, float *c, int *ah, int *bh, int *ch){
    cout << "|          |" << "Parking time| Parking Fee" <<endl;
    printf("|Customer A|%12d|%12f\n", *ah, *a);
    printf("|Customer B|%12d|%12f\n", *bh, *b);
    printf("|Customer C|%12d|%12f\n", *ch, *c);
    
}

void printGarageFeeAssigment1(){
    
    int aHour, bHour, cHour;
    float aFee, bFee, cFee;
    
    do {
        cout << "Enter the number of hour(<= 24) for Customer A: ";
        cin >> aHour;
    } while (aHour > 24);
    
    do {
        cout << "Enter the number of hour(<= 24) for Customer B: ";
        cin >> bHour;
    } while (bHour > 24);
    
    do {
        cout << "Enter the number of hour(<= 24) for Customer C: ";
        cin >> cHour;
    } while (cHour > 24);
    
    chargeFeeAssigment1(&aFee, aHour);
    chargeFeeAssigment1(&bFee, bHour);
    chargeFeeAssigment1(&cFee, cHour);
    
    printFeeAssigment1(&aFee, &bFee, &cFee, &aHour, &bHour, &cHour);
    
}

bool evenAssignment1(int a){
    
    return (a%2 == 0)? true:false;
}

void printEvenBooleanAssignment1(){
    
    const int SIZE = 10;
    int array[SIZE];
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter the num for array[" << i <<"]: ";
        cin >> array[i];
    }
    
    for (int i = 0; i <SIZE; i++) {
        cout << array[i] << " : " << boolalpha <<evenAssignment1(array[i]) << endl;
    }
    
}

int getAmountOfTime(int hour, int min, int sec){
    
    return hour*60*60 + min*60 + sec;
}

void printSecontdAssignment1(){
    
    int hour, min, sec;
    
    int amount;
    
    do {
        cout << "Enter the number of hour(<= 12): ";
        cin >> hour;
    } while (hour > 12);
    
    do {
        cout << "Enter the number of minute(<= 60): ";
        cin >> min;
    } while (min > 60);
    
    do {
        cout << "Enter the number of second(<= 60): ";
        cin >> sec;
    } while (sec > 60);
    
    amount = getAmountOfTime(hour, min, sec);
    
    cout << "Amount of the time is : " << amount << "[sec]" << endl;
    
}

int getSumArray(int *array, int size){
    
    int sum =0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}

bool isDuplicatedAssingment1(int divisor, int *array, int size){
    
    bool isDuplicated = false;
    for (int i = 0; i < size; i++) {
        if (divisor == array[i]) {
            isDuplicated = true;
        }
    }
    return isDuplicated;
}

void sortTempArrayAssignment1(int *array, int size){
    int i =0;
    do {
        for (int j = 0; j < size-1; j++) {
            if (array[j] > array[j+1]) {
                int temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }
        i++;
    } while (i < size);
    
}

void printPerfectNumberAssignment1(){
    
    const int MAX = 10000;
    
    for (int i = 1; i <= MAX; i++) {
        bool isDublicated = false;
        int k = 0;
        int tempArray[MAX/10]  = {0};
        for (int j = 1; j < i; j++) {
            
            //Check the divisor is already exist in tempArray
            isDublicated = isDuplicatedAssingment1(j, tempArray, MAX/10);
            
            if (isDublicated) break;
            
            if (i % j == 0) {
                tempArray[k] = j;
                k++;
                //Don't add to tempArray i itself
                if(j != 1){
                    tempArray[k] = i / j;
                    k++;
                }
            }
        }
        //Check the Sum of tempArray
        if (i == getSumArray(tempArray, MAX/10)) {
            sortTempArrayAssignment1(tempArray, MAX/10);
            cout << "Perfect number "<<i<<" factor is ";
            for (int x = 0; x < MAX/10; x++) {
                if (tempArray[x] > 0) {
                    cout << tempArray[x] <<" ";
                }
            }
            cout << endl;
        }
    }
    cout << endl;
    
}


void mainAssignment1(){
    
    int input;
    
    do {
        showOptionAssignment1();
        cin >> input;
        switch (input-1) {
            case PARKING:
                printGarageFeeAssigment1();
                break;
            case EVEN:
                printEvenBooleanAssignment1();
                break;
            case STRUCK12:
                printSecontdAssignment1();
                break;
            case PERFECT:
                printPerfectNumberAssignment1();
                break;
                
            default:
                break;
        }
    } while (input <= 4);
}