//Move all the negative elements to one side of the array 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int left=0,right=n-1;
    while(left<=right)
    {
        if(arr[left]<0 && arr[right] <0) left+=1;
        else if(arr[left]>0 && arr[right]<0)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            left+=1;
            right-=1;
        }
        else if(arr[left]>0 && arr[right]>0) right -=1;
        else{
            left +=1;
            right -=1;
        }
    }

    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}