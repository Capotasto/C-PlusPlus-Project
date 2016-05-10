//
//  Exercise5.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 5/9/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "Exercise5.hpp"

void BookExer5::setId(int id){
    this->bookId = id;
}

int BookExer5::getId(){
    return this->bookId;
}

void BookExer5::setAuthor(string name){
    this->author = name;
}
string BookExer5::getAuthor(){
    return this->author;
}
void BookExer5::setTitle(string title){
    this->title = title;
}
string BookExer5::getTitle(){
    return this->title;
}
void BookExer5::setSubject(string subject){
    this->subject = subject;
}
string BookExer5::getSubject(){
    return this->subject;
}

void BookExer5::displayBook(){
    cout << "This book is ..." << endl;
    cout << "Book id is " << getId()<<endl;
    cout << "Book title is " << getTitle()<<endl;
    cout << "Book author is " << getAuthor()<<endl;
    cout << "Book subject is " << getSubject()<<endl;
}
void BookExer5::update(int num, string value){
    switch (num) {
        case ID:
            setId(std::stoi(value));
            break;
        case AUTHOR:
            setAuthor(value);
            break;
        case TITLE:
            setTitle(value);
            break;
        case SUBJECT:
            setSubject(value);
            break;
        default:
            break;
    }
}

void GradeBook::setCredit(int credit){
    this->credit = credit;
}

int GradeBook::getCredit(){
    return credit;
}

void GradeBook::displayCredit(){
    cout << "Credit is " << getCredit() << endl;
}

string GradeBook::getCourseNaeme(){
    return this->nameOfCourse;
}

void GradeBook::setCourseName(string name){

    this->nameOfCourse = name;
}

void GradeBook::displayMessage(string word){
    cout << "Welcome to the grade book for";
    cout << getCourseNaeme() << endl;
}

void GradeBook::displayCreadit(string word, int credit){
    cout << word << "\'s course credit is "<< credit << endl;
}

void callGradeBookClass(){
    
    string nameOfCourse;
    int creditOfCouser;
    GradeBook gradeBook;
    
    cout << "Please enter the course name:" << endl;
    getline(cin, nameOfCourse);
    cout << endl;
    
    cout << "Enter the number for credit for this course"<< nameOfCourse << endl;
    cin >> creditOfCouser;
    cout << endl;
    
    gradeBook.displayMessage(nameOfCourse);
    gradeBook.displayCreadit(nameOfCourse, creditOfCouser);
    
    gradeBook.setCredit(creditOfCouser);
    gradeBook.displayCredit();
    

}

void callBookExer5Class(){

    int bookId, updateType;
    string author, title, subject, value;
    BookExer5 mBook;
    
    cout << "Enter the number for book id : ";
    cin >> bookId;
    getchar();
    mBook.setId(bookId);
    
    cout << "Enter the number for book author : ";
    getline(cin, author);
    mBook.setAuthor(author);
    
    cout << "Enter the number for book title : ";
    getline(cin, title);
    mBook.setTitle(title);
    
    cout << "Enter the number for book subject : ";
    getline(cin, subject);
    mBook.setSubject(subject);
    
    mBook.displayBook();
    
    cout << "Enter the number for update chose below: "<< endl;
    cout << "1.Book Id(int)."<< endl;
    cout << "2.Book Author(String)."<< endl;
    cout << "3.Book Title(String)."<< endl;
    cout << "4.Book Subject(String)."<< endl;
    cin >> updateType;
    
    cout << "Enter the value(number or String) for class member you have choosen: ";
    getchar();
    getline(cin,value);
    mBook.update(updateType-1, value);
    
    mBook.displayBook();
}

void mainExercise5(){
    //callGradeBookClass();
    callBookExer5Class();
}