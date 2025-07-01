#include <iostream>
#include <vector>
#include <cmath>
#include "Header.h"

int main() {
    try {
        std::vector<int> container;
        int digits;
        std::cout << "Enter max digit of number (1-" << Constants::MAX_ALLOWED_NUMBER << "): ";
        std::cin >> digits;

        validateInput(digits);

        int number = pow(10, digits);
        generateArrayOfStrictlyIncrease(container, number);
        outputArr(container);
    }
    catch (const std::string& errorMsg) { 
        std::cerr << "Error: " << errorMsg << std::endl;
        return 1;
    }
    catch (...) { 
        std::cerr << "Unknown error occurred!" << std::endl;
        return 2;
    }

    return 0;
}