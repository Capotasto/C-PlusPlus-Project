//
//  Rectangle.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/6/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "Rectangle.hpp"


//Rectangle::Rectangle(int height, int width):Shape(height, width){};
//Rectangle Rectangle::operator+(const Rectangle& rect){
//    Rectangle *rectangleObj;
//    double height = this->getHeight() + rect.getHeight();
//    double width = this->getWidth() + rect.getWidth();
//    rectangleObj = new Rectangle(height, width);
//    return *rectangleObj;
//};
//Rectangle Rectangle::operator-(const Rectangle& rect){
//    Rectangle *rectangleObj;
//    double height;
//    if (this->getHeight() > rect.getHeight()) {
//        height = this->getHeight() - rect.getHeight();
//    }else if(rect.getHeight() > this->getHeight()){
//        height = rect.getHeight() - this->getHeight();
//    }
//    double width;
//    if (this->getWidth() > rect.getWidth()) {
//        width = this->getWidth() - rect.getWidth();
//    }else if(rect.getWidth()> this->getWidth()){
//        width = rect.getWidth() - this->getWidth();
//    }
//    rectangleObj = new Rectangle(height, width);
//    return *rectangleObj;
//};
//Rectangle Rectangle::operator*(const Rectangle& rect){
//    Rectangle *rectangleObj;
//    double height = this->getHeight() * rect.getHeight();
//    double width = this->getWidth() * rect.getWidth();
//    rectangleObj = new Rectangle(height, width);
//    return *rectangleObj;
//
//};
//Rectangle Rectangle::operator/(const Rectangle& rect){
//    Rectangle *rectangleObj;
//    double height, width;
//    if (rect.getHeight() != 0){
//        height = this->getHeight() / rect.getHeight();
//    }else if(this->getHeight() != 0 ){
//        height = rect.getHeight() / this->getHeight();
//    }else{
//        height = 0;
//    }
//    if (rect.getWidth() != 0){
//        width = this->getWidth() / rect.getWidth();
//    }else if(this->getHeight() != 0 ){
//        width = rect.getWidth() / this->getWidth();
//    }else{
//        width = 0;
//    }
//    
//    
//    rectangleObj = new Rectangle(height, width);
//    return *rectangleObj;
//
//};
//
//double Rectangle::getArea(){
//    return this->getWidth() * this->getHeight();
//};
