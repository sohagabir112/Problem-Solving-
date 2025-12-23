//Sort an array according to the order defined by another array
#include<bits/stdc++.h>
using namespace std;

// int first(int arr[], int low, int high, int x, int n){
//     if(high>=low)
//     {
//         int mid = low + (high - low)/2;
//         if((mid == 0 || x>arr[mid-1]) && arr[mid == x])
//             return mid;
//         if(x>arr[mid])
//             return first(arr, (mid+1), high, x, n);
//         else 
//             return first(arr, low, (mid-1), x, n);
//     }
//     return -1;
// }

// void sortAccording(int arr1[], int arr2[], int m, int n){
//     int temp[m], visited[m];
//     for(int i=0;i<n;i++)
//     {
//         temp[i] = arr1[i];
//         visited[i] = 0;
//     } 
//     sort(temp, temp+m);

//     int ind = 0;

//     for(int i=0;i<n;i++)
//     {
//         int f = first(temp,0,m-1,arr2[i],m);

//         if(f==-1) continue;

//         for(int j=f; (j<m && temp[j] == arr2[i]);j++){
//             arr1[ind++] = temp[j];
//             visited[j] = 1;
//         }
//         for(int i=0;i<m;i++){
//             if(visited[i]==0) arr1[ind++] = temp[i];
//         }
//     }
// }

// void printArray(int arr[],int n){
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int n,m;
//     cout<<"Enter Array 1 and 2 Size: "<<endl;
//     cin>>n>>m;
//     int arr1[n],arr2[m];
//     for(int i=0;i<n;i++) cin>>arr1[i];
//     for(int i=0;i<m;i++) cin>>arr2[i];

//     sortAccording(arr1, arr2, n, m);
//     printArray(arr1, m);

//     return 0;
// }

void sortA1byA2(vector<int> &arr1, vector<int> &arr2){
    unordered_map<int, int> index;

    for(int i=0;i<arr2.size();i++)
    {
        if(index[arr2[i]] == 0) 
            index[arr2[i]] = i+1;
    }

    auto comp = [&](int a, int b){
        if(index[a] == 0 && index[b] == 0) return a<b;
        if(index[a] == 0) return false;
        if(index[b] == 0) return true;
        else return index[a] < index[b];
    };
    sort(arr1.begin(), arr1.end(), comp);

}

int main(){
    vector<int> arr1{ 20, 1, 20, 5, 7, 1, 9, 39, 6, 18, 18 };
    vector<int> arr2{ 20, 1, 18, 39};

    sortA1byA2(arr1, arr2);
    for(auto i:arr1) cout<<i<<" ";

    return 0;
}