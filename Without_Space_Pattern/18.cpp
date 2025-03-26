// E
// E D
// E D C
// E D C B
// E D C B A

#include <iostream>
using namespace std;

int main()
{
    for (char i = 'E'; i >= 'A'; i--)
    {
        for (char j = 'E'; j >= i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}