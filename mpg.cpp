#include <iostream>
using namespace std;

int main()
{
    double gallons = 16.0;
    double miles = 312.0;
    double miles_per_gallon;

    miles_per_gallon = miles / gallons;

    std::cout << "Miles per gallon: " << miles_per_gallon
              << " miles per gallon" << std::endl;

    return 0;
}