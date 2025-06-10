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

int main()
{
    int size;
    cout << "Enter the size: ";
    cin >> size;
    
    if (size <= 0)
    {
        cout << "Array size should be greater than zero!" << endl;
        return 1;
    }

    InsertionSort sort(size);

    cout << "Enter the elements below: " << endl;
    sort.input_arr();

    cout << "Original Vector: ";
    sort.display_arr();
    cout << endl;

    sort.ascend_arr();
    cout << "Sorted(Ascending Order) Vector: ";
    sort.display_arr();
    cout << endl;

    sort.descend_arr();
    cout << "Sorted(Descending Order) Vector: ";
    sort.display_arr();
    cout << endl;

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