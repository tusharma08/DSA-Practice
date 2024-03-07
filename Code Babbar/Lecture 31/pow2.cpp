#include<iostream>
using namespace std;

int pow(int n)
{
    if(n == 0)
    {
        return 1;
    }
    return 2*pow(n-1);
}

int main()
{
    int num;
    cin>>num;

    int ans = pow(num);
    cout<<ans<<endl;

    return 0;
}