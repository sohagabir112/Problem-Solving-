//finding the second smallest element in an array
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Array Size: "<<endl;
    cin>>n;
    int arr[n];
    int min = arr[0];
    int secmin = arr[0];

    for(int i = 0; i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i= 1;i<n;i++)
    {
        if(min>arr[i])
        {
            min = arr[i];
        }
    }

    for(int i= 1;i<n;i++)
    {
        if((min!=arr[i]) && secmin >arr[i])
        {
            secmin = arr[i];
        }
    }

    cout<<secmin;

    return 0;
}