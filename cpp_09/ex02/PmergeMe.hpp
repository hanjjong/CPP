#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <ctime>

class PmergeMe
{
private:
    std::vector<int> vec;
    std::deque<int> deq;
    std::vector<int> jacobsthal;
    std::vector<int> remainNumbers;
    int size;

public:
    PmergeMe(/* args */);
    ~PmergeMe();
    void makeJacobsthal();


    void initNumber(char* av[]);
    void printNumbers(std::string string);
    void mergeInserttionReculsive(int size);
    void insertElement(int size);
    void binarySearchInsert(std::vector<std::vector<int> >& a, std::vector<int> tmp, int low, int high, int size);    void separateElements(std::vector<std::vector<int> >& a, std::vector<std::vector<int> >& b, int size);
    void swapMainChainNum(int size);
    void swapVecElements(int indexA, int size);
    void checkSort();
};

#endif