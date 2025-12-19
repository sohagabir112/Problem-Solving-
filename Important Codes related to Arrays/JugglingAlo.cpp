//Juggling-Algorithm for array rotation
#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int gcd(int a, int b){
    if(b == 0) return a;
    else return gcd(b, a%b);
}

void jugglingAlgo(int arr[], int n, int k){
    int d = -1, i, temp, j;

    for(int i=0;i<gcd(n,k);i++)
    {
        j=i;
        temp = arr[i];
        while(1)
        {
            d = (j + k) % n;
            if(d == i) break;
            arr[j] = arr[d];
            j = d;
        }
        arr[j] = temp;
    }

}

int main(){
    int n;
    cout<<"Enter Array Size: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int k;
    cout<<"Enter K Value: "<<endl;
    cin>>k;

    cout<<"Original Array: ";
    printArray(arr, n);

    jugglingAlgo(arr, n, k);
    cout<<endl<<"Array After Rotation: ";
    printArray(arr, n);

    return 0;
}