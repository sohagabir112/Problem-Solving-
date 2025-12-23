//Finding the frequency of elements in an array
//Find Largest element in an array 
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Array Size: "<<endl;
    cin>>n;
    int arr[n];
    int max = arr[0];

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
    }
    //cout<<max;

    int freq[max+1]={0};
    for(int i =0;i<n;i++){
        freq[arr[i]]++;
    }

    // for(int i=0;i<=max;i++)
    // {
    //     if(freq[i]>0){
    //         cout<<i<<"->"<<freq[i]<<endl;
    //     }
    // }

    cout<<"Sorted Array: ";

    for(int i =0;i<=max;i++){
        while(freq[i]>0){ 
            cout<<i<<" ";
            freq[i]--;
        }
    }

    


    return 0;
}
