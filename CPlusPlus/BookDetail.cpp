//
//  BookDetail.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/17/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "BookDetail.hpp"

BookDetail::BookDetail():Book(){};
BookDetail::BookDetail(int page, int fontSize, string coverType, Book &book)
:mPage(page), mFontSize(fontSize), mCoverType(coverType), Book(book){};
int BookDetail::getPage(){
    return mPage;
};
int BookDetail::getFontSize(){
    return mFontSize;
};
string BookDetail::getCoverType(){
    return mCoverType;
};
void BookDetail::setPage(int page){
    mPage = page;
};
void BookDetail::setFontSize(int font){
    mFontSize = font;
};
void BookDetail::setCoverType(string coverType){
    mCoverType = coverType;
};

ostream &operator<<(ostream &output, BookDetail &book){
    output<< "Book title is "<< book.getTitle()<< endl;
    output<< "Book author is "<< book.getAuthor() << endl;
    output<< "Book publisher is "<< book.getPublisher() << endl;
    output<< "Book ISBN is "<< book.getISBN() << endl;
    output<< "Book PAGE is  "<< book.getPage() << endl;
    output<< "Book Font is " << book.getFontSize() << endl;
    output<< "Book Cover type is " << book.getCoverType() << endl;
    return output;
};
istream &operator>>(istream &input, BookDetail &book){
    input.ignore(1000,'\n');
    cout << "Title: ";
    getline(input, book.mTitle);
    cout << "Author: ";
    getline(input, book.mAuthor);
    cout << "Publisher: ";
    getline(input, book.mPublisher);
    cout << "ISBN: ";
    getline(input, book.mISBN);
    cout << "NOP: ";
    input >> book.mPage;
    cout << "Font Size: ";
    input >> book.mFontSize;
    cout << "Cover Type: ";
    getline(input, book.mCoverType);
    input.ignore();
    return input;
};
