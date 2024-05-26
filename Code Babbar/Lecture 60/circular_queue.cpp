// Problem statement
// You will be given ‘Q’ queries. You need to implement a circular queue according to those queries. Each query will belong to one of these two types:

// 1 ‘X’: Enqueue element ‘X’ into the end of the nth queue. Returns true if the element is enqueued, otherwise false.

// 2: Dequeue the element at the front of the nth queue. Returns -1 if the queue is empty, otherwise, returns the dequeued element.
// Note:
// Enqueue means adding an element to the end of the queue, while Dequeue means removing the element from the front of the queue.

#include <bits/stdc++.h>
class CircularQueue {
public:
    int front, rear, size;
    int *queue;
    
    CircularQueue(int n) {
        front = rear = -1;
        size = n;
        queue = new int[size];
    }

    bool enqueue(int value) {
        if ((rear + 1) % size == front) {
            return false; // Queue is full
        }
        if (front == -1) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;  //to maintian ciruclar nature
        }
        queue[rear] = value;
        return true;
    }

    int dequeue() {
        if (front == -1) {
            return -1; // Queue is empty
        }
        int result = queue[front];
        if (front == rear) {
            // Queue has only one element, so reset it to empty state
            front = rear = -1;
        } else {
            front = (front + 1) % size; //to maintian ciruclar nature
        }
        return result;
    }
};
