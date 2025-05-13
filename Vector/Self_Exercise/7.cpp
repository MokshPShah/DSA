// Q.7 Write a program to insert an element at a specific position in a vector using the insert() function and display the updated vector.
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v = {41, 12, 23, 35, 54};

    cout << "Original Vector: " << endl;
    for (int elem : v)
    {
        cout << elem << " ";
    }
    cout << endl;

    v.insert(v.begin() + 2, 14);

    cout << "After insert operation: " << endl;
    for (int elem : v)
    {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}