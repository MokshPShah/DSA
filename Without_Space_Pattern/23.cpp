// A
// A A
// A A A
// A A A A
// A A A A A

#include <iostream>
using namespace std;

int main()
{
    for (char i = 'A'; i <= 'E'; i++)
    {
        for (char j = 'A'; j <= i; j++)
        {
            cout << 'A' << " ";
        }
        cout << endl;
    }
}