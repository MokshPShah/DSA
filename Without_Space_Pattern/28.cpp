// E
// D D
// C C C
// B B B B
// A A A A A

#include <iostream>
using namespace std;

int main()
{
    for (char i = 'E'; i >= 'A'; i--)
    {
        for (char j = i; j <= 'E' ; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}