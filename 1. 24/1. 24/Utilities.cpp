#include <cmath>
#include <iostream>
#include "Header.h"

bool isSeries(int a, int b, int base) {
    return (a - b - 1) % base == 0;
}

int getDigit(int number, int digit) {
    int temp = std::pow(10, digit - 1);
    return (number / temp) % 10;
}

bool isStrictlyIncreasing(int number) {
    int digitsOfNumber = std::log10(number) + 1;
    for (int i = 1; i < digitsOfNumber; i++) {
        int a = getDigit(number, i);
        int b = getDigit(number, i + 1);
        if (!isSeries(a, b, Constants::BASE)) {
            return false;
        }
    }
    return true;
}

void generateArrayOfStrictlyIncrease(std::vector<int>& arr, int maxNumber) {
    for (int i = 1; i <= maxNumber; i++) {
        if (isStrictlyIncreasing(i)) {
            arr.push_back(i);
        }
    }
}

void outputArr(std::vector<int>& arr) {
    for (size_t i = 0; i < arr.size(); i++) {
        std::cout << arr[i];
        if (i != arr.size() - 1) std::cout << ", ";
        if ((i + 1) % 10 == 0) std::cout << '\n';
    }
}

void validateInput(int number) {
    if (number <= 0) throw std::string("Number must be positive");
    if (number > Constants::MAX_ALLOWED_NUMBER) throw std::string("Number is too large (max 256 allowed)");
}