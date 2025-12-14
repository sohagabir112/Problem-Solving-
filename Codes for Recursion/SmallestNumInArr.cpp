//Smallest element in an array
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    int min = arr[0];

    for(int i =0;i<n;i++)
    {
        if(min>arr[i])
        {
            min =arr[i]; 
        }
    }
    cout<<min;

    return 0;
}