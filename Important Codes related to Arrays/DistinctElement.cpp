//Counting Distinct Elements in an Array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
        cout<<"Enter Array Size: "<<endl;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        unordered_map<int, int>mp;
        int count = 0;

        for(int i= 0;i<n;i++)
        {
            mp[arr[i]]++;
        }

        cout<<mp.size();
        return 0;
}

// int main(){
//     int n;
//     cout<<"Enter Array Size: "<<endl;
//     cin>>n;
//     int arr[n];
//     int max = arr[0];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     for(int i= 1;i<n;i++)
//     {
//         if(max<arr[i])
//         {
//             max = arr[i];
//         }
//     }

//     int freq[max+1];
//     int count = 0;
//     for(int i =0;i<n;i++)
//     {
//         freq[arr[i]]++;
//     }
//     for(int i = 0;i<max;i++)
//     {
//         if(freq[i]==1) {
//             count++;
//         }
//     }

//     cout<<count;

//     return 0;
// }