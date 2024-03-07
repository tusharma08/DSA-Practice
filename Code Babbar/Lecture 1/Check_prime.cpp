#include<iostream>
using namespace std;

int main()
{
    int n,temp=0,m=0;
    // since it is vscode can't take input from user, so giving myself one input but can take from user
    n=57;
    m=n/2;
    for(int i=2;i<=m;i++)
    {
        if(n%i==0)
        {
            cout<<"The number is not prime"<<endl;
            temp=1;
            break;
        }
    }
    if(temp==0)
    {
        cout<<"The number is prime"<<endl;
    }

    return 0;
}