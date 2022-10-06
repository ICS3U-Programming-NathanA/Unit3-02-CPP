// Copyright (c) 2022 Nathan Araujo All rights reserved.
//
// Created by: Nathan Araujo
// Created on: Oct 5 2022
// This program asks the user for a number between 0 and 9
// and then sees if they got the same number as the computer

#include <iostream>
#include <iomanip>

// declare the constant for the secret number
const int SECRET_NUMBER = 8;

// declare userNum as a variable
float userNum;

int main() {
// get the number the user guessed
    std::cout << "Enter the a number between 0 and 9: ";
    std::cin >> userNum;

    // If statement to see if the user guessed the correct number
    if (SECRET_NUMBER == userNum) {
        // If true then display "You guessed correctly"
        std::cout << "You guessed correctly \n";

        // Otherwise display " You guessed incorrectly"
        } else {
            std::cout << "You guessed incorrectly \n";
        }
}
