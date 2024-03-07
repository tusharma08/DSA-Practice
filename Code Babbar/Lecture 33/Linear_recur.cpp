#include<iostream>
using namespace std;

void print(int arr[],int n)
{
    cout<<"Size of Array is "<<n<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool search(int arr[],int n,int k)
{
    print(arr,n);
    if(arr[0] == k) return true;
    if(n == 0) return false;

    search(arr+1,n-1,k);
}

int main()
{
    int arr[] = {3,4,5,67,22};
    int key;
    cin>>key;

    if(search(arr,5,key)) cout<<"Present"<<endl;
    else cout<<"Not Present"<<endl;

    return 0;
}