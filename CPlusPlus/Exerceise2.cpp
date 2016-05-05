//
//  Exerceise2.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/4/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "Exerceise2.hpp"

const int SIZE_EXER_2 = 9;

void createShapeExer2(char array[][SIZE_EXER_2]){
    
    for (int i = 0; i < SIZE_EXER_2; i++) {
        for (int j = 0 ;j < SIZE_EXER_2; j++) {
            switch (i) {
                case 0:
                case 8:
                    if (j == 0 || j == 4 || j ==8) {
                        array[i][j] = '*';
                    }else{
                        array[i][j] = ' ';

                    }
                    break;
                    
                case 1:
                case 7:

                    if (j == 1 || j == 4 || j ==7) {
                        array[i][j] = '*';
                    }else{
                        array[i][j] = ' ';
                        
                    }
                    break;

                case 2:
                    case 6:
                    if (j == 2 || j == 4 || j ==6) {
                        array[i][j] = '*';
                    }else{
                        array[i][j] = ' ';
                        
                    }
                    break;

                case 3:
                    case 5:
                    if (j == 3 || j == 4 || j ==5) {
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

void printShapeExer2(char array[SIZE_EXER_2][SIZE_EXER_2]){

    for (int i = 0; i < SIZE_EXER_2; i++) {
        for (int j = 0 ;j < SIZE_EXER_2; j++) {
            std::cout << array[i][j] <<" ";
        
        }
        std::cout << std::endl;
    }
}

void mainExerceise2(){
    
    char array[SIZE_EXER_2][SIZE_EXER_2];
    
    createShapeExer2(array);
    
    printShapeExer2(array);

    
}