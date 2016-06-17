//
//  driverBookDetail.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/17/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "driverBookDetail.hpp"

void mainDriverBookDetail(){
    
    string title, author, publisher, isbn;
    
    cout << "Enter the title: ";
    cin >> title;
    cout << "Enter the author: ";
    cin >> author;
    cout << "Enter the publisher: ";
    cin >> publisher;
    cout << "Enter the ISBN: ";
    cin >> isbn;
    Book book(title, author, publisher, isbn);
    
    int page, font;
    string coverType;
    
    cout << "Enter the number of page: ";
    cin >> page;
    
    cout << "Enter the number of font: ";
    cin >> font;
    
    cout << "Enter the cover type: ";
    getchar();
    cin >> coverType;
    
    BookDetail(page, font, coverType, book);
    
    cout << "************Using Operator Overloaded Functions **************\n";
    
    BookDetail book1;
    cin >> book1;
    cout << book1;
    
}