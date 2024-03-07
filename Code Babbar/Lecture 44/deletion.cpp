#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            this->next = NULL;
            delete next;
            
        }
        cout << "Memory Free: " << value << endl;
    }
};

void insertPosition(Node *&head, Node *&tail, int pos, int data)
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

void deleteNode(Node *&head, Node *&tail, int pos)
{
    // deleting first Node
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free if Node
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *prev = NULL;
        Node *curr = head;
        int count = 1;
        while (count < pos)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        //update tail if delete last Node
        if (curr->next == NULL)
        {
            tail = prev;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
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
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insertPosition(head, tail, 2, 12);
    insertPosition(head, tail, 3, 13);
    insertPosition(head, tail, 4, 42);
    print(head);
    deleteNode(head,tail,3);
    print(head);
    insertPosition(head, tail, 4, 54);
    deleteNode(head,tail,4);
    print(head);
    cout<<tail->data<<endl;

    return 0;
}