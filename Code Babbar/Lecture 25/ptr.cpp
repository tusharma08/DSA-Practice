#include<iostream>
using namespace std;

int main()
{
    // int num = 5;
    // int *ptr = &num;

    // cout<<"Address of Num variable is:"<<ptr<<endl;
    // cout<<"Address of Num variable is:"<<*ptr<<endl;

    // string s = "fuf";
    // string *pt = &s;
    // cout<<"Address of String s is:"<<*pt<<endl;

    // int *p = 0;
    // cout<<*p;

    // int i = 34;
    // int *p = 0;
    // p =&i;

    // cout<<"Address of Num variable is:"<<p<<endl;
    // cout<<"Address of Num variable by p is:"<<*p<<endl;

    // int *q = p;

    // cout<<"Address of Num variable by q is:"<<*q<<endl;

    int a = 34;
    int *c = &a;
    cout<<c <<endl;
    c++;
    cout<<c<<endl;
    cout<<*c;

    return 0;
}