#include<iostream>
using namespace std;

int fact(int n)
{
    int fact=1;

    for(int i=2;i<=n;i++)
    {
        fact =fact*i;
    }
    return fact;
}

int nCr(int n, int r)
{
     int ans = fact(n)/(fact(r)*fact(n-r));
    return ans;
}


int main()
{
    int n,r;
    cin>>n>>r;

    cout<<nCr(n,r)<<endl;

    return 0;
}