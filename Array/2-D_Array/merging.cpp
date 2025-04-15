#include <iostream>
using namespace std;

int main()
{
    int row_size, col_size;
    cout << "Enter row size: ";
    cin >> row_size;
    cout << "Enter column size: ";
    cin >> col_size;

    int a[row_size][col_size], b[row_size][col_size];

    cout << "Enter the elements of the array A: " << endl;;
    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < col_size; j++)
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    cout << "Enter the elements of the array B: " << endl;;
    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < col_size; j++)
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> b[i][j];
        }
    }

    cout << "The merged array is: " << endl;
    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < col_size; j++)
        {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }
}