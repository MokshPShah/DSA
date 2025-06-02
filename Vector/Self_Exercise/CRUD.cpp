#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Collection
{
private:
    vector<T> v;

public:
    void addElement(T element)
    {
        v.push_back(element);
        cout << "Element added successfully..." << endl
             << endl;
    }
    void updateElement(int index, T element)
    {
        if (index > 0 && index < v.size())
        {
            v[index] = element;
            cout << "Element updated successfully..." << endl
                 << endl;
        }
        else
        {
            cout << "Error: index out of range" << endl
                 << endl;
        }
    }
    void deleteElement(int index)
    {
        if (index > 0 && index < v.size())
        {
            v.erase(v.begin() + index);
            cout << "Element deleted successfully..." << endl
                 << endl;
        }
        else
        {
            cout << "Error: index out of range" << endl
                 << endl;
        }
    }
    void getAllElement()
    {
        if (v.empty())
        {
            cout << "No Elements are there..." << endl
                 << "Please add elemtnts first" << endl
                 << endl;
        }
        else
        {
            cout << "vector is: ";
            for (T elem : v)
            {
                cout << elem << " ";
            }
        }
        cout << endl
             << endl;
    }
};

void dispMenu()
{
    cout << "1. Add Element" << endl
         << "2. Get all Element" << endl
         << "3. Update Element" << endl
         << "4. Delete Element" << endl
         << "0. Exit" << endl
         << "Enter your choice: ";
}

int main()
{
    Collection<int> obj;
    int choice, element, index;
    while (choice != 0)
    {
        dispMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the element: ";
            cin >> element;
            obj.addElement(element);
            break;

        case 2:
            obj.getAllElement();
            break;
        case 3:
            cout << "Enter index: ";
            cin >> index;
            cout << "Enter the element: ";
            cin >> element;
            obj.updateElement(index, element);
            break;
        case 4:
            cout << "Enter index: ";
            cin >> index;
            obj.deleteElement(index);
            break;

        case 0:
            cout << "Exiting Program...";
            return 0;

        default:
            cout << "Invaid choice..." << endl;
            break;
        }
    }

    return 0;
}