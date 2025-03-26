// E E E E E
// D D D D
// C C C
// B B
// A

#include <iostream>
using namespace std;

int main()
{
    for (char i = 'E'; i >= 'A'; i--)
    {
        for (char j = i; j >= 'A'; j--)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}