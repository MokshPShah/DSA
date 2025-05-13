// Q.8 Write a program to remove an element at a specific index using the erase() function and display the updated vector.
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<double> v = {5.0, 6.0, 7.0, 8.0, 9.0};
    
    cout << "Original Vector: " << endl;
    for (double elem : v)
    {
        cout << elem << " ";
    }
    cout << endl;

    // v.insert(v.begin() + 2, 14);
    v.erase(v.begin() +  2);

    cout << "After erase operation: " << endl;
    for (double elem : v)
    {
        cout << elem << " ";
    }
    cout << endl;
    return 0;
}