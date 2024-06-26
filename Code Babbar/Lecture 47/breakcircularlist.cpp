#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constrcutor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};

void insertNode(Node *&head, int element, int d)
{

    // empty list
    if (head == NULL)
    {
        Node *newNode = new Node(d);
        head = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non-empty list
        // assuming that the element is present in the list

        Node *curr = head;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found -> curr is representing element wala node
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *head)
{

    Node *temp = head;

    // empty list
    if (head == NULL)
    {
        cout << "List is Empty " << endl;
        return;
    }

    do
    {
        cout << head->data << " ";
        head = head->next;
    } while (head != temp);

    cout << endl;
}

void deleteNode(Node *&head, int value)
{

    // empty list
    if (head == NULL)
    {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else
    {
        // non-empty

        // assuming that "value" is present in the Linked List
        Node *prev = head;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // 1 Node Linked List
        if (curr == prev)
        {
            head = NULL;
        }

        //>=2 Node linked list
        else if (head == curr)
        {
            head = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

void split(Node *head)
{
    if (head == NULL)
    {
        cout << "List is Empty" << endl;
        return;
    }
    if (head->next == head)
    {
        cout << "List can't can split" << endl;
    }
    int len = 1;
    Node *temp = head->next;
    while (temp != head)
    {
        temp = temp->next;
        len++;
    }
    Node *a = temp;
    a->next = NULL;

    int mid = len / 2;
    Node *head1 = head;
    Node *head2 = head;
    temp = head;
    while (mid - 1)
    {
        temp = temp->next;
        mid--;
    }

    //Nothing is Printing after exiting from above LOOP and i don't know why
    
    head2 = temp->next;
    temp->next = head1;
    print(head1);
    temp = head2;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = head2;
    print(head2);
}

int main()
{

    Node *head = NULL;

    insertNode(head, 5, 3);
    // print(head);

    insertNode(head, 3, 5);
    // print(head);

    insertNode(head, 5, 7);
    // print(head);

    insertNode(head, 7, 9);
    // print(head);

    insertNode(head, 5, 6);
    // print(head);

    insertNode(head, 9, 10);
    // print(head);

    insertNode(head, 3, 4);
    // print(head);

    deleteNode(head, 5);
    print(head);
    split(head);

    return 0;
}