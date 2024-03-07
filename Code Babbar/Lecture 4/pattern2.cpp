#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the No. of rows and column:"<<endl;
    cin>>n;

    int i=0;
    while(i<n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<i*n+j<<"\t";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}