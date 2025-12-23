//determine the array is a subset of another array
#include<bits/stdc++.h>
using namespace std;
                    //01
// bool isSubset(int arr1[], int arr2[], int n1, int n2){
//     int i=0, j=0;
//     for(int i=0;i<n1;i++)
//     {
//         for(int j=0;j<n2;j++)
//         {
//             if(arr2[i] == arr1[i]) break;
//         }
//         if(j == n2) return 0;
//     }
//     return 1;
// }

                    //02
// int binarySearch(int arr[],int low, int high, int x){
//     if(high>=low)
//     {
//         int mid = (low+high)/2;
//         if((mid == 0 || x >arr[mid-1]) && (arr[mid] == x))
//             return mid;
//         else if(x>arr[mid]) 
//             return binarySearch(arr, (mid+1), high, x);
//         else
//             return binarySearch(arr, low, mid-1, x);
//     }
//     return -1;
// }

// bool isSubset(int arr1[], int arr2[], int n1, int n2){
//     for(int i=0;i<n1;i++){
//         if(binarySearch(arr1, 0, n2-1, arr2[] == -1))
//             return 0;
//     }
//     return 1;
// }

                                    //03
bool isSubset(int arr1[], int arr2[], int n1, int n2){
    set<int>hashset;

    for(int i=0;i<n2;i++)
        hashset.insert(arr1[i]);

    for(int i=0;i<n1;i++)
    {
        if(hashset.find(arr2[i]) == hashset.end())
            return false;
    }
    return true;
}

int main(){
    int n1,n2;
    cout<<"Enter Two Value Size for Array 1 and 2: "<<endl;
    cin>>n1>>n2;
    int arr1[n1],arr2[n2];
    for(int i =0;i<n1;i++) cin>>arr1[i];
    for(int i=0;i<n2;i++) cin>>arr2[i];

    if(isSubset(arr1, arr2, n1, n2))
        cout<<"arr2[] is subset of arr1[]";
    else
        cout<<"arr2[] is not a subset of arr1[]";
    
    return 0;
}