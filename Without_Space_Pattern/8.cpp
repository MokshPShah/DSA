#include <iostream>
using namespace std;

// 1
// 1 1
// 1 1 1
// 1 1 1 1
// 1 1 1 1 1

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << 1 << " ";
        }
        cout << endl;
    }
}