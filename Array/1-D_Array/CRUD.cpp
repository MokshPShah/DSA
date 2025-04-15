#include <iostream>
using namespace std;

int main()
{
    int choice, size, position, value;

    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter array[" << i << "]: ";
        cin >> arr[i];
    }

    do
    {
        cout << "Press 1 for Insert element in array" << endl
             << "Press 2 for Update element in array" << endl
             << "Press 3 for Delete element in array" << endl
             << "Press 4 for Fetch all the element in array" << endl
             << "Press 0 for Exit" << endl
             << endl
             << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the position of an element: ";
            cin >> position;
            cout << "Enter the value of an element: ";
            cin >> value;
            for (int i = size - 1; i >= position; i--)
            {
                arr[i + 1] = arr[i];
            }
            size++;
            arr[position] = value;
            cout << "Insertion of an new value successfully..." << endl;
            break;
        case 2:
            cout << "Enter the position of an element: ";
            cin >> position;
            cout << "Enter the value of an element: ";
            cin >> value;

            arr[position] = value;

            cout << "Updatation of an element's value successfully..." << endl;
            break;
        case 3:
            cout << "Enter the position of an element: ";
            cin >> position;
            for (int i = position + 1; i < size; i++)
            {
                arr[i - 1] = arr[i];
            }

            size--;
            cout << "Deletion of an element is successfully..." << endl;
            break;
        case 4:
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        case 0:
            break;
        default:
            break;
        }
    } while (choice != 0);

    return 0;
}