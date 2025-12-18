//Finding the maximum product of sub-array of a given array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter Array Size: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int result = arr[0];
    for(int i=0;i<n;i++)
    {
        int mul = arr[i];
        for(int j=i+1;j<n;j++)
        {
            if(mul>result){
                result = mul;
            }
            mul *= arr[j];
        }
        if(mul>result) result = mul;
    }
    cout<<"Maximum Product of sub-array is: "<<result;

    return 0;
}