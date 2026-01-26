//Minimum no. of Jumps to reach the end of an array
#include<iostream>
using namespace std;

int minJump(int arr[], int n){
    if(n<=1) return 0;
    else if(arr[0] == 0) return -1;

    int jumps = 1;
    int maxReach = arr[0];
    int steps = arr[0];

    for(int i=0;i<n;i++)
    {
        if(i == n -1) return jumps;

        maxReach = max(maxReach, i+arr[i]);
        steps--;

        if(steps == 0)
        {
            jumps++;
            if(i>= maxReach) return -1;
            steps = maxReach - i;
        }
    }

    return -1;
}

int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) cin>> arr[i];

    int result = minJump(arr, n);
    
    if(result != -1) cout<<"Minimum jumps needed: "<<result<<endl;
    else cout<<"Cannot reach end of array "<<endl;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int minJumps(int arr[], int n)
// {
//   // jumps[n-1] will hold the result
//   int jumps[n];
//   int i, j;

//   if (n == 0 || arr[0] == 0)
//     return INT_MAX;

//   jumps[0] = 0;

//   // Find the minimum number of jumps to reach arr[i]
//   // from arr[0], and assign this value to jumps[i]
//   for (i = 1; i < n; i++) {
//     jumps[i] = INT_MAX;
//     for (j = 0; j < i; j++) {
//       if (i <= j + arr[j] && jumps[j] != INT_MAX)  
//            { 
//                jumps[i] = min(jumps[i], jumps[j] + 1); 
//                break; 
//            } 
//         } 
//     } 
//    return jumps[n - 1]; 
//  } 
// int main() 
// { 
//    int n; 
//    cin>>n;
//    int arr[n];

//    for(int i=0; i<n; i++) cin>>arr[i];

//    cout<<"Minimum number of jumps to reach end is "<< minJumps(arr, n);

//    return 0;
// }