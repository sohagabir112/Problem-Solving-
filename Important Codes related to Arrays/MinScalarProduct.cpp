//Finding Minimum scalar product of two vectors 
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter Array 1 and 2 Size: "<<endl;
//     cin>>n;
//     int arr1[n];
//     for(int i=0;i<n;i++) cin>>arr1[i];

//     int arr2[n];
//     for(int i=0;i<n;i++) cin>>arr2[i];

//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr1[i]>arr1[j])
//             {
//                 swap(arr1[i],arr1[j]);
//             }
//         }
//     }

//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr2[i]<arr2[j])
//             {
//                 swap(arr2[i],arr2[j]);
//             }
//         }
//     }

//     int product = 0;
    
//     for(int i=0;i<n;i++)
//     {
//         product += (arr1[i]*arr2[i]);
//     }

//     cout<<"Min Scalar Product is: "<<product;

//     return 0;

// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter Array 1 and 2 Size: "<<endl;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++) cin>>arr1[i];

    int arr2[n];
    for(int i=0;i<n;i++) cin>>arr2[i];

    sort(arr1, arr1+n);
    sort(arr2,arr2+n, greater<int>());

    int product = 0;

    for(int i=0;i<n;i++)
    {
        product += (arr1[i]*arr2[i]);
    }
    cout<<"Scalar Product is: "<<product;

    return 0;
}