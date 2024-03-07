#include<iostream>
using namespace std;

int bisearch(int arr[],int n,int k)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    if(s>e) return 0;
    if(arr[mid] == k) return 1;

    if(arr[mid]>k) {
        bisearch(arr,n-mid,k);
    }
    if(arr[mid]<k) {
        bisearch(arr+mid,n,k);
    }
}

int main()
{
    int arr[] = {2,34,5,6,8,11};
    int key;
    cin>>key;

    if(bisearch(arr,6,key)) cout<<"Present"<<endl;
    else cout<<"Not Present"<<endl;

    return 0;
}