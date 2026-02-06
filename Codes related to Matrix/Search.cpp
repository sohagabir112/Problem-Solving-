//Search an element in a matrix
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter Array Size n*n: ";
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    int num;
    cout<<"Enter a number you want to Search: "<<endl;
    cin>>num;
    int flag = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(num == arr[i][j]) 
            {
                cout<<"Found : "<<arr[i][j]<<" Position"<<"("<<i<<", "<<j<<")";
                flag = 1;
                break;
            }
        }
        if(flag == 1) break;
    }

    if(flag == 0) cout<<"not found";

    return 0;
}


// int main(){
//     int n;
//     cin>>n;
//     int arr[n][n];
//     for(int i=0 ;i<n;i++)
//     {
//         for(int j=0;j<n;j++) cin>>arr[i][j];
//     }
//     int search ;
//     cin>>search;

//     bool flag = 0;
//     int i = 0, j = n-1;
//     while(i<n && j>= 0)
//     {
//         if(arr[i][j] == search) 
//         {
//             cout<<"Element is found at ("<<i<<", "<<j<<")";
//             flag = 1;
//             j--;
//             break;
//         }
//         else i++;
//     }
//     if(flag == 0) cout<<"Not found";

//     return 0;
// }