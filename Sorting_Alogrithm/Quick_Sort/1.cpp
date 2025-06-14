#include <iostream>
#include <vector>
#include <limits>
using namespace std;

class Quick_Sort
{
    vector<int> arr;

public:
    Quick_Sort(int size)
    {
        arr.resize(size);
    }
    void input_arr();
    void display_arr() const;
    int partition(int st, int end);
    void quickSort(int st, int end);
    void sort();
};

int main()
{
    int size;
    cout << "Enter the no. elements: ";
    cin >> size;
    Quick_Sort sort(size);

    sort.input_arr();

    cout << "Original Vector: ";
    sort.display_arr();

    sort.sort();

    cout << "Sorted Vector: ";
    sort.display_arr();

    return 0;
}

void Quick_Sort::input_arr()
{
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "Enter at[" << i << "]: ";
        cin >> this->arr[i];
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input.\nEnter an integer: ";
            cin >> arr[i];
        }
    }
}
void Quick_Sort::display_arr() const
{
    for (auto val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
}

int Quick_Sort::partition(int st, int end)
{
    int idx = st - 1, pivot = arr[end];

    for (int j = st; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            idx++;
            swap(arr[j], arr[idx]);
        }
    }

    idx++;
    swap(arr[end], arr[idx]);

    return idx;
}

void Quick_Sort::quickSort(int st, int end)
{
    if (st < end)
    {
        int pvtIdx = partition(st, end);
        quickSort(st, pvtIdx - 1);
        quickSort(pvtIdx + 1, end);
    }
}
void Quick_Sort::sort()
{
    quickSort(0, arr.size() - 1);
}