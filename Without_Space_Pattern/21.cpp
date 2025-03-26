// A B C D E
// B C D E
// C D E
// D E
// E

#include <iostream>
using namespace std;

int main()
{
    for (char i = 'A'; i <='E' ; i++)
    {
        for (char j = i; j <= 'E' ; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}