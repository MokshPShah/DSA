#include <iostream>
using namespace std;

class Stack
{
    int top;
    int capacity;
    int size;
    int *arr;

public:
    Stack(int n)
    {
        this->arr = new int[n];
        this->capacity = n;
        this->top = -1;
        this->size = 0;
    }
    ~Stack()
    {
        delete[] arr;
    }
    void push()
    {
        if (this->top == capacity - 1)
        {
            cout << "Stack Overflow" << endl
                 << endl;
            return;
        }

        this->top++;

        int elem;
        cout << "Enter the element: ";
        cin >> elem;

        arr[top] = elem;
        this->size++;
        cout << "Push operation successfull" << endl
             << endl;
    }

    void pop()
    {
        if (this->top == -1)
        {
            cout << "Stack Underflow" << endl
                 << endl;
            return;
        }

        this->top--;
        this->size--;
        cout << "Pop operation successfull" << endl
             << endl;
    }

    void peek()
    {
        if (this->top == -1)
        {
            cout << "Stack is empty" << endl
                 << endl;
        }
        cout << "Top value is: " << arr[top] << endl
             << endl;
    }

    void display()
    {
        if (this->top == -1)
        {
            cout << "Stack is empty" << endl
                 << endl;
        }

        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }

    void isEmpty()
    {
        if (this->top == -1)
        {
            cout << "Stack is empty." << endl
                 << endl;
        }
        else
        {
            cout << "Stack is not empty." << endl
                 << endl;
        }
    }
    void isFull()
    {
        if (this->top == this->capacity - 1)
        {
            cout << "Stack is full." << endl
                 << endl;
        }
        else
        {
            cout << "Stack is not full." << endl
                 << endl;
        }
    }
    void length()
    {
        cout << "The size of the stack is: " << this->size << endl
             << endl;
    }
};

void mainMenu()
{
    cout << "Press 1 for Push the value in the Stack" << endl
         << "Press 2 for Pop the value in the Stack" << endl
         << "Press 3 for Peek the first value from the Stack" << endl
         << "Press 4 for Display all the values from the Stack" << endl
         << "Press 5 for checking the Stack isEmpty or not" << endl
         << "Press 6 for checking the Stack isFUll or not" << endl
         << "Press 7 for check the size of the Stack" << endl
         << "Press 0 for Exit" << endl
         << "Enter your choice: ";
}

int main()
{
    int choice, n;
    cout << "Enter the size of the arr: ";
    cin >> n;
    cout << endl << endl;
    Stack stack{n};

    while (choice != 0)
    {
        mainMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            stack.push();
            break;
        case 2:
            stack.pop();
            break;
        case 3:
            stack.peek();
            break;
        case 4:
            stack.display();
            break;
        case 5:
            stack.isEmpty();
            break;
        case 6:
            stack.isFull();
            break;
        case 7:
            stack.length();
            break;
        case 0:
            cout << "Exiting" << endl
                 << endl;
            break;

        default:
            cout << "Invalid choice";
            break;
        }
    }

    return 0;
}