#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{

    Node *HEAD = nullptr;
    HEAD = new Node();
    HEAD->data = 90;
    HEAD->next = NULL;

    // Problem: Currently, to add each new node to the linked list, we must manually declare a new variable, which is not scalable or efficient.
    // Solution: Instead of creating a separate variable for each new node, use a single 'current' pointer to keep track of the last node and append new nodes efficiently.

    Node *current = new Node();
    current->data = 78;
    current->next = NULL;
    HEAD->next = current;

    current = new Node();
    current->data = 55;
    current->next = NULL;
    HEAD->next->next = current;

    current = new Node();
    current->data = 11;
    current->next = NULL;
    HEAD->next->next->next = current;

    // We can use loop to print
    Node *ptr = HEAD;

    while (ptr != NULL)
    {
        cout << ptr->data << " | ";
        ptr = ptr->next;
    }

    return 0;
}