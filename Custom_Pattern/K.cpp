#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        string value = ((i == 1 || i == 5) ? "*    *" : (i == 2 || i == 4) ? "*  *" : "* *");
        cout << value << endl;
    }
    return 0;
}
