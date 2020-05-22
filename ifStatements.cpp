#include <iostream>

void ifStatements() {
    int age = 81;
    int ageAtLastExam = 16;
    bool isNotIntoxicated = true;

    if ((age >= 1) && (age < 16)) {
        std::cout << "You can't drive!" << std::endl;
    } else if (!isNotIntoxicated) {
        std::cout << "You can't drive!" << std::endl;
    } else if (age >= 80 && ((age > 100) || ((age - ageAtLastExam) > 5))) {
        std::cout << "You can't drive!" << std::endl;
    } else {
        std::cout << "You can drive!" << std::endl;
    }

    bool isHappy = true;
    std::cout << "He is " << ((isHappy) ? "happy" : "not happy") << std::endl;
}
