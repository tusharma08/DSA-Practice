#include<iostream>
using namespace std;

int sum(int *a,int n)
{
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
}

int main()
{
    // int arr[10] ={0,0,2,4,20};
    // cout<<arr<<endl;

    // int *p = &arr[0];
    // cout<<p<<endl;

    // for(int i=0;i<10;i++)
    // {
    //     cout<<i[arr]<<endl;
    // }

    // char a[10];
    // char *p = &a[0];
    // cout<<sizeof(a)<<endl;
    // cout<<sizeof(*a)<<endl;
    // cout<<sizeof(p)<<endl;
    // cout<<sizeof(*p)<<endl;
    // cout<<sizeof(&p)<<endl;
    // cout<<p<<endl;

    // char a[7] = "ababsb";
    // char *p = &a[0];
    // cout<<a<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;

    // char ch = 'c';
    // char *p = &ch;
    // cout<<ch<<endl;
    // cout<<*p<<endl;
    // cout<<p<<endl;
    
    int a[6] = {1,3,4,5,6,53};
    cout<<sum(a+3,6-3);

    return 0;
}