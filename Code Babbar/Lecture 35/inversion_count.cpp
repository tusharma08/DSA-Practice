#include<iostream>
using namespace std;

//The Changes to merge sort for inversion count are marked with comments 

int merge(int *arr,int s, int e) {
    int mid = s+(e-s)/2;
    int inv = 0;  //this is added 
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
            inv += len1 -a; // this is added 
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
    return inv; //this is added
}

int mergesort(int *arr, int s,int e) {
    if(s>=e) return 0;
    int inv = 0;  //thsi is added
    int mid = s+(e-s)/2;
    inv += mergesort(arr,s,mid); //this is added
    inv += mergesort(arr,mid+1,e);  //thsi is added

    inv += merge(arr,s,e); //this is added
    return inv; // this is added
}

int main() {
    int arr[8] = {3,5,6,9,1,2,7,8};
    int n = 8;
    int ans = mergesort(arr,0,n-1);
    
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }cout<<endl;
    cout<<ans<<endl;

    return 0;
}