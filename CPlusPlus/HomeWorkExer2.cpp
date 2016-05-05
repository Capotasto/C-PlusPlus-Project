//
//  HomeWorkExer2.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/4/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "HomeWorkExer2.hpp"

const int SIZE_TABLE_RWO = 3;

enum type_for_make_tables{
    ENTER_STUDENT,
    ENTER_COURSE,
    ENTER_MARK,
    FIND_STUDENT,
    FIND_COURSE,
    QUIT
    
};

enum type_for_mark_table{
    STUDENT_ID,
    COURSE_ID,
    Q1,
    Q2,
    MID,
    FINAL,
    FINAL_MARK

};

void showOption(){
    std::cout << "1:Enter the Student." << std::endl;
    std::cout << "2:Enter the Course." << std::endl;
    std::cout << "3:Enter the Mark." << std::endl;
    std::cout << "4:Find the Student." << std::endl;
    std::cout << "5:Find the Course." << std::endl;
    std::cout << "6:Quit application." << std::endl;
}

void createStudent(int studentArray[][3], string *firstArray, string *lastArray){
    
    string inputString;
    
    for (int i = 0; i < SIZE_TABLE_RWO; i++) {
        for (int j = 0; j < 3; j++) {
            switch (j) {
                case 0:
                    studentArray[i][j] = i;
                    break;
                case 1:
                    cout << "Enter the student no."<< i << " first name: ";
                    cin >> inputString;
                    firstArray[i] = inputString;
                    studentArray[i][j] = i;
                    
                    break;
                    
                case 2:
                    cout << "Enter the student no."<< i << " last name: ";
                    cin >> inputString;
                    lastArray[i] = inputString;
                    studentArray[i][j] = i;
                    
                    break;
                    
                default:
                    break;
            }
        }
    }
}

void createCourse(int courseArray[][3], string *nameArray){
    
    string inputString;
    int inputNumber;
    
    for (int i = 0; i < SIZE_TABLE_RWO; i++) {
        for (int j = 0; j < 3; j++) {
            switch (j) {
                case 0:
                    courseArray[i][j] = i;
                    break;
                case 1:
                    cout << "Enter the course name(string) for course no."<< i << ": ";
                    cin >> inputString;
                    nameArray[i] = inputString;
                    courseArray[i][j] = i;
                    
                    break;
                    
                case 2:
                    cout << "Enter the course credit(int) for course no."<< i << ": ";
                    cin >> inputNumber;
                    courseArray[i][j] = inputNumber;
                    
                    break;
                    
                default:
                    break;
            }
            
        }
    }
    
}

bool isExist(int array[][3], int num){
    
    bool isExist = false;
    
    for (int i = 0; i < SIZE_TABLE_RWO; i++) {
        if (array[i][0] == num) {
            return true;
        }
    }
    cout << "Not found" << endl;
    return isExist;
}

void creatMark(int array[][7], int courseArray[][3]){
    
    int inputNumber;
    
    for (int i = 0 ; i < SIZE_TABLE_RWO; i++) {
        for (int j = 0; j < 7; j++) {
            switch (j) {
                case STUDENT_ID:
                    array[i][STUDENT_ID] = i;
                    break;
                case COURSE_ID:
                    do {
                        cout << "\nEnter the course id(number) for Student Id = "<< i << ": ";
                        cin >> inputNumber;
                    } while (!isExist(courseArray, inputNumber));
                    array[i][COURSE_ID] = inputNumber;
                    break;
                case Q1:
                    cout << "Enter the Q1 Marks(number) for Student Id = "<< i << ": ";
                    cin >> inputNumber;
                    array[i][Q1] = inputNumber;
                    break;

                case Q2:
                    cout << "Enter the Q2 Marks(number) for Student Id = "<< i << ": ";
                    cin >> inputNumber;
                    array[i][Q2] = inputNumber;
                    break;

                case MID:
                    cout << "Enter the MID Marks(number) for Student Id = "<< i << ": ";
                    cin >> inputNumber;
                    array[i][MID] = inputNumber;
                    break;

                case FINAL:
                    cout << "Enter the Finla Marks(number) for Student Id = "<< i << ": ";
                    cin >> inputNumber;
                    array[i][FINAL] = inputNumber;
                    break;

                case FINAL_MARK:
                    int sum = array[i][Q1]+ array[i][Q2] + array[i][MID] + array[i][FINAL];
                    array[i][FINAL_MARK] = sum;
                    break;
                    
                }
        }
    }
}

bool findStudent(int array[][3], string *first, string *last){
    
    int inputNumber;
    bool isFound = false;
    
    cout << "Enter Student Id(int) for search Student Table.: ";
    cin >> inputNumber;
    
    for (int i = 0; i < SIZE_TABLE_RWO; i++) {
        if (array[i][0] == inputNumber) {
            cout << "Search number: " << inputNumber << endl;
            cout << "Student Id: " << array[i][0] << endl;
            cout << "Student First Name: " << first[array[i][1]] << endl;
            cout << "Student Last Name : " << last[array[i][2]] << endl;
            isFound = true;
        }
    }
    
    if (!isFound) {
        cout << "No student this number :" << inputNumber << endl;
    }
    
    cout << endl;
    
    return isFound;
    
}

bool findCorse(int array[][3], string *name){
    
    int inputNumber;
    bool isFound = false;
    
    cout << "Enter Course Id(int) for search Course Table.: ";
    cin >> inputNumber;
    
    for (int i = 0; i < SIZE_TABLE_RWO; i++) {
        if (array[i][0] == inputNumber) {
            cout << "Search number: " << inputNumber << endl;
            cout << "Course Id: " << array[i][0] << endl;
            cout << "Course Name: " << name[array[i][1]] << endl;
            cout << "Course Credit : " << array[i][2] << endl;
            isFound = true;
        }
    }
    
    if (!isFound) {
        cout << "No Course this number :" << inputNumber << endl;
    }
    
    cout << endl;
    
    return isFound;
}

void printStudents(int array[][3], string *first, string *last){
    
    for (int i = 0; i < SIZE_TABLE_RWO; i++) {
        for (int j = 0; j < 3; j++) {
            cout << array[i][j] << " ";
            
        }
        cout << endl;
    }
    
    for (int i = 0; i < SIZE_TABLE_RWO; i++) {
        
        cout << first[i] << " " << last[i] << endl;;
        
    }
    
}

void printCourses(int array[][3], string *name){
    
    for (int i = 0; i < SIZE_TABLE_RWO; i++) {
        for (int j = 0; j < 3; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < SIZE_TABLE_RWO; i++) {
        
        cout << name[i] << endl;;
        
    }
}

void printMark(int mark[][7], string *first, string *last, string* course){
    
    for (int i = 0 ; i < SIZE_TABLE_RWO; i++) {
        for (int j = 0; j < 7; j++) {
            switch (j) {
                case STUDENT_ID:
                    cout << "Student Id: " << mark[i][STUDENT_ID] << endl;
                    cout << "Student First Name: " << first[mark[i][STUDENT_ID]] << endl;
                    cout << "Student last Name: " <<last[mark[i][STUDENT_ID]] << endl;
                    break;
                    
                case COURSE_ID:
                    cout << "Student course Id: " << mark[i][COURSE_ID] << endl;
                    cout << "Student course Name: " << course[mark[i][COURSE_ID]] << endl;
                    break;

                    
                case Q1:
                    cout <<"Student Q1 score: "<< mark[i][Q1] << endl;
                    break;

                    
                case Q2:
                    cout << "Student Q2 score: "<<  mark[i][Q2] << endl;
                    break;

                    
                case MID:
                    cout << "Student MID score: " << mark[i][MID] << endl;
                    break;

                    
                case FINAL:
                    cout << "Student Final score: "  << mark[i][FINAL] << endl;
                    break;
                    
                case FINAL_MARK:
                    cout << "Student FINAL mark score: " << mark[i][FINAL_MARK] << endl;
                    break;
                default:
                    break;
            }
        }
        cout << endl;
    }
    
}

void mainHomeWorkExer2(){
    int input;
    int studentArray[SIZE_TABLE_RWO][3];
    string arrayFirstName[SIZE_TABLE_RWO];
    string arrayLastName[SIZE_TABLE_RWO];
    
    int courseArray[SIZE_TABLE_RWO][3];
    string arrayCourseName[SIZE_TABLE_RWO];
    
    int markArray[SIZE_TABLE_RWO][7];
    
    while (input - 1 != QUIT ) {
        showOption();
        std::cin >> input;
        switch (input-1) {
            case ENTER_STUDENT:
                createStudent(studentArray, arrayFirstName, arrayLastName);
                printStudents(studentArray, arrayFirstName, arrayLastName);
                break;
            case ENTER_COURSE:
                createCourse(courseArray, arrayCourseName);
                printCourses(courseArray, arrayCourseName);
                break;
            case ENTER_MARK:
                creatMark(markArray, courseArray);
                printMark(markArray, arrayFirstName, arrayLastName, arrayCourseName);
                break;
            case FIND_STUDENT:
                findStudent(studentArray, arrayFirstName, arrayLastName);
                break;
            case FIND_COURSE:
                findCorse(courseArray, arrayCourseName);
                break;
        }
    }

    
}