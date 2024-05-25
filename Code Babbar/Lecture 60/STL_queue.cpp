#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<int> q;
    queue<int> p;
    cout<<q.empty()<<endl;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.size()<<endl;
    q.swap(p);
    cout<<q.empty()<<endl;

    return 0;
}