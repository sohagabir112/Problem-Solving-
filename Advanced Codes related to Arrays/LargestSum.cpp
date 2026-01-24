//Largest Sum Contigous SubArray
#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n, sum=0;
//     cout<<"Enter Array Size: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++) cin>>arr[i];
//     int res = INT_MIN;

//     for(int i=0;i<n;i++)
//     {
//         for(int j=i;j<n;j++)
//         {
//             sum += arr[j];
//             res = max(sum,res);
//         }
//     }
//     cout<<res;

//     return 0;
// }

int main(){
    int n, sum=0;
    cout<<"Enter Array Size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int max_sum = INT_MIN, curr_sum=0;

    for(int i=0;i<n;i++)
    {
        curr_sum += arr[i];
        if(max_sum < curr_sum) max_sum = curr_sum;
        else if(curr_sum < 0) curr_sum = 0;
    }
    cout<<max_sum;

    return 0;
}

