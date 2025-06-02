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

    Node *n2 = new Node();
    n2->data = 78;
    n2->next = NULL;
    HEAD->next = n2;

    Node *n3 = new Node();
    n3->data = 55;
    n3->next = NULL;
    n2->next = n3;

    Node *n4 = new Node();
    n4->data = 11;
    n4->next = NULL;
    n3->next = n4;

    cout << HEAD->data << " => " << HEAD->next << " | "
         << n2->data << " => " << n2->next << " | "
         << n3->data << " => " << n3->next << " | "
         << n4->data << " => " << n4->next << " | ";

    return 0;
}