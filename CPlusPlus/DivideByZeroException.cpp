//
//  DivideByZeroException.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/7/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "DivideByZeroException.hpp"

DivideByZeroException::DivideByZeroException():
runtime_error("attempted to divide by zero") {}
