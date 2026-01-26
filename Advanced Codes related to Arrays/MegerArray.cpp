//Merge two sorted arrays without using Extra space
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter 1st Array Size: ";
    cin>>n;
    int arr1[n];
    cout<<"Enter Sorted Array: "<<endl;
    for(int i=0;i<n;i++) cin>>arr1[i];

    cout<<"Enter 2nd Array Size: ";
    cin>>m;
    int arr2[m];
    cout<<"Enter Sorted Array: "<<endl;
    for(int i=0;i<m;i++) cin>>arr2[i];

    for(int i=0;i<n;i++)
    {
        if(arr1[i]>arr2[0]) swap(arr1[i], arr2[0]);

        int first = arr2[0],k;
        for(k =1; k<m && arr2[k]<first; k++)
        {
            arr2[k-1] = arr2[k];
        }
        arr2[k-1] = first;
    }

    cout<<"Merged Array :";
    for(int i=0;i<n;i++) cout<<arr1[i]<<" ";
    for(int i=0;i<m;i++) cout<<arr2[i]<<" ";

    return 0;
}




// #include <bits/stdc++.h>
// using namespace std;

// void merge(int arr1[], int arr2[], int m, int n)
// {

//   for (int i = n - 1; i >= 0; i--)
//   {

//     int j, last = arr1[m - 1];
    
//     for (j = m - 2; j >= 0 && arr1[j] > arr2[i]; j--)
//       arr1[j + 1] = arr1[j];

//     if (j != m - 2 || last > arr2[i])
//     {
//        arr1[j + 1] = arr2[i];
//        arr2[i] = last;
//     }
//   }
// }

// int main()
// { 

//    int m, n;
//    cin>>m;

//    int arr1[m];

//    for(int i=0; i<m; i++) cin>>arr1[i];

//    cin>>n;

//    int arr2[n];

//    for(int i=0; i<n; i++) cin>>arr2[i];

//    merge(arr1, arr2, m, n);

//    cout << "After Merging nFirst Array: ";
  
//    for (int i = 0; i < m; i++)
//      cout << arr1[i] << " ";
   
//    cout << "\nSecond Array: ";
   
//    for (int i = 0; i < n; i++)
//     cout << arr2[i] << " ";
   
//    return 0;
// }