// Q.4 Write a program to demonstrate how to remove the last element of a vector using pop_back() and display the updated vector.
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v = {1, 3, 5, 7, 9};
    for (int elem : v)
    {
        cout << elem << " ";
    }

    v.push_back(25);
    v.push_back(35);

    cout << endl
         << "After pushback():  " << endl;
    for (int elem : v)
    {
        cout << elem << " ";
    }

    v.pop_back();

    cout << endl
         << "After popback():  " << endl;
    for (int elem : v)
    {
        cout << elem << " ";
    }
    return 0;
}