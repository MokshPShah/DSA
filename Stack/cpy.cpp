// Program to check if a string is a palindrome using a stack
#include <iostream>
#include <string>
using namespace std;

class Stack {
    char* arr;
    int top;
    int capacity;
public:
    Stack(int size) {
        arr = new char[size];
        capacity = size;
        top = -1;
    }
    ~Stack() {
        delete[] arr;
    }
    void push(char c) {
        if (top < capacity - 1) {
            arr[++top] = c;
        }
    }
    char pop() {
        if (top >= 0) {
            return arr[top--];
        }
        return '\0';
    }
    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int n = str.length();
    Stack s(n);

    // Push all characters onto the stack
    for (char c : str) {
        s.push(c);
    }

    // Pop characters to form the reversed string
    string rev = "";
    while (!s.isEmpty()) {
        rev += s.pop();
    }

    if (str == rev) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }
    return 0;
}