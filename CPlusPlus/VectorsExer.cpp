//
//  VectorsExer.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/27/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "VectorsExer.hpp"

const int SIZE_VECTOR_EXER = 10;
const int SIZE_FUCNTION_VECTOR = 4;

void printVector(std::vector<int> &list){
    for (int i = 0; i < list.size(); i++) {
        std::cout << "Vector list[" << i << "]: " << list[i] << std::endl;
    }
}


void getLessThan50(int *array){
    std::vector<int> list;
    for (int i = 0; i < SIZE_VECTOR_EXER; i++ ) {
        if (*(array+i) < 50) {
            list.push_back(*(array+i));
        }
    }
    std::cout << "Less than 50 numbers are..." << std::endl;
    printVector(list);
}

void getGreaterThan50(int *array){
    std::vector<int> list;
    for (int i = 0; i < SIZE_VECTOR_EXER; i++ ) {
        if (*(array+i) > 50) {
            list.push_back(*(array+i));
        }
    }
    std::cout << "Greater than 50 numbers are..." << std::endl;
    printVector(list);
}

void getEven(int *array){
    std::vector<int> list;
    for (int i = 0; i < SIZE_VECTOR_EXER; i++ ) {
        if (*(array+i)%2 == 0) {
            list.push_back(*(array+i));
        }
    }
    std::cout << "Even numbers are..." << std::endl;
    printVector(list);
}

void getOdd(int *array){
    std::vector<int> list;
    for (int i = 0; i < SIZE_VECTOR_EXER; i++ ) {
        if (*(array+i) % 2 != 0) {
            list.push_back(*(array+i));
        }
    }
    std::cout << "Odd numbers are..." << std::endl;
    printVector(list);
}

bool isCorrectInput(int *array, int input, int size){
    //check the amount of number
    if (input< 0 || input > 99) {
        std::cout << "Wrong input!! The number must be between 0 and 99." << std::endl;
        return false;
    }
    
    //check the amount of the number less than 50
    int countLessThan50=0;
    int countGreaterThan50=0;
    int countEven=0;
    int countOdd=0;
    for (int i = 0; i < size +1; i++) {
        if (array[i] < 50) {
            countLessThan50++;
        }else{
            countGreaterThan50++;
        }
        if (array[i]%2 == 0) {
            countEven++;
        }else{
            countOdd++;
        }
    }
    if (countGreaterThan50 > 5){
        std::cout << "The number must be 5 number less than 50." << std::endl;
        return false;
    }
    
    if (countLessThan50 > 5) {
        std::cout << "The number must be 5 number greater than 50." << std::endl;
        return false;
    }
    
    if (countEven > 5) {
        std::cout << "The Even number must be 5 numbers" << std::endl;
        return false;

    }
    
    if (countOdd > 5) {
        std::cout << "The Odd number must be 5 numbers" << std::endl;
        return false;
        
    }
    
    return true;
}

void mainVectorsExer(){
    
    
    int array[SIZE_VECTOR_EXER];
    
    void(*ptr[SIZE_FUCNTION_VECTOR])(int *) = {getLessThan50, getGreaterThan50, getEven, getOdd};
    
    std::cout << "Enter the num, it must be between 0 and 99, 5 enven and 5 odd number." << std::endl;
    for (int i = 0; i < SIZE_VECTOR_EXER; i++) {
        std::cout << "Enter the num for array["<< i <<"]: " ;
        std::cin >> array[i];
        if(!isCorrectInput(array, array[i], i)){
            std::cout << "Try it again!!" << std::endl;
            i--;
        }
    }
    
    for (int i = 0; i < SIZE_FUCNTION_VECTOR; i++) {
        (*ptr[i])(array);
    }
}