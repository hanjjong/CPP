#include "PmergeMe.hpp"

//./PmergeMe `jot -r 10 1 20 | tr '\n' ' '` > a.txt
static void checkArgument(int ac) {
    if (ac < 2)
        throw std::invalid_argument("Error: invalid input");
}


int main(int ac, char* av[]) {
    try {
        // clock_t start_time = clock();
        checkArgument(ac);
        PmergeMe vectorPm;
        vectorPm.initNumber(av);
        vectorPm.makeJacobsthal();
        vectorPm.printNumbers("Before: ");
        vectorPm.mergeInserttionReculsive(1);
        vectorPm.printNumbers("After: ");
        vectorPm.checkSort();
    } catch (const std::exception& e) {
        std::cerr << e.what();
        return 1;
    }
    return 0;
}