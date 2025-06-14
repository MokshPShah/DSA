#include <iostream>
using namespace std;

class BubbleSort
{
    int *arr;
    int size;

public:
    BubbleSort(int n)
    {
        this->size = n;
        this->arr = new int[n];
    }
    ~BubbleSort()
    {
        delete[] arr;
    }

    void input_arr();
    void display_arr();
    void ascend_order();
    void descend_order();
};

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    BubbleSort bs(n);

    bs.input_arr();

    cout << "Original Array: " << endl;
    bs.display_arr();

    bs.ascend_order();

    cout << "Sorted(Ascending)  Array: " << endl;
    bs.display_arr();

    bs.descend_order();

    cout << "Sorted(descending)  Array: " << endl;
    bs.display_arr();

    return 0;
}

void BubbleSort::input_arr()
{
    cout << "Enter the element: " << endl;
    for (int i = 0; i < this->size; i++)
    {
        cout << "Enter arr[" << i << "]: ";
        cin >> this->arr[i];
    }
    cout << endl;
}
void BubbleSort::display_arr()
{
    for (int i = 0; i < this->size; i++)
    {
        cout << this->arr[i] << " ";
    }
    cout << endl;
}
void BubbleSort::ascend_order()
{
    int pass = 1;
    while (pass < this->size)
    {
        for (int i = 0; i < this->size - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        pass++;
    }
}
void BubbleSort::descend_order()
{
    int pass = 1;
    while (pass < this->size)
    {
        for (int i = 0; i < this->size - 1; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        pass++;
    }
}