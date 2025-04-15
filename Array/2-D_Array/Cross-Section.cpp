#include <iostream>
using namespace std;

int main()
{
    int n, m, sum = 0;

    cout << "Enter row size: ";
    cin >> n;
    cout << "Enter column size: ";
    cin >> m;

    if (n != m)
    {
        cout << "Enter valid matrix.";
    }
    else
    {
        int arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << "Enter arr[" << i << "][" << j << "]: ";
                cin >> arr[i][j];
            }
        }

        cout << "Cross Section elements are: " << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == j || i + j == m - 1)
                {
                    cout << arr[i][j] << " ";
                    sum += arr[i][j];
                }
                else {
                    cout << "  ";
                }
            }
            cout << endl;
        }
        cout << "Sum is: " << sum;
    }
}