// E D C B A
// E D C B
// E D C
// E D
// E

#include <iostream>
using namespace std;

int main()
{
    for (char i = 'A'; i <= 'E' ; i++)
    {
        for (char j = 'E'; j >= i ; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}