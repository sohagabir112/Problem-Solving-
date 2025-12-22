//Replace each element by its rank given in array 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter Array Size: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int temp[n];
    for(int i=0;i<n;i++) temp[i] = arr[i];

    sort(temp, temp+n);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(temp[j] == arr[i])
            {
                arr[i] = j+1;
                break;
            }
        }
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

    return 0;
}