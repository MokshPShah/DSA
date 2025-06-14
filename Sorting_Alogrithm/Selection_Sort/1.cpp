#include <iostream>
#include <vector>
using namespace std;

class Selection_Sort
{
    vector<int> arr;

public:
    Selection_Sort(int size)
    {
        arr.resize(size);
    }

    void input_arr();
    void display_arr();
    void sort_arr();
};

int main()
{
    int size;
    cout << "Enter the size of the vector: ";
    cin >> size;

    Selection_Sort sort(size);

    sort.input_arr();

    cout << "Original Vector: ";
    sort.display_arr();

    sort.sort_arr();

    cout << "Sorted Vector: ";
    sort.display_arr();

    return 0;
}

void Selection_Sort::input_arr()
{
    cout << "Enter the elements of the vector: " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "Enter arr[" << i << "]: ";
        cin >> arr[i];
    }
    cout << endl;
}
void Selection_Sort::display_arr()
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void Selection_Sort::sort_arr()
{
    for (int i = 0; i < arr.size(); i++)
    {
        int min = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}