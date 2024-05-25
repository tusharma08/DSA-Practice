// Problem statement
// Design a data structure to implement ‘N’ stacks using a single array of size ‘S’. It should support the following operations:

// push(X, M): Pushes an element X into the Mth stack. Returns true if the element is pushed into the stack, otherwise false.

// pop(M): Pops the top element from Mth Stack. Returns -1 if the stack is empty, otherwise, returns the popped element.
// Two types of queries denote these operations :

// Type 1: for push(X, M) operation.
// Type 2: for pop(M) operation.

class NStack
{
    int *arr;
    int *top;
    int *next;
    int n, s;
    int nextspace;
    a
public:
    // Initialize your data structure.
    NStack(int N, int S)
    {
        n = N;
        s = S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];
        for(int i=0; i<n; i++) {
            top[i] = -1;
        }
        for(int i=0; i<s; i++) {
            next[i] = i+1;
        }
        next[s-1] = -1;
        nextspace = 0;     
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        if(nextspace == -1) {
            return false;
        } 
        int index = nextspace;        
        arr[index] = x;        
        nextspace = next[index];       
        next[index] = top[m-1];        
        top[m-1] = index;
        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        if(top[m-1] == -1) {
            return -1;
        }
        int index= top[m-1];
        top[m-1] = next[index];
        next[index] = nextspace;
        nextspace = index;
        return arr[index];
    }
};