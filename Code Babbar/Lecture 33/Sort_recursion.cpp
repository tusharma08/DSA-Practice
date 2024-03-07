#include<iostream>
using namespace std;

bool issort(int arr[], int n)
{
    if(n == 0 || n == 1) return 1;
    
    if(arr[0]> arr[1] ) return 0;
    else {
    bool ans = issort(arr+1,n-1);
    return ans;
    }
}

int main()
{
    int arr[] = {1,3,4,11,6};

    if(issort(arr, 5)) cout<<"True"<<endl;
    else cout<<"False"<<endl;

    return 0;
}