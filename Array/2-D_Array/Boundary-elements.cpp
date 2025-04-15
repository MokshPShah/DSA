#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter row size: ";
    cin >> n;
    cout << "Enter column size: ";
    cin >> m;

    int arr[n][m];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Enter arr[" << i <<"][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << "The boundary elements of the array are: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i==0 || i==n-1 || j==0 || j==m-1)
            {
                cout << arr[i][j] << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
        
    }
    

    return 0;
}