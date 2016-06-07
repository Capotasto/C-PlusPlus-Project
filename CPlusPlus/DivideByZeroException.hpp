//
//  DivideByZeroException.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/7/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef DivideByZeroException_hpp
#define DivideByZeroException_hpp

#include <stdexcept> // stdexcept header file contains runtime_error
using std::runtime_error;
class DivideByZeroException : public runtime_error
{
public:
    // constructor specifies default error message
    DivideByZeroException();
};

#endif /* DivideByZeroException_hpp */
