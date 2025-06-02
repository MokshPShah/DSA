#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;
    int count;

    LinkedList()
    {
        this->head = NULL;
        count = 0;
    }

    void insertAtBeginning(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = this->head;
        this->head = newNode;
        this->count++;
    }

    void insertAtEnding(int data)
    {
        Node *newNode = new Node(data);
        if (this->head == NULL)
        {
            this->head = newNode;
        }
        else
        {
            Node *ptr = this->head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
        this->count++;
    }

    void insertAtPosition(int data, int position)
    {
        Node *newNode = new Node(data);
        if (position == 0)
        {
            newNode->next = this->head;
            this->head = newNode;
        }
        else
        {
            Node *ptr = head;
            for (int i = 0; i < position - 1; i++)
            {
                ptr = ptr->next;
            }

            newNode->next = ptr->next;
            ptr->next = newNode;
        }
        this->count++;
    }

    void fetchNodes()
    {
        Node *ptr = this->head;

        while (ptr != NULL)
        {
            cout << ptr->data << " | ";
            ptr = ptr->next;
        }
        cout << endl
             << endl;
    }

    void updateNode(int data, int position)
    {
        if (position < 0 || position > this->count)
        {
            cout << "Invaild Position" << endl
                 << endl;
            return;
        }
        else
        {
            Node *ptr = this->head;
            for (int i = 0; i < position; i++)
            {
                ptr = ptr->next;
            }
            ptr->data = data;
            cout << "Node updated successfully" << endl
                 << endl;
        }
    }

    void deleteFromBeginning()
    {
        if (this->head == NULL || this->count == 0)
        {
            cout << "List is empty";
            return;
        }
        Node *temp = this->head;
        this->head = this->head->next;
        delete temp;
        temp = NULL;
        this->count--;
    }

    void deleteFromEnding()
    {
        if (this->head == NULL || this->count == 0)
        {
            cout << "List is empty";
            return;
        }
        Node *ptr = this->head;
        while (ptr->next->next != NULL)
        {
            ptr = ptr->next;
        }
        delete ptr->next;
        ptr->next = NULL;
        ptr = NULL;
        delete ptr;
        this->count--;
    }

    void deleteFromPosition(int position)
    {
        if (this->head == NULL || this->count == 0)
        {
            cout << "List is empty";
            return;
        }
        Node *prev = this->head;
        Node *current = this->head;

        for (int i = 0; i < position; i++)
        {
            current = current->next;
        }

        for (int i = 0; i < position - 1; i++)
        {
            prev = prev->next;
        }

        prev->next = current->next;
        delete current;
        current = NULL;
        prev = NULL;
        delete prev;
        this->count--;
    }

    void size()
    {
        cout << "Size of the linked list is: " << this->count << endl
             << endl;
    }
};

void mainMenu()
{
    cout << "1. Insert the node at the beginning of the list" << endl
         << "2. Insert the node at the ending of the list" << endl
         << "3. Insert the node at the at any position of the list" << endl
         << "4. Update the node at the at any position of the list" << endl
         << "5. Delete the node from the beginning of the list" << endl
         << "6. Delete the node from the ending of the list" << endl
         << "7. Delete the node from any position of the list" << endl
         << "8. View the size of Linked List." << endl
         << "9. Fetch All Nodes" << endl
         << "0. Exit" << endl
         << "Enter your choice: ";
}

int main()
{
    LinkedList list;

    int choice, elem, position;

    while (choice != 0)
    {
        mainMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value of element: ";
            cin >> elem;
            list.insertAtBeginning(elem);
            cout << "Node inserted successfully at the beginning of the list..." << endl
                 << endl;
            break;
        case 2:
            cout << "Enter the value of element: ";
            cin >> elem;
            list.insertAtEnding(elem);
            cout << "Node inserted successfully at the ending of the list..." << endl
                 << endl;
            break;
        case 3:
            cout << "Enter the value of element: ";
            cin >> elem;
            cout << "Enter the Position: ";
            cin >> position;
            list.insertAtPosition(elem, position);
            cout << "Node inserted successfully" << endl
                 << endl;
            break;
        case 4:
            cout << "Enter the value of element: ";
            cin >> elem;
            cout << "Enter the Position: ";
            cin >> position;
            list.updateNode(elem, position);
            break;
        case 5:
            list.deleteFromBeginning();
            cout << "Node Deleted successfully" << endl
                 << endl;
            break;
        case 6:
            list.deleteFromEnding();
            cout << "Node Deleted successfully" << endl
                 << endl;
            break;
        case 7:
            cout << "Enter the Positon: ";
            cin >> position;
            list.deleteFromPosition(position);
            cout << "Node Deleted successfully" << endl
                 << endl;
            break;
        case 8:
            list.size();
            break;
        case 9:
            list.fetchNodes();
            break;
        case 0:
            cout << "Exiting...";
            break;

        default:
            cout << "Invalid choice" << endl
                 << endl;
            break;
        }
    }

    return 0;
}