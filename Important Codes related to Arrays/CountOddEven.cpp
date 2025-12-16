//Counting the number of even and odd elements in an array
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Array Size: "<<endl;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int oddCount = 0, evenCount = 0; 
    for(int i=0;i<n;i++){
        if(arr[i]%2 == 0) evenCount++;
        else oddCount++;
    }

    cout<<"Even number count : "<<evenCount<<endl<<"Odd number count: "<<oddCount;

    return 0;
}