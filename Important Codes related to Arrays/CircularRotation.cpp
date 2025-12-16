//Circular Rotation of an array
#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cout<<"Enter Array Size: "<<endl;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    int k;
    cout<<"Enter K Value: "<<endl;
    cin>>k;

    k = (n - k) % n;
    cout<<"Original Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());

    cout<<"Array After Rotation: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}