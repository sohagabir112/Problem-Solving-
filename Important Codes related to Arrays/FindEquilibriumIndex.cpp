//Finding equilibrium index of an array 
#include<bits/stdc++.h>
using namespace std;

void findEquilibrium(int arr[], int n){
    int result = -1;
    for(int i=0;i<n;i++) 
    {
        int left_sum = 0;
        for(int j=0;j<i;j++) 
        {
            left_sum += arr[i];
        }
        int right_sum = 0;
        for(int j=i+1;j<n;j++)
        {
            right_sum += arr[i];
        }
        if(right_sum == left_sum)
        {
            result = i;
        }
    }
    cout<<"First Point of equilibrium is at index: "<<result;
    return;
}

int main(){
    int n;
    cout<<"Enter Array Size : "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    findEquilibrium(arr, n);

    return 0;
}