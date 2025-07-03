#include <iostream>
#include "List.h"
#include "Randomizer.h"


int main() {
    srand(time(0));
    list list1, list2, list3;
    generateList(list1);
    list1.print();
    generateList(list2);
    list2.print();

    list3.first = mergeTwoSortedLists(list1.first, list2.first);
    list3.print();

    return 0;
}