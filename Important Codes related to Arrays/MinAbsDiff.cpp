// find sum of minimum absolute difference of the given array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter Array Size: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int result = INT_MAX;
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        for(int j=0;j<n;j++)
        {
            sum += abs(arr[i]-arr[j]);
        }
        result = min(result,sum);
    }
    cout<<result;

    return 0;
}