#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 1 || i == 5)
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