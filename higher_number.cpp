// Copyright (c) St. Mother Teresa All rights reserved.
//
// Created by: Dahrio Francois
// Created on: December 2020
// this program takes two numbers
//     and shows the higher number

#include <iostream>

int main() {
    // this function compares the two numbers
    int number1;
    int number2;

    // input
    std::cout << "Enter your first number: ";
    std::cin >> number1;
    std::cout << "Enter your second number: ";
    std::cin >> number2;

    // process
    if (number1 > number2) {
        std::cout << number1 << std::endl;
        std::cout << " This number is greater ";

    } else if (number1 < number2) {
        std::cout << number2 << std::endl;
        std::cout << "This number is greater ";

    } else { (number1 == number2);
        std::cout << " These numbers are the same ";
}
}
