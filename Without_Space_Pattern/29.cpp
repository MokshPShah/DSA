// A A A A A
// B B B B
// C C C
// D D
// E

#include <iostream>
using namespace std;

int main()
{
    for (char i = 'A'; i <= 'E'; i++)
    {
        for (char j = i; j <= 'E'; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}