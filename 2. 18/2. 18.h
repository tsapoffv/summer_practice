#pragma once
#include <iostream>
#include <fstream>
#include <sstream>

bool isSymbol(char commentSymbol, std::string string);
void parseFile(int** arr, std::string string);
void parseString(int* arr, std::string string);
void output();