//remove duplicate elements in a sorted array
#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cout<<"Enter Array Size: "<<endl;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     set<int>s;
//     for(int i=0;i<n;i++){
//         s.insert(arr[i]);
//     }
//     for(auto it=s.begin();it!=s.end();it++){
//         cout<<*it<<" ";
//     }
//     return 0;
// }

int duplicates(int arr[],  int n){
    if(n==0 ||n==1) return n;
    int j =0;
    for(int i=0;i<n-1;i++){
        if(arr[i] != arr[i+1]){
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[n-1];

    return j;
}

int main(){
    int n;
    cout<<"Enter Array Size: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    n = duplicates(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}