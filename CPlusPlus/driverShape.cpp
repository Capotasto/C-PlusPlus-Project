//
//  driverShape.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/6/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "driverShape.hpp"

enum type_shape{
    TRI=1,
    REC
};

enum type_oprator{
    ADD=1,
    SUB,
    MUITI,
    DIVIDE
};
void mainDriverShape(){
    
    int inputShape = 0;
    cout << "Choose the number below." << endl;
    cout << "1. Triangle" << endl;
    cout << "2. Rectangle" << endl;
    cin >> inputShape;
    
    int inputOperator;
    cout << "Choose the number below." << endl;
    cout << "1. Add operator OL" << endl;
    cout << "2. Deduct operator OL" << endl;
    cout << "3. Multiply operator OL" << endl;
    cout << "4. Divide operator OL" << endl;
    cin >> inputOperator;
    
    double inputHeight1;
    double inputWidth1;
    double inputHeight2;
    double inputWidth2;
    cout << "Enter the number for height of shape1 you chose." << endl;
    cin >> inputHeight1;
    cout << "Enter the number for width of shape1 you chose." << endl;
    cin >> inputWidth1;
    cout << "Enter the number for height of shape2 you chose." << endl;
    cin >> inputHeight2;
    cout << "Enter the number for width of shape2 you chose." << endl;
    cin >> inputWidth2;
    
    switch (inputShape) {
        case TRI:{
            Triangle triangle1(inputHeight1, inputWidth1);
            Triangle triangle2(inputHeight2, inputWidth2);
            switch (inputOperator) {
                case ADD:{
                    Triangle result = triangle1 + triangle2;
                    cout << result.getArea() << endl;
                    }
                    break;
                case SUB:{
                    Triangle result = triangle1 - triangle2;
                    cout << result.getArea() << endl;
                    }
                    
                    break;
                case MUITI:{
                    Triangle result = triangle1 * triangle2;
                    cout << result.getArea() << endl;
                    }
                    
                    break;
                case DIVIDE:{
                    Triangle result = triangle1 / triangle2;
                    cout << result.getArea() << endl;
                    }
                    break;
                    
                default:
                    break;
            }
            break;
        }
//        case REC:{
//            Rectangle rectangle1(inputHeight1, inputWidth1);
//            Rectangle rectangle2(inputHeight2, inputWidth2);
//            switch (inputOperator) {
//                case ADD:{
//                    Rectangle result = rectangle1 + rectangle2;
//                    cout << result.getArea() << endl;
//                }
//                    break;
//                case SUB:{
//                    Rectangle result = rectangle1 + rectangle2;
//                    cout << result.getArea() << endl;
//                }
//                    
//                    break;
//                case MUITI:{
//                    Rectangle result = rectangle1 + rectangle2;
//                    cout << result.getArea() << endl;
//                }
//                    
//                    break;
//                case DIVIDE:{
//                    Rectangle result = rectangle1 + rectangle2;
//                    cout << result.getArea() << endl;
//                }
//                    break;
//                    
//                default:
//                    break;
//            }
//            break;
//        }
        
        default:
        cout << "You have chosen wrong number for Shape: "<< inputShape <<endl;
            break;
    }
    
}