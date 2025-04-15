#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i % 2 != 0)
        {
            cout << "* * * * *";
        }
        else
        {
            cout << "*\t*";
        }
        cout << endl;
    }
}