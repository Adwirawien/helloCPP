//
// Created by Adrian Böhme on 23.05.20.
//

#include <iostream>
#include <fstream>

void readerWriter() {
    std::string quote = "A day without sunshine is like, you know, night.";

    std::ofstream writer("quote.txt");

    if(!writer) {
        std::cout << "Error opening file" << std::endl;
    } else {
        writer << quote << std::endl;
        writer.close();
    }


    std::ofstream writer2("quote.txt", std::ios::app);
    // Open a stream to append whats there with std::ios::app
    // std::ios::binary -> Treat the file as binary
    // std::ios::in -> Open a file to read input
    // std::ios::trunc -> Default
    // std::ios::out -> Open a file to write output
    if(!writer2) {
        std::cout << "Error opening file" << std::endl;
    } else {
        writer2 << "-Steve Martin" << std::endl;
        writer2.close();
    }

    char letter;
    std::ifstream reader("quote.txt");

    if (!reader) {
        std::cout << "Error opening file" << std::endl;
    } else {
        for (int i = 0; !reader.eof(); i++) {
            reader.get(letter);
            std::cout << letter;
        }

        std::cout << std::endl;
        reader.close();
    }
}