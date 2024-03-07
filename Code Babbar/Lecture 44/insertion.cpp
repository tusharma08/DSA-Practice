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

void insertHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertPosition(Node *&head,Node *&tail, int pos, int data)
{
    // for starting Postion
    if (pos == 1)
    {
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }
    // for ending Postion
    if (temp->next == NULL)
    {
        Node *temp = new Node(data);
        tail->next = temp;
        tail = temp;
        return;
    }
    Node *nodetoInsert = new Node(data);
    nodetoInsert->next = temp->next;
    temp->next = nodetoInsert;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // create new Node
    Node *node1 = new Node(100);
    cout << node1->data << endl;
    cout << node1->next << endl;
    // create head and point to create Node
    Node *head = node1;
    Node *tail = node1;
    print(head);
    // insert node at head
    insertHead(head, 55);
    print(head);
    insertTail(tail, 121);
    print(head);
    insertHead(head, 12);
    print(head);
    insertPosition(head,tail, 3, 42);
    print(head);
    insertPosition(head,tail, 1, 31);
    print(head);

    return 0;
}