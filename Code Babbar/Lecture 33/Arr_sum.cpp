#include<iostream>
using namespace std;

int sum(int arr[],int n)
{
    int total = 0;
    if(n == 0) return total;

    total = arr[0] + sum(arr+1,n-1);
}

int main()
{
    int arr[] = {2,5,6,20,3};

    int ans = sum(arr,5);
    cout<<"Total : "<<ans<<endl;

    return 0;
}