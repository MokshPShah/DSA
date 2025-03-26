// A
// B B
// C C C
// D D D D
// E E E E E

#include <iostream>
using namespace std;

int main()
{
    for (char i = 'A'; i <= 'E' ; i++)
    {
        for (char j = 'A'; j <= i ; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}