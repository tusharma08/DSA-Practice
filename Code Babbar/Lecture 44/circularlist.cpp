#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *prev;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

};

int main() {
    Node *node1 = new Node(10);

    return 0;
}