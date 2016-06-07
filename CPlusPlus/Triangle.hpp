//
//  Triangle.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/6/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef Triangle_hpp
#define Triangle_hpp

#include "Shape.hpp"

class Triangle: public Shape{
public:
    Triangle(int height, int width);
    Triangle operator+(const Triangle& shape);
    Triangle operator-(const Triangle& shape);
    Triangle operator*(const Triangle& shape);
    Triangle operator/(const Triangle& shape);
    double getArea();
private:

};

#endif /* Triangle_hpp */
