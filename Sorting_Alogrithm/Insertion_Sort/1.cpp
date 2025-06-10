#include <iostream>
using namespace std;

class InsertionSort
{
    int *arr;
    int size;

public:
    InsertionSort(int size)
    {
        this->size = size;
        this->arr = new int[this->size];
    }
    ~InsertionSort()
    {
        delete[] arr;
    }

    void insert_array();
    void display_array();
    void ascend_array();
    void descend_array();
};

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0)
    {
        cout << "Array size should be greater than zero!" << endl;
        return 1;
    }

    InsertionSort sort(size);

    cout << "Enter the elements in the array: " << endl;
    sort.insert_array();

    cout << "Original array: " << endl;
    sort.display_array();
    cout << endl;

    sort.ascend_array();
    cout << "Sorted(Ascending order) array: " << endl;
    sort.display_array();
    cout << endl;

    sort.descend_array();
    cout << "Sorted(Descending order) array: " << endl;
    sort.display_array();
    cout << endl;

    return 0;
}

void InsertionSort::insert_array()
{
    for (int i = 0; i < this->size; i++)
    {
        cout << "Enter arr[" << i << "]: ";
        cin >> arr[i];
    }
}
void InsertionSort::display_array()
{
    for (int i = 0; i < this->size; i++)
    {
        cout << arr[i] << " ";
    }
}
void InsertionSort::ascend_array()
{
    for (int i = 0; i < this->size; i++)
    {
        int key = arr[i];

        int j = i - 1;
        while (j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void InsertionSort::descend_array()
{
    for (int i = 1; i < this->size; i++)
    {
        int key = arr[i];

        int j = i - 1;
        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}