#pragma once
#include <vector>

namespace Constants {
    const int BASE = 3;
    const int MAX_ALLOWED_NUMBER = 256;
}

bool isSeries(int a, int b, int base);
int getDigit(int number, int digit);
bool isStrictlyIncreasing(int number);
void generateArrayOfStrictlyIncrease(std::vector<int>& arr, int maxNumber);
void outputArr(std::vector<int>& arr);
void validateInput(int number);