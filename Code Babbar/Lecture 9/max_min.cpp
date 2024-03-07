#include<iostream>
using namespace std;

inarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}

max(int arr[],int n)
{
    int a=arr[0];
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            a = arr[i+1];
        }
    }
    return a;
}

min(int arr[],int n)
{
    int b=arr[0];
    for(int i=0;i<n-1;i++)
    {
        if(b>arr[i+1])
        {
            b = arr[i+1];
        }
    }
    return b;
}

int main()
{
    int arr[5];
    inarr(arr,5);

    cout<<"Max Element"<< max(arr,5)<<endl;
    cout<<"Min Element"<< min(arr,5)<<endl;

    return 0;
}