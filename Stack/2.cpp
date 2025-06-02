#include <iostream>
#include <string.h>
using namespace std;

class Stack
{
    char *arr;
    int capacity;
    int top;

public:
    Stack(int n)
    {
        this->arr = new char[n];
        this->capacity = n;
        this->top = -1;
    }

    ~Stack() { delete[] arr; }

    void push(char elem)
    {
        this->top++;
        arr[top] = elem;
    }

    void display()
    {
        for (int i = this->top; i >= 0; i--)
        {
            cout << arr[top] << " ";
        }
    }

    bool isPalindrome(string str)
    {
        for (int i = 0, j = top; i < top, j >= 0; i++, j--)
        {
            if (arr[j] == str[i])
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};

int main()
{
    string str;
    cout << "Enter the name: ";
    cin >> str;
    int size = str.size();
    Stack stack(size);

    for (int i = 0; i < size; i++)
    {
        stack.push(str[i]);
    }

    bool isPalindrome = stack.isPalindrome(str);

    if (isPalindrome == true)
    {
        cout << "String is Palindrome";
    }
    else
    {
        cout << "String is not Palindrome";
    }

    return 0;
}