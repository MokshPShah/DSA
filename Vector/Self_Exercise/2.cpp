// Q.2 Write a program that uses the push_back() function to insert elements at the end of a vector and display the elements.
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
    cout << endl
         << "After pushback():  " << endl;
    for (int elem : v)
    {
        cout << elem << " ";
    }
    return 0;
}