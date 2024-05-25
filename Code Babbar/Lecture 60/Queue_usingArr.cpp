#include <iostream>
using namespace std;

class Queue
{
    int size;
    int *arr;
    int myfront;
    int rare;

public:
    Queue(int size = 5000)
    {
        // Implement the Constructor
        this->size = size;
        this->arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            arr[i] = 0;
        }
        myfront = 0;
        rare = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty()
    {
        // Implement the isEmpty() function
        if (myfront == rare)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void enqueue(int data)
    {
        // Implement the enqueue() function
        if (rare < size)
        {
            arr[rare] = data;
            rare++;
        }
    }
    int dequeue()
    {
        // Implement the dequeue() function
        if (myfront < size && myfront < rare)
        {
            int store = arr[myfront];
            arr[myfront] = 0;
            myfront++;
            return store;
        }
        else
        {
            return -1;
        }
    }
    int front()
    {
        // Implement the front() function
        if (myfront < rare)
        {
            return arr[myfront];
        }
        else
        {
            return -1;
        }
    }
    int back() {
    if (isEmpty()) { 
        return -1;
    }
    int value = arr[(rare + size - 1) % size];
    return value; 
}
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << q.isEmpty() << endl;
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    cout << q.back() << endl;
}