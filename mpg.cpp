#include <iostream>
using namespace std;

int main()
{
    double gallons = 16.0;
    double miles = 312.0;
    double mpg;

    mpg = miles / gallons;

    std::cout << "Miles per gallon: " << mpg
              << " miles per gallon" << std::endl;

    return 0;
}
