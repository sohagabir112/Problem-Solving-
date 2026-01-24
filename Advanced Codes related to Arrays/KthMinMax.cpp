//Find kth max and min element in array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int k;
    cout<<endl<<"Enter k: ";
    cin>>k;

    sort(arr,arr+n);

    for(int i=0;i<k;i++){
        if(i==k-1) cout<<"Min: "<<arr[i]<<endl;
    }

    for(int i=0;i<=n-k;i++){
        if(i==n-k) cout<<"Max: "<<arr[i];
    }

    return 0;
}