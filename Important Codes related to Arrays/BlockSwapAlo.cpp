//Block swap algorithm for array rotation
#include<bits/stdc++.h>
using namespace std;

// void swap(int arr[], int fi, int si, int d){
//     int i,temp;

//     for(int i=0;i<d;i++) 
//     {
//         temp = arr[fi + i];
//         arr[fi + i] = arr[si + i];
//         arr[si + i] = temp;
//     }
// }

// void leftRotate( int arr[], int d, int n){
//     if(d == 0 || d == n) return;
//     if(d > n) d = d%n;
//     if(n-d == d)
//     {
//         swap(arr, 0, n-d, d);
//         return;
//     } 
//     if(d < n-d) 
//     {
//         swap(arr, 0, d, n-d);
//         leftRotate(arr, d, n-d);
//     }
//     else{
//         swap(arr, 0, d, n-d);
//         leftRotate(arr + n - d, 2*d - n, d);
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter Array Size: "<<endl;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++) cin>>arr[i];
//     int m;
//     cout<<"Enter Block Swap Position: "<<endl;
//     cin>>m;

//     leftRotate(arr, m,n);

//     for(int i=0;i<n;i++) cout<<arr[i]<<" ";

//     return 0;

// }


int main(){
    int n;
    cout<<"Enter Array Size: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int k;
    cout<<"Enter Rotation num: "<<endl;
    cin>>k;

    int temp[k];
    for(int i=0;i<k;i++) temp[i] = arr[i];

    int x = k;
    for(int i=0; x<n; i++) arr[i] = arr[x++];
    x = 0;
    for(int i=n-k;i<n;i++) arr[i] = temp[x++];
    
    for(int i=0; i<n;i++) cout<<arr[i]<<" ";

    return 0;
}