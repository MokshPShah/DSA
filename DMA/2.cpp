#include <iostream>
using namespace std;

int main()
{

    int *a = new int(6);
    cout << "Address: " << a << " Value *a: " << *a << " Size: " << sizeof(*a) << endl;
    delete (a); // a is now a dangling pointer
    cout << "Address: " << a << " Value *a: " << *a << " Size: " << sizeof(*a) << endl;

    return 0;
}