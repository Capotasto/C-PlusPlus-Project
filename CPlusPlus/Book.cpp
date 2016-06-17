//
//  Book.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/17/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "Book.hpp"
Book::Book(){};
Book::Book(string title, string author, string publisher, string isbn)
:mTitle(title), mAuthor(author), mPublisher(publisher), mISBN(isbn){};

string Book::getTitle(){
    return mTitle;
};
string Book::getAuthor(){
        return mAuthor;
};
string Book::getPublisher(){
        return mPublisher;
};
string Book::getISBN(){
        return mISBN;
};

void Book::setTitle(string title){
    mTitle = title;
};
void Book::setAuthor(string author){
    mAuthor = author;
};
void Book::setPublisher(string publisher){
    mPublisher = publisher;
};
void Book::setISBN(string isbn){
    mISBN = isbn;
};