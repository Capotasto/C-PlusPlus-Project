//
//  Exercise3.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/5/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "Exercise3.hpp"

const int SIZE_ROW_EXER_3 = 9;
const int SIZE_COL_EXER_3 = 10;

void makeStarsExer3(char array[SIZE_ROW_EXER_3][SIZE_COL_EXER_3]){
    
    for (int i = 0; i < SIZE_ROW_EXER_3; i++) {
        for (int j = 0 ;j < SIZE_COL_EXER_3; j++) {
            switch (i) {
                case 0:
                case 8:
                    if (j == 4 || j == 5) {
                        array[i][j] = '*';
                    }else{
                        array[i][j] = ' ';
                        
                    }
                    break;
                    
                case 1:
                case 7:
                    
                    if (3<= j && j <=6) {
                        array[i][j] = '*';
                    }else{
                        array[i][j] = ' ';
                        
                    }
                    break;
                    
                case 2:
                case 6:
                    if ( 2 <= j && j <= 7) {
                        array[i][j] = '*';
                    }else{
                        array[i][j] = ' ';
                        
                    }
                    break;
                    
                case 3:
                case 5:
                    if ( 1 <= j && j <= 8) {
                        array[i][j] = '*';
                    }else{
                        array[i][j] = ' ';
                        
                    }
                    break;
                    
                case 4:
                    array[i][j] = '*';
                    
                    break;
                    
                default:
                    break;
            }
        }
    }
}

void printStarsExer3(char array[SIZE_ROW_EXER_3][SIZE_COL_EXER_3]){
    
    for (int i = 0; i < SIZE_ROW_EXER_3; i++) {
        for (int j = 0 ;j < SIZE_COL_EXER_3; j++) {
            std::cout << array[i][j] <<" ";
        }
        std::cout << std::endl;
    }
}

void startExer3(){
    char array[SIZE_ROW_EXER_3][SIZE_COL_EXER_3];
    
    makeStarsExer3(array);
    
    printStarsExer3(array);
}

void readCharactorArray(char str[]){
    cout << "Enter a string with Maximum 19 characters.";
    cin >> str;
}

void printExer3(char str[]){
    
    cout << "The value of the character arrray is ";
    puts(str);

}

string readString(string str){

    cout << "Enter a string to read";
    getline(cin, str);
    return str;
}

void printStringExer3(string str){
    
    
}

void stringExer3(){

    char str[20];
    readCharactorArray(str);
    printExer3(str);
    
    cin.clear();
    fflush(stdin);
    
    cout << "Working with starings than character arrays\n";
    
    string str1;
    str1 = readString(str1);
    printStringExer3(str1);
    
}

void mainExercise3(){
    
    //startExer3();
    
    stringExer3();
    
    
    
}