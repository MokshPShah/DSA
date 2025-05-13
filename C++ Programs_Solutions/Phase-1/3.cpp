// 3. A student in a fifth class encounters a very easy math problem to find quotient and remainder. Write a C++ Program which provides a solution for this particular problem.

#include <iostream>
using namespace std;

int main()
{
    int dividend, divisor, qoutient, reaminder;

    cout << "Enter the dividend number: ";
    cin >> dividend;
    cout << "Enter the divisor number: ";
    cin >> divisor;

    qoutient = dividend / divisor;
    reaminder = dividend % divisor;

    cout << "Quotient = " << qoutient << endl << "Remainder = " << reaminder;
    

    return 0;
}