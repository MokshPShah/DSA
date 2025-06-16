// Using OOP

#include <iostream>
using namespace std;

class Linear_Search
{
    int *arr;
    int size;

public:

    Linear_Search(int size){
        this->size = size;
        this->arr = new int[this->size];
    }

    ~Linear_Search(){
        delete[] this->arr;
    }

    void input_arr();
    void display_arr();
    int linear_search();
};

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    Linear_Search search(size);

    search.input_arr();
    search.display_arr();
    cout << endl;
    int founded_idx = search.linear_search();

    if (founded_idx != -1)
    {
        cout << "Value founded at index " << founded_idx << " position";
    }
    else
    {
        cout << "Element not found!";
    }

    return 0;
}

void Linear_Search::input_arr()
{
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter arr[" << i << "]: ";
        cin >> arr[i];
    }
}
void Linear_Search::display_arr()
{
    cout << "Your array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int Linear_Search::linear_search()
{
    int target_elem;

    cout << "Enter the target elem: ";
    cin >> target_elem;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target_elem)
        {
            return i;
        }
    }
    return -1;
}