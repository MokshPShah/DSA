#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    //              1 <= 5
    {
        for (int j = 1; j <= i; j++)
        //              1 <= 1
        {
            cout << j;
        }
        cout << endl;
    }
}