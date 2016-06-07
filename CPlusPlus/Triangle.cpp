//
//  Triangle.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/6/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "Triangle.hpp"


Triangle::Triangle(int height, int width): Shape(height, width){};
Triangle Triangle::operator+(const Triangle& tri){
    Triangle *triangleObj;
    double height = this->getHeight() + tri.getHeight();
    double width = this->getWidth() + tri.getWidth();
    triangleObj = new Triangle(height, width);
    return *triangleObj;

};
Triangle Triangle::operator-(const Triangle& tri){
    Triangle *triangleObj;
    double height, width;
    if ((this->getHeight()- tri.getHeight()) > 0) {
        height = this->getHeight() - tri.getHeight();
    }else if ((tri.getHeight() - this->getHeight()) >0 ){
        height = tri.getHeight() - this->getHeight();
    }
    if ((this->getWidth()- tri.getWidth()) > 0) {
        width = this->getWidth() - tri.getWidth();
    }else if ((tri.getWidth() - this->getWidth()) >0 ){
        width = tri.getWidth() - this->getWidth();
    }

    triangleObj = new Triangle(height, width);
    return *triangleObj;
};
Triangle Triangle::operator*(const Triangle& tri){
    Triangle *triangleObj;
    double height = this->getHeight() * tri.getHeight();
    double width = this->getWidth() * tri.getWidth();
    triangleObj = new Triangle(height, width);
    return *triangleObj;
    
};
Triangle Triangle::operator/(const Triangle& tri){
    Triangle *triangleObj;
    double height, width;
    if (tri.getHeight() != 0){
        height = this->getHeight() / tri.getHeight();
    }else if(getHeight() != 0){
        height = tri.getHeight() / this->getHeight();
    }else{
        height = 0;
    }
    if (tri.getWidth() != 0){
        width = this->getWidth() / tri.getWidth();
    }else if (this->getWidth() != 0){
        width = tri.getWidth() / this->getWidth();
    }else{
        width = 0;
    }
    triangleObj = new Triangle(height, width);
    return *triangleObj;
};

double Triangle::getArea(){
    return getHeight() * getWidth() /2;
};