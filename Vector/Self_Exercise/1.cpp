// Q.1 Write a program to create a vector of integers and initialize it with values. Print the vector's contents.
#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v = {0, 2, 4, 6, 8};

    for ( int elem : v)
    {
        cout << elem << " ";
    }
    
    return 0;
}