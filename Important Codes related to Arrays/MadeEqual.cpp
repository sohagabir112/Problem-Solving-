//Determine can all numbers of an array be made equal
#include<bits/stdc++.h>
using namespace std;

bool isEqual(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        while(arr[i]%2 == 0) arr[i]/=2;
        while (arr[i]%3 == 0) arr[i]/=3;
        if(arr[i] != arr[0]) return 0;
    }
    return 1;
}

int main(){
    int n;
    cout<<"Enter Array Size: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    if(isEqual(arr,n))
        cout<<"Yes";
    else
        cout<<"No";
    
    return 0;
}