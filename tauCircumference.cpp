// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on February 2022
// Calculates perimeter and area of a rectangle
//     with dimensions inputted from user

#include <iostream>
#include <string>
#include <cmath>

int main() {
    // this function calculates the number with an exponent of 2
    std::string strRepeatNumber;
    int intRepeatNumber;
    int counter1 = 0;
    int product = 1;

    // input
    std::cout << "Enter how many times to repeat: ";
    std::cin >> strRepeatNumber;
    std::cout << "" << std::endl;

    // process & output
    try {
        intRepeatNumber = std::stoi(strRepeatNumber);
        if (intRepeatNumber < 0) {
            throw std::invalid_argument("error");
        } else {
            for (int counter1 = 0; counter1 <= intRepeatNumber;
            counter1++) {
            product = pow(counter1, 2);
            std::cout << counter1 << "² = " << product << std::endl;
        }
    }
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
