#include "2. 18.h"
#include <iostream>
#include <fstream>
#include <sstream>


std::ifstream INPUT("Input.txt");

bool isSymbol(char commentSymbol, std::string line)
{
    if (line[0] == commentSymbol)
    {
        return 1;
    }

    return 0;
}

void getSizes(int &n, int &m, std::string line)
{
    if (isSymbol('!', line)) {
        try {
            
        }
    }
}

void output() {
    std::string line;

    while (std::getline(INPUT, line)) {
        if (isSymbol('#', line) )
        {
            continue;
        }
        std::cout << line << std::endl;
    }
}
