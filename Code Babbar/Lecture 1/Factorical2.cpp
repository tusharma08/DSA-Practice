#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int fact =n;
    for(int i=1;i<n;i++)
    {
        fact = fact*(n-i);
    }
    cout<<fact<<endl;

    return 0;
}