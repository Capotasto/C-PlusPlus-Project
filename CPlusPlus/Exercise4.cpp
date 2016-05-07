//
//  Exercise4.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/6/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "Exercise4.hpp"

const int SIZE_EXER4 = 3;
const int SIZE_TEMP = SIZE_EXER4 *2;

void printArrayNumber(int *array, int num){
    
    cout << "Array"<< num<< " is :" << endl;
    for (int i = 0; i < SIZE_EXER4; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void printTwoDimArray(int array[][SIZE_EXER4]){

    cout << "Array3 is :" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < SIZE_EXER4; j++) {
            cout << array[i][j] << " ";
        }
    }
    cout << endl;
}

void getNumberFromUserExer4(int *array1, int *array2){

    for (int i = 0; i < SIZE_EXER4; i++) {
        cout << "Enter the number for array1[" << i <<"]: ";
        cin >> array1[i];
    }
    cout << endl;
    
    for (int i = 0; i < SIZE_EXER4; i++) {
        cout << "Enter the number for array2[" << i <<"]: ";
        cin >> array2[i];
    }
    cout << endl;
}

void copyArrayExer4(int *array1, int *array2, int array3[][SIZE_EXER4]){
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < SIZE_EXER4; j++) {
            if (i == 0) {
                array3[i][j] = array1[j];
            }else{
                array3[i][j] = array2[j];
            }
        }
    }
}

bool isSorted(int *array, int size){

    bool isSorted = true;
    for (int i = 0; i < size-1; i++) {
        if (array[i] > array[i+1]) {
            return false;
        }
    }
    return isSorted;
}

void sortTwoDimArray(int array[][SIZE_EXER4]){
    
    //int tempSize =SIZE_EXER4*2;
    
    int tempArray[SIZE_TEMP];
    int k =0;
    //copy to tempArray
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < SIZE_EXER4; j++) {
            tempArray[k] = array[i][j];
            k++;
        }
    }
    
    //Sorting tempArray
    do {
        for (int i = 0 ; i< SIZE_TEMP-1; i++) {
            if (tempArray[i] > tempArray[i+1]) {
                int temp = tempArray[i+1];
                tempArray[i+1] = tempArray[i];
                tempArray[i] = temp;
            }
        }
    } while (!isSorted(tempArray, SIZE_TEMP));
    
    //Restored to Two Dimentional Array
    for (int i = 0; i < SIZE_TEMP; i++) {
        if (i < SIZE_EXER4) {
            array[0][i] = tempArray[i];
        }else{
            array[1][i-SIZE_EXER4] = tempArray[i];
        }
    }
}

void mainExercise4(){
    
    int array1[SIZE_EXER4];
    int array2[SIZE_EXER4];
    
    int array3[2][SIZE_EXER4];
    
    getNumberFromUserExer4(array1, array2);
    
    printArrayNumber(array1, 1);
    printArrayNumber(array2, 2);
    
    copyArrayExer4(array1, array2, array3);
    
    printTwoDimArray(array3);
    
    sortTwoDimArray(array3);
    
    printTwoDimArray(array3);
    
}