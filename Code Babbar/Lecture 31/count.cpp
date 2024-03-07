#include<iostream>
using namespace std;

int count(int n)
{
    if(n == 0) return 0;

    //head recursion
    count(n-1);
    cout<<n<<endl;
}

int main()
{
    int num;
    cin>>num;

    count(num);

    return 0;
}