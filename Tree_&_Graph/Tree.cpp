#include <iostream>
using namespace std;

class Node
{
public:
    Node *left;
    char data;
    Node *right;
};

int main()
{
    Node *NodeA = new Node();
    Node *NodeB = new Node();
    Node *NodeC = new Node();
    Node *NodeD = new Node();
    Node *NodeE = new Node();
    Node *NodeF = new Node();

    NodeA->data = 'A';
    NodeA->left = NodeB;
    NodeA->right = NodeC;

    NodeB->data = 'B';
    NodeB->left = NodeD;
    NodeB->right = NULL;

    NodeC->data = 'C';
    NodeC->left = NodeE;
    NodeC->right = NodeF;

    NodeD->data = 'D';
    NodeD->left = NULL;
    NodeD->right = NULL;

    NodeE->data = 'E';
    NodeE->left = NULL;
    NodeE->right = NULL;

    NodeF->data = 'F';
    NodeF->left = NULL;
    NodeF->right = NULL;

    cout << "Node A: " << NodeA->left << " " << NodeA->data << " " << NodeA->right << endl;
    cout << "Node B: " << NodeB->left << " " << NodeB->data << " " << NodeB->right << endl;
    cout << "Node C: " << NodeC->left << " " << NodeC->data << " " << NodeC->right << endl;
    cout << "Node D: " << NodeD->left << " " << NodeD->data << " " << NodeD->right << endl;
    cout << "Node E: " << NodeE->left << " " << NodeE->data << " " << NodeE->right << endl;
    cout << "Node F: " << NodeF->left << " " << NodeF->data << " " << NodeF->right << endl;

    return 0;
}