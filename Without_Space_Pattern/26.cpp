// E E E E E
// E E E E
// E E E
// E E
// E

#include <iostream>
using namespace std;

int main()
{
    for (char i = 'E'; i >= 'A'; i--)
    {
        for (char j = 'A'; j <= i; j++)
        {
            cout << 'E' << " ";
        }
        cout << endl;
    }
}