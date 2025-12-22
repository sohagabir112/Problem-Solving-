//Reverse Array
#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cout<<"Enter Array Size: "<<endl;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     for(int i= n-1;i>=0;i--)
//     {
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

int main(){
    int n;
    cout<<"Enter Array Size: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // for(int i =0,j=n-1; i<j ;i++,j--)
    // {
    //     swap(arr[i],arr[j]);
    // }

    // for(int i =0;i<n/2;i++)
    // {
    //     int temp = arr[i];
    //     arr[i] = arr[n-i-1];
    //     arr[n-i-1] = temp;
    // }

    for(int i=0;i<n/2;i++)
    {
        arr[i] ^= arr[n-i-1];
        arr[n-i-1] ^= arr[i];
        arr[i] ^= arr[n-i-1];
    }

    for(int i= 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}