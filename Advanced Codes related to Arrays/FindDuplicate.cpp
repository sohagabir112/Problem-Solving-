//Find duplicate in an array of N+1 Integers
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int max = arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i]) max = arr[i];
    }

    int freq[max+1]= {0};

    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }
    
    for(int i=0;i<=max;i++)
    {
        if(freq[i] > 1) cout<<i<<" ";
    }
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int main ()
// {

//   int n;
//   cin >> n;

//   int arr[n];

//   for (int i = 0; i < n; i++) 
//   cin >> arr[i];

//   map < int, int >mp;

//   for (int i = 0; i < n; i++) 
//      mp[arr[i]]++; 

//   for (auto it = mp.begin (); it != mp.end (); it++) 
//     { 
//           if (it->second > 1)
// 	  cout << it->first << " ";
//     }
//   return 0;
// }
