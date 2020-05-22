#include <iostream>

void forLoops() {
    int myFavNums[5];
    int badNums[5] = {4, 13, 14, 24, 34};

    std::cout << badNums[2] << std::endl;

    char myName[2][6] = {{'A', 'd', 'r', 'i', 'a', 'n'}, {'B', 'o', 'e', 'h', 'm', 'e'}};
    std::cout << myName[0][2] << std::endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            std::cout << myName[i][j];
        }
        std::cout << " ";
    }
}
