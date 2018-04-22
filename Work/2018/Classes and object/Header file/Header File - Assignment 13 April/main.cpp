#include <iostream>
#include <cmath>
#include "fraction.h"
using namespace std;

int main()
{
    fraction f1,f2,f3;
    std :: cout << "Input first fraction:\n"; std :: cin >> f1;
    std :: cout << "f1 = " << f1 << std :: endl;
    std :: cout << "Input second fraction:\n"; std :: cin >> f2;
    std :: cout << "f2 = " << f2  << std :: endl;
    f3 = minimum(f1,f2);
    std :: cout << "Minimum = " << f3 << std :: endl;
    swap(f1,f2);
    std :: cout << "After swap:\n";
    std :: cout << "f1 = " << f1 << "f2 = " << f2 << std :: endl;
    return 0;
}
