// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on May 2022
// The celcius to fahrenheit calculator

#include <iostream>
#include <random>
#include <array>


int smallest(std::array<int, 10> numberArray) {
    // this function finds the highest number in the num_array
    int smallestNumber = numberArray[0];

    for (int counter = 0; counter < numberArray.size(); counter++) {
        if (numberArray[counter] < smallestNumber) {
            smallestNumber = numberArray[counter];
        }
    }

    return smallestNumber;
}


int main() {
    // this function generates 10 random numbers, calls a function,
    // and outputs the highest one

    std::array<int, 10> numberArray;
    int randomNumber;
    int smallestNumber;

    // random seed
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne twister
    std::uniform_int_distribution<int> idist(0, 100);  // random from 0 - 100

    std::cout <<
    "This program generates 10 random numbers and finds the lowest one.\n"
    << std::endl;

    // process and output
    for (int counter = 0; counter < 10; counter++) {
        randomNumber = idist(rgen);
        numberArray[counter] = randomNumber;
        std::cout << "Random number: " << randomNumber << std::endl;
    }

    smallestNumber = smallest(numberArray);

    // output
    std::cout << "The smallest number is " << smallestNumber << "."
    << std::endl;

    std::cout << "\nDone." << std::endl;
}
