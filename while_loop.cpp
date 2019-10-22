// Copyright (c) 2019 Christina Ngwa All rights reserved.
//
// Created by: Christina Ngwa
// Created on: October 2019
// This program uses a while loop

#include <iostream>

main() {
    // this function uses a while loop
    std::string someNumAsString;
    int someNum = 0;
    int loopCounter = 1;
    int someSum = 0;
    std::cout << "Find the sum of a number.\n";

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> someNumAsString;
    std::cout << "" << std::endl;

    // process & output
    try {
        someNum = std::stoi(someNumAsString);
        while (loopCounter <= someNum) {
            std::cout << loopCounter << std::endl;
            someSum = loopCounter + someSum;
            loopCounter++;
        }
        std::cout << "The sum of your number is " << someSum << "." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Wrong input. Try again." << std::endl;
    }
}
