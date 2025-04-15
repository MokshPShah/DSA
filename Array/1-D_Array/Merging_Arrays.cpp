#include <iostream>
using namespace std;

int main()
{
    int size1, size2;

    cout << "Enter the size of array_1: ";
    cin >> size1;
    cout << "Enter the size of array_2: ";
    cin >> size2;

    int arr1[size1], arr2[size2], c[size1 + size2];

    for (int i = 0; i < size1; i++)
    {
        cout << "Enter array1[" << i << "]: ";
        cin >> arr1[i];
    }
    cout << "Enter the elements of array 2" << endl;
    for (int i = 0; i < size2; i++)
    {
        cout << "Enter array2[" << i << "]: ";
        cin >> arr2[i];
    }

    for (int i = 0; i < size1; i++)
        c[i] = arr1[i];
    for (int i = 0; i < size2; i++)
        c[size1 + i] = arr2[i];

    cout << "Merged Array: ";
    for (int i = 0; i < size1 + size2; i++)
        cout << c[i] << " ";
}