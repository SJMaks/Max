#include <iostream>

using namespace std;

double my_pow(double num, unsigned int power)
{
    double result = num;
    for (int i = 1; i < power; ++i)
        result = result * num;

    return result;
}

int main()
{
    double num;
    unsigned int power;
    cout << "Insert a number: ";
    cin >> num;
    cout << endl << "Insert a power: ";
    cin >> power;

    cout << endl << "Result = " << my_pow(num, power);

    return 0;
}