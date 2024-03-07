#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertPostion(Node *&head, Node *&tail, int pos, int data)
{
    if (pos == 1)
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
        return;
    }
    else
    {
        Node *temp = head;
        int count = 1;
        while (count < pos - 1)
        {
            temp = temp->next;
            count++;
        }
        if (temp->next == NULL)
        {
            Node *temp = new Node(data);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
            return;
        }
        Node *insertNode = new Node(data);
        insertNode ->next = temp ->next;
        temp ->next = insertNode;
        insertNode->prev =temp;
        temp->next->prev = insertNode;
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

int getLength(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insertPostion(head,tail,1,12);
    insertPostion(head,tail,3,14);
    insertPostion(head,tail,4,21);
    print(head);
    cout << getLength(head) << endl;
    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    return 0;
}