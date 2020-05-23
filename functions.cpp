//
// Created by Adrian Böhme on 23.05.20.
//

#include <iostream>

int addNumber(int firstNum, int secondNum = 0) {
    int combinedValue = firstNum + secondNum;
    return combinedValue;
}

int addNumber(int firstNum, int secondNum, int thirdNum) {
    return firstNum + secondNum + thirdNum;
}

int functions() {

    std::cout << addNumber(1, 2) << ", " << addNumber(1, 5, 6) << std::endl;

    return 0;
}