// Problem statement
// Reverse a given stack of 'N' integers using recursion. You are required to make changes in the input parameter itself.

// Note: You are not allowed to use any extra space other than the internal stack space used due to recursion.

// Example:
// Input: [1,2,3,4,5] 
// Output: [5,4,3,2,1]

void solve(stack<int>& myStack,int x) {
    if(myStack.empty()) {
        myStack.push(x);
        return ;
    }

    int num = myStack.top();
    myStack.pop();
    solve(myStack,x);
    myStack.push(num);
}

void reverseStack(stack<int> &stack) {
    // Write your code here
    if(stack.empty()) {
        return ;
    }

    int num = stack.top();
    stack.pop();

    reverseStack(stack);

    solve(stack,  num);
}