// Copyright 2021 MTHS
// Author: Matthew Meech
// This program calculates 2 numbers being added

#include <iostream>
    int main() {
    int number1;
    int number2;
    int answer;


    // input
    std::cout << "Enter number1: ";
    std::cin >> number1;
    std::cout << "Enter number2: ";
    std::cin >> number2;
    
    
    // process
    answer = number1 + number2;


    // output
    std::cout << "" << std::endl;
    std::cout << "answer is " << answer;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
