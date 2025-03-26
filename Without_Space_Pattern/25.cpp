// A A A A A
// A A A A
// A A A
// A A
// A

#include <iostream>
using namespace std;

int main()
{
    for (char i = 'E'; i >= 'A' ; i--)
    {
        for (char j = 'A'; j <= i ; j++)
        {
            cout << 'A' << " ";
        }
        cout << endl;
    }
}