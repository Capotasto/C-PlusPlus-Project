//
//  FirstExer.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/3/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "FirstExer.hpp"

using std::cout;
using std::cin;
using std::endl;

const int SIZE_FIST_EXER = 10;
void getValueFirstExer(int *array, int arrayNum){
    
    for (int i = 0; i < SIZE_FIST_EXER; i++) {
        cout << "Enter the num for array" << arrayNum << "[" << i << "]: ";
        cin >> array[i];
    }

}

void printFistExer(int *array){

    for (int i = 0; i < SIZE_FIST_EXER; i++) {
        cout << *(array+i) <<"  ";
    }
    cout << endl;
}

void outPutArrayFirstExer(){

    int array1[SIZE_FIST_EXER];
    int array2[SIZE_FIST_EXER];
    int array3[SIZE_FIST_EXER];
    
    getValueFirstExer(array1, 1);
    getValueFirstExer(array2, 2);
    
    for (int i = 0 ;i < SIZE_FIST_EXER; i++) {
        array3[i] = array1[i];
    }
    cout << endl << "Array2 is ..." << endl;
    printFistExer(array2);
    cout << endl << "Array3 is ..." << endl;
    printFistExer(array3);
    
    for (int i = 0 ;i < SIZE_FIST_EXER; i++) {
        if (i % 2  == 0) {
            int temp = array3[i];
            array3[i] = array2[i];
            array2[i] = temp;
        }
    }
    
    cout << endl << "Array2 is ..." << endl;
    printFistExer(array2);
    cout << endl << "Array3 is ..." << endl;
    printFistExer(array3);
    
    
}

void outPutTwoDimentionalArrayFirstExer(){
    
    int row  = 4;
    int col = 5;
    
    int array[row][col];
    
    for (int i = 0 ; i < row ; i ++) {
        for (int j = 0; j < col; j++) {
            cout << "Enter the num for array[" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }
    
    for (int i = 0 ; i < row ; i ++) {
        for (int j = 0; j < col; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i = 0 ; i < col ; i ++) {
        for (int j = 0; j < row; j++) {
            cout << array[j][i] << " ";
        }
        cout << endl;

    }
    
}

void mainFirstExer(){
    
    //outPutArrayFirstExer();
    outPutTwoDimentionalArrayFirstExer();
    
    
}