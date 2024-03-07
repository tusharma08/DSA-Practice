#include<iostream>
using namespace std;

int update( int *pt)
{
    // pt = pt+1;
    *pt = *pt+1;
    // **pt = **pt+1;
}

int main()
{
    int num = 20;
    int *p1 = &num;
    int **p2 = &p1;

    cout<<num<<endl;
    cout<<*p1<<endl;
    cout<<**p2<<endl;
    cout<<*p2<<endl;

    cout<<update(p1)<<endl;

    return 0;
} 