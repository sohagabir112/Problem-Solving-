//Find the Union and Intersection of the two sorted arrays
#include<bits/stdc++.h>
using namespace std;
void printUnion(int arr[],int ar[], int n, int m ){
    int i=0, j=0;
    while(i<n && j<m)
    {
        if(arr[i] < ar[j]) cout<<arr[i++]<<" ";
        else if(ar[j] < arr[i]) cout<<ar[j++]<<" ";
        else cout<<ar[j++]<<" "; i++;
    }
    while(i<n) cout<<arr[i++]<<" ";
    while(j<m) cout<<ar[j++]<<" ";

}

void printIntersection(int arr[], int ar[], int n, int m){
    int i=0, j=0;
    while(i<n && j<m)
    {
        if(arr[i] < ar[j]) i++;
        else if(ar[j] < arr[i]) j++;
        else {
            cout<<ar[j]<<" ";
            i++;
            j++;
        }
    }
}

int main(){
    int n,m;
    cout<<"Enter Array 1 size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array element: "<<endl;
    for(int i=0;i<n;i++) cin>>arr[i];

    cout<<"Enter Array 2 size: ";
    cin>>m;
    int ar[m];
    cout<<"Enter array element: "<<endl;
    for(int i=0;i<m;i++) cin>>ar[i];

    cout<<"Union: ";
    printUnion(arr, ar, n ,m);

    cout<<endl<<"Intersection: ";
    printIntersection(arr, ar, n,m);

    return 0;
}