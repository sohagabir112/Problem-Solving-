//Rotation of elements of array- left and right
#include<bits/stdc++.h>
using namespace std;

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