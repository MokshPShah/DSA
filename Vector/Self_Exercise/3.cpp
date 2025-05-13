// Write a program to access and print elements of a vector using both the at() function and the [] operator
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {0, 1, 2, 3, 4};

    cout << "Elements fetching using .at(): " << endl;
    for (int i = 0; i<v.size(); i++)
    {
        cout << "Element at index " << i << " is " << v.at(i) << endl;
    }
    cout << "Elements fetching using [] operator: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << "Element at index " << i << " is " << v[i] << endl;
    }
    
}