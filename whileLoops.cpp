//
// Created by Adrian Böhme on 23.05.20.
//

#include <iostream>

void whileLoops() {
    int randNum = rand() % 100 + 1;

    while (randNum != 100) {

        std::cout << randNum << std::endl;

        randNum = rand() % 100 + 1;
    }
}

void guessGame() {
    std::string numberGuessed;
    int intNumberGuessed = 0;

    do {
        std::cout << "Guess between 1 and 10: ";
        getline(std::cin, numberGuessed);
        intNumberGuessed = std::stod(numberGuessed);
        std::cout << intNumberGuessed << std::endl;
    } while (intNumberGuessed != 4);

    std::cout << "You win" << std::endl;
}
