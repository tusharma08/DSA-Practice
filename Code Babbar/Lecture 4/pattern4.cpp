#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no. of rows:"<<endl;
    cin>>n;

    int i=1;
    int count=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<count<<"\t";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}