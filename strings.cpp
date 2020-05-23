//
// Created by Adrian Böhme on 23.05.20.
//

#include <iostream>

void strings() {
    char happyArray[6] = {'H', 'a', 'p', 'p', 'y', '\0'};
    std::string birthdayString = " Birthday";

    std::cout << happyArray + birthdayString << std::endl;

    std::cout << std::endl;


    std::string yourName;
    std::cout << "What is your name? ";
    getline(std::cin, yourName);
    std::cout << "Hello " + yourName << std::endl;

    std::string wholeName = yourName.assign(yourName);
    std::cout << "  Whole name: " << wholeName << std::endl;

    std::string firstName = wholeName.assign(wholeName, 0, 6);
    std::cout << "  First name: " << firstName << std::endl;

    int lastNameIndex = yourName.find("Böhme", 0);
    std::cout << "Index for last name " << lastNameIndex << std::endl;

    try {
        yourName.insert(lastNameIndex, "Dr. ");
        std::cout << "Inserted name: " << yourName << std::endl;
    } catch (std::out_of_range& e) {
        std::cout << "Inserting failed... last name not found" << std::endl;
    }

    std::cout << std::endl;



    double eulersConstant = .57721;
    std::string eulerGuess;
    double eulerGuessDouble;

    std::cout << "What is Eulers Constant? ";
    getline(std::cin, eulerGuess);

    eulerGuessDouble = std::stod(eulerGuess);
    if (eulerGuessDouble == eulersConstant) {
        std::cout << "You guessed right!" << std::endl;
    } else {
        std::cout << std::to_string(eulerGuessDouble) + " is not right!" << std::endl;
    }

    std::cout << "Size of string " << eulerGuess.size() << std::endl;
    std::cout << "Is string empty " << eulerGuess.empty() << std::endl;
    std::cout << eulerGuess.append(" was your guess") << std::endl;
}