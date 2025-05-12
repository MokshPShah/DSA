#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> num1;                        // int a;
    vector<int> num2(5);                     // int a[5];
    vector<int> num3(5, 12);                 // int a[5] = {12, 12, 12, 12, 12};
    vector<int> num4{45, 23, 25, 47, 55};    // int a[5] = {45, 23, 25, 47, 55}
    vector<int> num5 = {45, 23, 25, 47, 55}; // int a[5] = {45, 23, 25, 47, 55}

    num5.push_back(99);
    num5.push_back(43);
    num5.push_back(11);
    num5.pop_back();

    // using for in loop
    // cout << "{";
    // for (int elem : num5)
    //     cout << elem << ", ";

    // cout << "}";

    cout << num5.at(5) << endl;
    if (num1.empty())
        cout << "Empty List\n";
    else
        cout << "Not Empty\n";

    cout << num5.front() << endl;
    cout << num5.back() << endl;

    num5.clear();

    for (int elem : num5)
    {
        cout << elem;
    }
    return 0;
}