#include <iostream>
#include <vector>
using namespace std;

vector<int> findSmallerElements(vector<int> v)
{

    vector<int> ans;
    for (int i = 1; i < v.size(); i++)
    {
        if ((v[i - 1] > v[i]) && (v[i] < v[i + 1]))
        {
            ans.push_back(v.at(i));
        }
    }
    return ans;
}

int main()
{
    int size;
    cout << "Enter the vector size: ";
    cin >> size;
    vector<int> v(size);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter value at [" << i << "]: ";
        cin >> v.at(i);
    }

    cout << endl
         << "Original Vector: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << v.at(i) << " ";
    }

    cout << endl
         << "Elements which is smaller than its adjacent: " << endl;
    vector<int> ans = findSmallerElements(v);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans.at(i) << " ";
    }
}