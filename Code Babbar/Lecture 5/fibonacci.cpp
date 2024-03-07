#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a=0;
    int b=1;
    int c;
    cout<<a<<" "<<b<<" ";

    for(int i=0;i<n;i++)
    {
        c=b;
        cout<<a+b<<" ";
        b=a+b;
        a=c;
        
    }
    return 0;
}