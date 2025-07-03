#include "Randomizer.h"

int numberGenerator(int max_size) 
{
	return (std::rand() % max_size) + 1;
}

void generateList(list& _list) {
    int size = numberGenerator(MAX_LENGTH);
    if (size == 0) return;

    int currentValue = numberGenerator(MAX_NUMBER / (size + 1));

    for (int i = 0; i < size; ++i) {
        _list.insertFront(currentValue);
        int remainingSpace = MAX_NUMBER - currentValue;
        if (remainingSpace <= 0) break;

        int step = 1 + numberGenerator(remainingSpace / (size - i));
        currentValue += step;
    }
}