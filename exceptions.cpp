//
// Created by Adrian Böhme on 23.05.20.
//

#include <iostream>

void exceptions() {
    int number = 0;

    try {
        if (number != 0) {
            std::cout << 2/number << std::endl;
        } else throw(number);
    } catch (int number) {
        std::cout << number << " is not valid" << std::endl;
    }
}
