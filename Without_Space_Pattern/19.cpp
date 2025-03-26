// A B C D E
// A B C D
// A B C
// A B
// A

#include <iostream>
using namespace std;

int main()
{
    for (char i = 'E'; i >= 'A' ; i--)
    {
        for (char j = 'A'; j <= i ; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}