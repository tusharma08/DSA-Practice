#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no. of rows:"<<endl;
    cin>>n;

    int i=1;
    
    while(i<=n)
    {
        int j=1;
        char count= 'A';
        while(j<=n)
        {
            cout<<count<<"\t";
            j++;
            count++;
        }
        cout<<endl;
        
        i++;
    }
}