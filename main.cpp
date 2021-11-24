#include <iostream>
#include <chrono>
#include "Sequence.hpp"
#include "ArraySequence.hpp"
#include "ListSequence.hpp"
#include "Sort.hpp"
using namespace std;
using namespace std::chrono;

int main()
{
    Sequence<int> *sq = new ListSequence<int>();
    ListSorter<int> *sort = new ListSorter<int>();
    sort->exportToFile();

    // ListSequence<int> *myList = new ListSequence<int>();
    // myList->push_back(100);
    // myList->push_back(71);
    // myList->push_back(26);
    // myList->push_back(82);
    // myList->push_back(33);
    // myList->push_back(17);
    // myList->print();
    // ListSorter<int> *listSort = new ListSorter<int>();
    // listSort->shellSort(myList, ascending);
    // myList->print();
}