#include <iostream>
#include <ctime>
#include "Fraction.h"
#define Size 10

int main()
{
    short numElements = 10;
    Fraction f[Size], minFraction, maxFraction, totalSum, production;
    do {std :: cout << "Enter a size of the array -> ";std :: cin >> numElements;} while(numElements > 10 || numElements <= 0);
    for(int index = 0; index < numElements; index++)
    {
        std :: cin >> &f[index];
    }
    time_t START = clock();
    minFraction = Minimum(f,numElements);
    std :: cout << "Minimum -> " << &minFraction << std :: endl;
    maxFraction = Maximum(f,numElements);
    std :: cout << "Maximum -> " << &maxFraction << std :: endl;
    totalSum = Amount(f,numElements);
    std :: cout << "Amount -> " << &totalSum << std :: endl;
    production = Production(f,numElements);
    std :: cout << "Production -> " << &production << std :: endl;
    std :: cout << "Sorted -> "; f[Size].Write(f,numElements);
    std :: cout << std :: endl << "Execution time -> " << (clock() - START) / (double)CLOCKS_PER_SEC << std :: endl;
    return 0;
}
