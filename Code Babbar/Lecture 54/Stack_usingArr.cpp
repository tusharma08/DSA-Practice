#include<iostream>
using namespace std;

class Stack{
    public:
        int *arr;
        int top;
        int size;

        Stack(int size) {
            this->size = size;
            arr = new int[size];
            top = -1;
        }
        
        void push(int element) {
            if(size - top > 1) {
                top++;
                arr[top] = element;
            }
            else {
                cout<<"Stack Overflow"<<endl;
            }
        }

        void pop () {
            if(top >= 0) {
                cout<<arr[top]<<endl;
                top--;
            }
            else {
                cout<<"Stack Empty"<<endl;
            }
        }

        int peek () {
            if(top >= 0) {
                return arr[top];
            }
            else {
                cout<<"Stack Empty"<<endl;
                return -1;
            }
        }

        bool empty () {
            if(top >= 0) {
                return 0;
            }
            else {
                return 1;
            }
        }
};

int main() {
    Stack s(5);
    
    cout<<s.empty()<<endl;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.peek()<<endl;
    cout<<s.empty()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    
    return 0;
}