#include <iostream>
using namespace std;

int main()
{
    int x = 7;

    // 1st method
    // int *a = new int;
    // *a = 6;

    // 2nd method
    // int *a = new int();
    // *a = 6;

    // 3rd method
    int *a = new int(6);

    cout << "Value of x(static): " << x << endl;
    cout << "Value of *a(heaap): " << *a << endl;
    cout << "Address of x(static): " << &x << endl;
    cout << "Address of *a(heaap): " << a << endl;

    return 0;
}