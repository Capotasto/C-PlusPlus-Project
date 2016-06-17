//
//  Book.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/17/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef Book_hpp
#define Book_hpp

#include <iostream>

using namespace std;

class Book{
public:
    Book();
    Book(string title, string author, string publisher, string isbn);
    
    string getTitle();
    string getAuthor();
    string getPublisher();
    string getISBN();
    
    void setTitle(string title);
    void setAuthor(string author);
    void setPublisher(string publisher);
    void setISBN(string isbn);
    
protected:
    string mTitle;
    string mAuthor;
    string mPublisher;
    string mISBN;
};

#endif /* Book_hpp */
