#include <iostream>

using namespace std;

double f_pow(double a, unsigned int power)

{
    if (power == 0)

    {
        return 1;

    }
    if (power % 2 == 0)
    {
        return f_pow(a * a, power / 2);
    }
    return a * f_pow(a, power - 1);

}

int main()
{
    double num;
    unsigned int power;
    cout << "Insert a number: ";
    cin >> num;
    cout << endl << "Insert a power: ";
    cin >> power;

    cout << endl << "Result = " << f_pow(num, power);

    return 0;
}