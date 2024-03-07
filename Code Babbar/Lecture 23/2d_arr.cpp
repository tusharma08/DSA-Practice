#include<iostream>
using namespace std;
#include<vector>

int main()
{
    int arr[3][4];
    cout<<"Enter the Value of 2-D array:"<<endl;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // int target;
    // cin>>target;

    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<4;j++)
    //     {
    //         if(arr[i][j] == target)
    //         {
    //             cout<<i+1<<" "<<j+1<<endl;
    //         }
    //     }
    // }

    // cout<<"Sum Row"<<endl;
    // int sum = 0;
    // for(int i=0;i<3;i++)
    // {
    //     sum = 0;
    //     for(int j=0;j<4;j++)
    //     {
    //         sum = sum + arr[i][j];
    //     }
    //     cout<<sum<<" ";
    // }

    cout<<"Max Row Sum and Row"<<endl;
    int sum = 0;
    vector <int> ans;
    for(int i=0;i<3;i++)
    {
        sum = 0;
        for(int j=0;j<4;j++)
        {
            sum = sum + arr[i][j];
        }
        ans.push_back(sum);
    }
    int maxi = ans[0];
    int a= 0;
    for(int i=0;i<ans.size();i++)
    {
        if(ans[i]> maxi) 
        {
            maxi = ans[i];
            a = i;
        }
    }
    cout<<maxi<<" "<<a+1;

    return 0;
}