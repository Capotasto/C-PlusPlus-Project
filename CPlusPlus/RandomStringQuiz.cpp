//
//  RandomStringQuiz.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/14/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "RandomStringQuiz.hpp"

void printList(vector<string> &stringList){
    cout << "List is ";
    for (int i = 0; i < stringList.size(); i++) {
        cout << stringList[i]  << ", ";
    }
    cout << endl;
}

void guessingString(vector<string> &list, int correctIndex){
    
    string correctStr = list[correctIndex];
    
    cout << "Guess the corrct String!!!" << endl;
    
    for (int i = 0; i < RANDOM_STRING_ZISE; i++) {
        char inputChar;
        cout <<"Enter the some charactor for find the word form correct String(Challenge Cuont"<< RANDOM_STRING_ZISE - i<<"): ";
        cin >>inputChar;
        std::size_t found = correctStr.find(inputChar);
        if (found!=std::string::npos){
            cout << "Correct!! "<< inputChar << " is incluede correct String!!" << endl;
        }else{
            cout << "Wrong!! "<< inputChar << " is not incluede correct String!!" << endl;
        }
    }
}

void mainRandomStringQuiz(){
    
    vector<string> stringList;
    
    for (int i = 0; i < RANDOM_STRING_ZISE; i++) {
        string input;
        cout << "Enter the string for index " << i << " :";
        cin >> input;
        stringList.push_back(input);
    }
    
    printList(stringList);
    srand(time(NULL));
    int correctIndex = rand() % RANDOM_STRING_ZISE;
    
    guessingString(stringList, correctIndex);
}