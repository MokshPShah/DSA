// 1. Meena face an isuue to perform a mathematical operation to find a cube of any number. Write a C++ Program which helps Meena to solve her issue.

#include <iostream>
using namespace std;

int main()
{
    int num, result;

    cout << "Enter the number: ";
    cin >> num;

    if (num > 0)
    {
        result = num * num * num;
        cout << "Cube of the given number " << num << " is: " << result;
    }
    else
    {
        cout << "Enter the valid number";
    }

    return 0;
}