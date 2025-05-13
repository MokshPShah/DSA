// Q.6 Write a program that resizes a vector to a larger and smaller size using the resize() function and displays the updated contents.
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4, 5};

    cout << "Original Vector: " << endl;
    for (int elem : v)
    {
        cout << elem << " ";
    }

    v.resize(8);
    cout << endl
         << "Large Vector: " << endl;
    for (int elem : v)
    {
        cout << elem << " ";
    }

    v.resize(3);
    cout << endl
         << "Small Vector: " << endl;
    for (int elem : v)
    {
        cout << elem << " ";
    }

    return 0;
}