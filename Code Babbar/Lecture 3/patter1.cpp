#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows for Sqaure pattern using *: "; 
    cin>>n;

    int i=1;

    while(i<=n)
    { 
        int j=1;
        while(j<=n)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}