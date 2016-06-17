//
//  BookDetail.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/17/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef BookDetail_hpp
#define BookDetail_hpp

#include <stdio.h>
#include <iomanip>
#include "Book.hpp"

using std::ostream;
using std::istream;

class BookDetail: public Book{
    friend ostream &operator<<(ostream &output, BookDetail &book);
    friend istream &operator>>(istream &input, BookDetail &book);
public:
    BookDetail();
    BookDetail(int page, int fontSize, string coverType, Book &book);
    int getPage();
    int getFontSize();
    string getCoverType();
    void setPage(int page);
    void setFontSize(int font);
    void setCoverType(string coverType);
private:
    int mPage;
    int mFontSize;
    string mCoverType;
    
};

#endif /* BookDetail_hpp */
