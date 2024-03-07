#include<iostream>
using namespace std;

int partition (int arr[],int s,int e) {
    int count = 0;
    int pivot = arr[s];
    for(int i=s+1;i<e;i++) {
        if(arr[i]<=pivot);
        count++;
    }
    int index = s+count;
    swap(arr[index],arr[s]);
    int i = s;
    int j = e;
    while(i<index && j>index) {
        if(arr[i]>pivot && arr[j]<pivot) {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        if(arr[i]>pivot && arr[j]>pivot) j--;
        if(arr[i]<pivot && arr[j]<pivot) i++; 
    }
    return index;
}

void quicksort(int arr[],int s,int e) {
    if(s>=e) return ;

    int p = partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);

}

int main() {
    int arr[8] = {2,2,5,6,5,3,1,21};
    int n = 8;
    
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" "; 
    }

    return 0;
}