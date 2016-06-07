//
//  Shape.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/6/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "Shape.hpp"

Shape::Shape(double height, double width):mHeight(height), mWidth(width){};

double Shape::getHeight()const{
    return mHeight;
};
double Shape::getWidth()const{
    return mWidth;
};
void Shape::setHeight(double height){
    mHeight = height;
};
void Shape::setWidth(double width){
    mWidth = width;
};