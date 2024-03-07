#include<iostream>
using namespace std;

// void update(int d) // pass by value, new memory create for fucntion operation done on new memory only 
// {
//     d++;
// }

// void update(int &r)  //pass by reference, same memory with new name and operations done on actual memory but with new name so update happen to actual memory
// {
//     r++;
// }

int main()
{
    // int i= 14;
    // int &j = i;

    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // cout<<j<<endl;
    // j+=13;
    // cout<<i<<endl;
    // cout<<j<<endl;

    // int a = 23;

    // cout<<"before"<<a<<endl;
    // update(a);
    // cout<<"after"<<a<<endl;

    // int ch = 23;
    // void *p = &ch;
    // cout<<sizeof(p)<<endl;

    // int n;
    // cin>>n;

    // int *num = new int[5];

    // for(int i=0;i<n;i++)
    // {
    //     cin>>num[i]<<endl;
    // }
    // int sum = 0;
    // for(int i=0;i<n;i++)
    // {
    //     sum = sum + arr[i];

    // }
    // cout<<sum<<endl;
    int m,n; 
    cin>>m>>n;

    int **arr = new int *[m];

    for(int i=0;i<m;i++)
    {
        arr[i] = new int[n];
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // delete 2-d array

    for(int i=0;i<m;i++)
    {
        delete []arr[i];
    }
    delete []arr;


    return 0;
}