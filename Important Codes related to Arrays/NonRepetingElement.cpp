//Finding Non Repeating elements in an Array
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter Array Size: "<<endl;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int max = arr[0];
//     for(int i=1;i<n;i++){
//         if(max<arr[i]) {
//             max = arr[i];
//         }
//     }
//     int freq[max+1];
//     for(int i=0;i<n;i++){
//         freq[arr[i]]++;
//     }
//     for(int i=0;i<=max;i++){
//         if(freq[i]==1){
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter Array Size: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    unordered_map<int, int>mp;
    int count_dis = 0;
    for(int i=0;i<n;i++) mp[arr[i]]++;

    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second==1){
            cout<<it->first<<" ";
        }
    }
    return 0;
}