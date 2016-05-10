//
//  Exercise5.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/9/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef Exercise5_hpp
#define Exercise5_hpp

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void mainExercise5();

enum type_book_member{
    ID,//0
    AUTHOR,//1
    TITLE,//2
    SUBJECT//3
};

class GradeBook {

public:
    void displayMessage(string word);
    void displayCreadit(string word, int credit);
    void setCourseName(string name);
    string getCourseNaeme();
    void setCredit(int credit);
    int getCredit();
    void displayCredit();
private:
    string nameOfCourse;
    int credit;
};

class BookExer5{
public:
    void setId(int id);
    int getId();
    void setAuthor(string name);
    string getAuthor();
    void setTitle(string title);
    string getTitle();
    void setSubject(string subject);
    string getSubject();
    
    void displayBook();
    void update(int num, string value);
    
private:
    int bookId;
    string author;
    string title;
    string subject;

};

#endif /* Exercise5_hpp */
