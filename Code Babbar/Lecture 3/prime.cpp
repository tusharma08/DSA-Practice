#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number to check if prime or not: "<<endl;
    cin>>n;

    int d=2;
    while(d<n)
    {
        if(n%d==0)
        {
            cout<<"The number is not Prime"<<endl;
            break;
        }
        else{
            cout<<"The number is Prime"<<endl;
            
        }
        d++;
    }
    
    return 0;
}