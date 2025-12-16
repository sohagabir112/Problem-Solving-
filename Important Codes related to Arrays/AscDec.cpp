//Sort first half in ascending order and second half in descending
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Array Size: "<<endl;
    cin>>n;
    int temp;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i = 0;i<n/2;i++){
        for(int j = i+1;j<n/2;j++){
             if(arr[i]>arr[i+1]) {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
    }
    }
    for(int i = n/2;i<n;i++){
        for(int j=i+1;j<n;j++) {
            if(arr[i]<arr[i+1]) {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

    return 0;

}