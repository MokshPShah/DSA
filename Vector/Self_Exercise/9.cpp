// Q.9 Write a program to reverse the contents of a vector using the reverse() function from the <algorithm> library and display the reversed vector.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4, 5, 6};

    cout << "Original Vector: " << endl;
    for (int elem : v)
    {
        cout << elem << " ";
    }
    cout << endl;

    reverse(v.begin(), v.end());

    cout << "Reversed vector: " << endl;
    for (int elem : v)
    {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}