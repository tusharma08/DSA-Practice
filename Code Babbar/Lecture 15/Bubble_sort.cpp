#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for( int i=n-1;i>0;i--)
    {
        bool s = false;
        for(int j=0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                s = true;
                swap(arr[j+1],arr[j]);
            }
        }
        if(!s) break;
    }
}
