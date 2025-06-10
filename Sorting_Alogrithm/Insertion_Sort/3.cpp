#include <iostream>
#include <vector>
using namespace std;

class InsertionSort
{
    vector<int> arr;

public:
    InsertionSort(int size)
    {
        arr.resize(size);
    }

    void input_arr();
    void display_arr();
    void ascend_arr();
    void descend_arr();
};

void mainMenu();

int main()
{
    int size, choice;
    cout << "Enter the size: ";
    cin >> size;

    if (size <= 0)
    {
        cout << "Array size should be greater than zero!" << endl;
        return 1;
    }

    InsertionSort sort(size);

    while (choice != 0)
    {
        mainMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the elements below: " << endl;
            sort.input_arr();
            break;
        case 2:
            cout << "Original Vector: ";
            sort.display_arr();
            cout << endl;
            break;
        case 3:
            sort.ascend_arr();
            cout << "Vector sorted in Ascending Order";
            cout << endl;
            break;
        case 4:
            sort.descend_arr();
            cout << "Vector sorted in Descending Order";
            cout << endl;
            break;
        case 0:
            cout << "Exiting";
            break;

        default:
            cout << "Invalid choice";
            break;
        }
    }

    return 0;
}

void InsertionSort::input_arr()
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "Enter arr[" << i << "]: ";
        cin >> arr[i];
    }
}
void InsertionSort::display_arr()
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
void InsertionSort::ascend_arr()
{
    for (int i = 0; i < arr.size(); i++)
    {
        int key = arr[i];
        int j;
        for (j = i - 1; j >= 0 && arr[j] > key; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    }
}
void InsertionSort::descend_arr()
{
    for (int i = 0; i < arr.size(); i++)
    {
        int key = arr[i];
        int j;
        for (j = i - 1; j >= 0 && arr[j] < key; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    }
}

void mainMenu()
{
    cout << "1. for insert element in vector" << endl
         << "2. for display all element of the vector" << endl
         << "3. for sort vector in ascendng order" << endl
         << "4. sort vector in descending oreder" << endl
         << "0. Exit" << endl
         << "Enter your choice: ";
}