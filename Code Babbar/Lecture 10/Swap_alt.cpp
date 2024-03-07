#include<iostream>
using namespace std;

int print_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"    ";
    }
    cout<<endl;
}

int swap_alt(int arr[],int n)
{
    for(int i=0;i<n-1;i=i+2)
    {
        swap(arr[i],arr[i+1]); 
    }
}

 int main()
 {
    int even[6]={2,24,6,4,4,6};
    int odd[5]={3,5,5,3,2};

    cout<<swap_alt(even, 6);
    cout<<swap_alt(odd, 5);
    print_array(even,6);
    print_array(odd,5);
 }