// E D C B A
// D C B A
// C B A
// B A
// A

#include <iostream>
using namespace std;

int main()
{
    for (char i = 'E'; i >= 'A' ; i--)
    {
        for (char j = i; j >= 'A' ; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}