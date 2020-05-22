#include <iostream>

int variables() {
    std::cout << "Hello World!" << std::endl;

    const double PI = 3.1415926536;

    char myGrade = 'A';
    bool isHappy = true;
    int myAge = 15;
    float favNum = 3.141592;

    std::cout << "Favourite Number is " << favNum << ". Age is " << myAge << "." << std::endl;

    std::cout << "Size of int " << sizeof(myAge) << std::endl;

    std::cout << "4/5 = " << (double) 4/5 << std::endl;

    return 0;
}