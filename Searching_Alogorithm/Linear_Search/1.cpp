// Using POP

#include <iostream>
using namespace std;

void input_arr(int[], int n);
void display_arr(int[], int n);
int linear_search(int[], int n);

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    input_arr(arr, size);
    display_arr(arr, size);
    cout << endl;
    int founded_idx = linear_search(arr, size);

    if (founded_idx != -1)
    {
        cout << "Value founded at index " << founded_idx << " position";
    }
    else
    {
        cout << "Element not found!";
    }

    return 0;
}

void input_arr(int arr[], int size)
{
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter arr[" << i << "]: ";
        cin >> arr[i];
    }
}
void display_arr(int arr[], int size)
{
    cout << "Your array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int linear_search(int arr[], int size)
{
    int target_elem;

    cout << "Enter the target elem: ";
    cin >> target_elem;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target_elem)
        {
            return i;
        }
    }
    return -1;
}