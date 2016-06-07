//
//  Shape.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/6/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef Shape_hpp
#define Shape_hpp

#include <iostream>

class Shape{
public:
    Shape(double height, double width);
    double getHeight()const;
    double getWidth()const;
    void setHeight(double height);
    void setWidth(double width);
    virtual double getArea() = 0;
    
private:
    double mHeight;
    double mWidth;
};

#endif /* Shape_hpp */
