// #include<iostream>
// #include<math.h>
// using namespace std;

// int count(int arr[],int n,int k)
// {
//     int s=0;
//     int e=n-1;
//     int mid;
//     int first = 0;
//     int last = 0;
//     while(s<=e)
//     {
//         mid = s+(e-s)/2;
//         if(arr[mid]== k)
//         {
//             first = mid;
//             e= mid-1;
//             if(arr[mid-1]!=k)
//             {
//                 break;
//             }
//         }
//         if(arr[mid]>k)
//         {
//             e = mid-1;
//         }
//         else
//         {
//             s= mid+1;
//         }
//     }
//     while(s<=e)
//     {
//         mid = s+(e-s)/2;
//         if(arr[mid]== k)
//         {
//             last = mid;
//             s= mid+1;
//             if(arr[mid+1]!=k)
//             {
//                 break;
//             }
//         }
//         if(arr[mid]>k)
//         {
//             e = mid-1;
//         }
//         else
//         {
//             s= mid+1;
//         }
//     }

//     return last-first+1;
// }

// int main()
// {
//     int arr[8] = {1,3,4,4,4,5,6,9};
//     int key = 4;
//     cout<<count(arr,8,key);
   
//     return 0;
// }