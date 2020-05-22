#include <iostream>

void switchStatements() {
    int greetingOption = 1;

    switch (greetingOption) {
        case 1:
            std::cout << "Grüß Gott!" << std::endl;
            break;
        case 2:
            std::cout << "Guten Tag!" << std::endl;
            break;
        case 3:
            std::cout << "Moinsen!" << std::endl;
            break;
        default:
            std::cout << "Hallo" << std::endl;
    }
}
