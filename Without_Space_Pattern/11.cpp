#include <iostream>
using namespace std;

// 5 5 5 5 5
// 5 5 5 5
// 5 5 5
// 5 5
// 5

int main()
{
    for (int i = 5; i >= 1; i--)
    //              5 >= 1
    {
        for (int j = i; j >= 1; j--)
                    //  5 >= 5
        {
            cout << 5 << " ";
        }
        cout << endl;
    }
}