/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node *reverseIt (struct node *head, int k)
    { 
        // Complete this method
        node* curr=head;
        node* newhead=NULL;
        node* con = NULL;
        while(curr){
            node* prev=NULL;
            node* nextnode;
            node* temp = curr;
            for(int i=0; i<k and curr; i++){
                nextnode = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nextnode;
            }
            if(con) con->next = prev, con=temp;
            else newhead = prev, con=temp;
            if(!curr) temp->next = NULL;
        }
        return newhead;
    }
};