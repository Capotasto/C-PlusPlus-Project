//
//  GlobalNumberExer.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/25/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "GlobalNumberExer.hpp"

int number = 5;

void sum(int i){
    cout << "Sum is " << ::number + i << endl;
}

void sum(double i){
    cout << "Sum is " << ::number + i << endl;
}

void doGrobal(){
    double number = 10.5;
    
    cout << "Local :" << number <<endl;
    cout << "Global: " << ::number << endl;
    
    sum(5);
    sum(5.5);
}

void convertCharactor(char *string){
    for (int i = 0; *(string+i) != '\0'; i++) {
        if (string[i] < 97) {
            string[i] += 32;
        }else{
            string[i] -= 32;
        }
    }
}

void doChangeCharactor(){
    char string[80];
    
    cout << "Enter the word: ";
    cin >> string;
    
    cout << "The word is " << string << endl;
    convertCharactor(string);
    cout << "The converted word is " << string << endl;
}

void printNumber(int *array, const int size){
    for (int i = 0; i < size; i++) {
        cout << array[i] << ", ";
    }
    cout << endl;
}

void sortArray(int *array, const int size){
    int arraySize = size;
    while (arraySize > 1) {
        for (int i = 0; i < size-1; i++) {
            if (array[i] > array[i+1]) {
                int temp = array[i+1];
                array[i+1] = array[i];
                array[i] = temp;
            }
        }
        arraySize -= 1;
    }
}

void margeArray(int *array1, int *array2, int *array3, const int size){
    
    int *maxPtr1 = array1+size;
    int *maxPtr2 = array2+size;
    for (int i = 0; i < size+size; i++) {
        if (array1 >= maxPtr1) {
            *(array3+i) = *array2;
        }else if (array2 >= maxPtr2){
            *(array3+i) = *array1;
        }else{
            if (*array1 < *array2) {
                *(array3+i) = *array1;
                array1++;
                
            }else{
                *(array3+i) = *array2;
               array2++;
            }
        }
        
    }
}

void doSortAndMerge(){
    const int SIZE_GLOBAL = 5;
    
    int array1[SIZE_GLOBAL];
    int array2[SIZE_GLOBAL];
    int array3[SIZE_GLOBAL+SIZE_GLOBAL];
    
    for (int i = 0; i < SIZE_GLOBAL; i++) {
        cout << "Enter the num for array1["<<i<<"]";
        cin >> array1[i];
    }
    for (int i = 0; i < SIZE_GLOBAL; i++) {
        cout << "Enter the num for array2["<<i<<"]";
        cin >> array2[i];
    }
    
    printNumber(array1,SIZE_GLOBAL);
    printNumber(array2,SIZE_GLOBAL);
    
    
    sortArray(array1,SIZE_GLOBAL);
    sortArray(array2,SIZE_GLOBAL);
    
    printNumber(array1,SIZE_GLOBAL);
    printNumber(array2,SIZE_GLOBAL);
    
    margeArray(array1,array2,array3,SIZE_GLOBAL);
    printNumber(array3, SIZE_GLOBAL+SIZE_GLOBAL);
}

void mainGlobalNumberExer(){
    //doGrobal();
    //doChangeCharactor();
    doSortAndMerge();
}