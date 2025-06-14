#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end)
{
    vector<int> temp;
    int left = start;
    int right = mid + 1;

    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= end)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = 0; i < temp.size(); i++)
    {
        arr[i + start] = temp[i];
    }
}

void mergerSort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        mergerSort(arr, start, mid);   // Left half
        mergerSort(arr, mid + 1, end); // Right half

        merge(arr, start, mid, end);
    }
}

int main()
{
    vector<int> arr = {12, 31, 35, 8, 32, 17};

    mergerSort(arr, 0, arr.size() - 1);
    for (auto val : arr)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}