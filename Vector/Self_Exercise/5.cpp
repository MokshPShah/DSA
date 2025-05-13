// Q.5 Write a program that checks if a vector is empty using the empty() function and prints a message accordingly.
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v1;
    vector<int> v2 = {1, 2, 5, 8, 14};

    if (v1.empty() == true)
    {
        cout << "This vector(v1) is empty! Please fill the value" << endl;
    }else{
        cout << "The vector(v1) is not empty" << endl;
    }
    if (v2.empty() == true)
    {
        cout << "This vector(v2) is empty! Please fill the value" << endl;
    }else{
        cout << "The vector(v2) is not empty" << endl;
    }
    

    return 0;
}