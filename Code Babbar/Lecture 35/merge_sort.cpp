#include<iostream>
using namespace std;

void merge(int *arr,int s, int e) {
    int mid = s+(e-s)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;
    int *arr1 = new int[len1];
    int *arr2 = new int [len2];

    for(int i = 0;i<len1;i++) {
        arr1[i] = arr[s+i];
    }
    for(int i = 0;i<len2;i++) {
        arr2[i] = arr[mid+1+i];
    }

    int a = 0,b = 0;
    int c = s;
    while(a<len1 && b<len2) {
        if(arr1[a]<arr2[b]) {
            arr[c] = arr1[a];
            a++;
        }
        else {
            arr[c] = arr2[b];
            b++;
        }
        c++;
    }

    while(a<len1) {
        arr[c] = arr1[a];
        a++;
        c++;
    }
    while(b<len2) {
        arr[c] = arr2[b];
        b++;
        c++;
    }
    delete []arr1;
    delete []arr2;
}

void mergesort(int *arr, int s,int e) {
    if(s>=e) return ;

    int mid = s+(e-s)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);

    merge(arr,s,e);
}

int main() {
    int arr[5] = {2,5,1,6,9};
    int n = 5;
    mergesort(arr,0,n-1);
    
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}