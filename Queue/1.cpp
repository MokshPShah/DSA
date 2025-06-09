#include <iostream>
using namespace std;

class Queue
{
private:
    int *arr;
    int capacity;
    int counter;
    int front;
    int rear;

public:
    Queue(int n)
    {
        this->capacity = n;
        this->arr = new int[this->capacity];
        this->front = 0;
        this->rear = -1;
        this->counter = 0;
    }

    ~Queue()
    {
        delete[] arr;
    }

    void enqueue()
    {
        if (this->counter == this->capacity)
        {
            cout << "Queue Overflow..." << endl
                 << endl;
            return;
        }

        int elem;
        cout << "Enter new element: ";
        cin >> elem;

        this->rear = (this->rear + 1) % this->capacity;
        this->arr[this->rear] = elem;
        this->counter++;
    }
    void dequeue()
    {
        if (this->counter == 0)
        {
            cout << "Queue Underflow..." << endl
                 << endl;
            return;
        }
        this->front = (this->front + 1) % capacity;
        this->counter--;
    }
    void get_front()
    {
        if (this->counter == 0)
        {
            cout << "Queue is Empty" << endl
                 << endl;
        }
        else
        {
            cout << "Front of the Queue is: " << this->arr[front] << endl
                 << endl;
        }
    }
    void get_rear()
    {
        if (this->counter == 0)
        {
            cout << "Queue is Empty" << endl
                 << endl;
        }
        else
        {
            cout << "Rear of the Queue is: " << this->arr[rear] << endl
                 << endl;
        }
    }
    void display()
    {
        if (this->counter == 0)
        {
            cout << "Queue is empty..." << endl
                 << endl;
        }
        else
        {
            cout << "Queue Elements: ";
            for (int i = 0; i <= this->counter; i++)
            {
                int index = (front + i) % this->capacity;
                cout << this->arr[index] << " ";
            }
            cout << endl
                 << endl;
        }
    }

    void isEmpty()
    {
        cout << (this->counter == 0 ? "Queue is empty"
                                    : "Queue is not empty")<< endl
             << endl;
    }
    void isFull()

    {

        cout << (this->counter == this->capacity ? "Queue is Full..." : "Queue is not Full") << endl
             << endl;
    }

    void size()
    {
        if (this->counter == 0)
        {
            cout << "Queue is empty..." << endl
                 << endl;
        }
        else
        {
            cout << "The size of the queue is: " << this->counter << endl
                 << endl;
        }
    }
};

void mainMenu()
{
    cout << "Press 1 for enqueue" << endl
         << "Press 2 for dequeue" << endl
         << "Press 3 for front" << endl
         << "Press 4 for rear" << endl
         << "Press 5 for display" << endl
         << "Press 6 to check Queue is empty or not" << endl
         << "Press 7 to check Queue is full or not" << endl
         << "Press 8 to check the size of the Queue" << endl
         << "Press 0 to exit" << endl
         << "Enter your choice: ";
}

int main()
{
    int choice, size;
    cout << "Enter the size of queue: ";
    cin >> size;

    Queue queue(size);

    while (choice != 0)
    {
        mainMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            queue.enqueue();
            break;
        case 2:
            queue.dequeue();
            break;
        case 3:
            queue.get_front();
            break;
        case 4:
            queue.get_rear();
            break;
        case 5:
            queue.display();
            break;
        case 6:
            queue.isEmpty();
            break;
        case 7:
            queue.isFull();
            break;
        case 8:
            queue.size();
            break;
        case 0:
            cout << "Exititng..." << endl
                 << endl;
            break;

        default:
            cout << "Invalid choice;";
            break;
        }
    }

    return 0;
}