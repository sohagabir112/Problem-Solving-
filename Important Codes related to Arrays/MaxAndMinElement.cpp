//Find Largest element in an array 
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Array Size: "<<endl;
    cin>>n;
    int arr[n];
    int max = arr[0];
    int min = arr[0];

    for(int i = 0; i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i= 1;i<n;i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
        if(min>arr[i])
        {
            min = arr[i];
        }
    }
    cout<<"Max Element: "<<max<<endl<<"Min Element: "<<min;

    return 0;
}
