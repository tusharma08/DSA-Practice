#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=1;
    
    while(i<=n)
    {
        char ch='A';
        int j=1;
        while(j<=i)
        {
            ch=ch+i-j;
            cout<<ch<<"\t";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}