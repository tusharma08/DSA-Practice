#include<iostream>
using namespace std;

int fibo(int n,int a,int b,int sum)
{
    if(n==0) return 0;
    
    sum = a+b;
    cout<<sum<<endl;
    a = b;
    b = sum;
    return  fibo(n-1,a,b,sum);
}

int main()
{
    int n;
    cin>>n;
    cout<<"0"<<endl;
    cout<<"1"<<endl;
    fibo(n-2,0,1,1);

    return 0;
}