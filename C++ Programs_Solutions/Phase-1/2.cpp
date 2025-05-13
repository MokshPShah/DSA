// Sameer is too weak to find multiplication of any three numbers. Write a C++ Program which helps Sameer to solve his issue.

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, result;

    cout << "Enter a 1st number: ";
    cin >> a;
    cout << "Enter a 2nd number: ";
    cin >> b;
    cout << "Enter a 3rd number: ";
    cin >> c;

    if (a > 0 && b > 0 && c > 0)
    {
        result = a * b * c;
        cout << "The result of the given 3 numbers: " << result;
    }
    else
    {
        cout << "Enter the valid number";
    }

    return 0;
}