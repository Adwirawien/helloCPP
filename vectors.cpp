//
// Created by Adrian Böhme on 23.05.20.
//

#include <iostream>
#include <vector>

void vectors() {
    std::vector <int> lotteryNumVect(10);
    int lotteryNumArray[5] = {4, 13, 14, 24, 34};

    // insert first 3 values from array
    lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, lotteryNumArray+3);

    // set value with index 5
    lotteryNumVect.insert(lotteryNumVect.begin()+5, 44);

    // print value with index 5
    std::cout << lotteryNumVect.at(5) << std::endl;

    // add number at the end
    lotteryNumVect.push_back(64);

    // print last number in vector
    std::cout << "Superzahl " << lotteryNumVect.back() << std::endl;

    // remove number at the end
    lotteryNumVect.pop_back();
}
