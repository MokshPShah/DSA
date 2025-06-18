#include <iostream>
using namespace std;

class BinarySearch
{
    int *arr;
    int size;

public:
    BinarySearch(int size)
    {
        this->size = size;
        this->arr = new int[this->size];
    }
    ~BinarySearch()
    {
        delete[] this->arr;
    }

    void input_arr();
    void display_arr();
    void sort();
    int binary_search(int, int, int);
};

int main()
{
    int n;
    cout << "Entr the size of the array: ";
    cin >> n;

    BinarySearch bs(n);

    bs.input_arr();
    bs.display_arr();
    bs.sort();
    bs.display_arr();

    int key;
    cout << "Enter the search key: ";
    cin >> key;

    int founded_idx = bs.binary_search(0, n - 1, key);

    if (founded_idx == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element founded at " << founded_idx << " position." << endl;
    }

    return 0;
}

void BinarySearch::input_arr()
{
    cout << "Enter elements of the array: " << endl;
    for (int i = 0; i < this->size; i++)
    {
        cout << "Enter arr[" << i << "]: ";
        cin >> arr[i];
    }
}
void BinarySearch::display_arr()
{
    cout << "Your array is: ";
    for (int i = 0; i < this->size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void BinarySearch::sort()
{
    int pass = 0;
    cout << "Sorting..." << endl;
    while (pass < this->size)
    {
        for (int i = 0; i < this->size - 1; i++)
        {
            if (this->arr[i] > this->arr[i + 1])
            {
                int temp = this->arr[i];
                this->arr[i] = this->arr[i + 1];
                this->arr[i + 1] = temp;
            }
        }
        pass++;
    }
}

int BinarySearch::binary_search(int low, int high, int key)
{
    if (low > high)
    {
        return -1;
    }

    int mid = (low + high) / 2;
    if (key == arr[mid])
    {
        return mid;
    }
    else if (key < arr[mid])
    {
        return binary_search(0, mid - 1, key);
    }
    else
    {
        return binary_search(mid + 1, high, key);
    }
}