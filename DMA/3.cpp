#include <iostream>
using namespace std;

int main()
{

    int *a = new int(6);
    delete (a); // a is now a dangling pointer

    a = new int[3]; // array creation

    a[0] = 5;
    a[1] = 4;
    a[2] = 3;

    cout << "Address: " << a << endl
         << " Value *a: " << a[2] << endl
         << " Size: " << sizeof(*a) << endl;

    delete[] a; // a is now a dangling pointer
    cout << "Address: " << a << endl
         << " Value *a: " << a[2] << endl
         << " Size: " << sizeof(*a) << endl;

    a = NULL; // a become a null pointer
    cout << "Address: " << a << endl
         << " Value *a: " << a[2] << endl
         << " Size: " << sizeof(*a) << endl;

    return 0;
}