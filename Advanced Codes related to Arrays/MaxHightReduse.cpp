//Minimize the maximum difference between heights
#include<iostream>
using namespace std;

int main(){
    int n,k;
    cout<<"Enter Array Size: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    cout<<"Enter Value of k: "<<endl;
    cin>>k;

    int minVal = arr[0] + k;
    int maxVal = arr[n-1] - k;
    int result = arr[n-1] - arr[0];

    for(int i=1; i<n;i++)
    {
        if(arr[i] - k < 0) continue;

        int currMin = min(minVal, arr[i]-k);
        int currMax = max(maxVal, arr[i-1]+k);

        result = min(result, currMax - currMin);
    }

    cout<<"Minimum possible difference is: "<<result<<endl;

    return 0;
}





// #include<bits/stdc++.h>
// using namespace std;

// int getMinDiff(int arr[], int n, int k){
//     if(n == 1) return 0;

//     sort(arr, arr + n);

//     vector<pair<int, int>> t; // pair<value after +/- k, original value>
//     map<int, int> m;
//     int distinct = 0;

//     t.push_back({arr[0] + k, arr[0]});
//     t.push_back({arr[0] - k, arr[0]});
//     m[arr[0]] = 0;
//     distinct++;

//     // Prepare transformed values
//     for(int i = 1; i < n; i++) {
//         if(arr[i] != arr[i - 1]) {
//             t.push_back({arr[i] + k, arr[i]});
//             t.push_back({arr[i] - k, arr[i]});
//             m[arr[i]] = 0;
//             distinct++;
//         }
//     }

//     sort(t.begin(), t.end());

//     int l = 0, r = 0;
//     int ans = t[t.size() - 1].first - t[0].first;
//     int count = 0;

//     // Sliding window
//     while(r < t.size()) {
//         while(r < t.size() && count < distinct) {
//             if(m[t[r].second] == 0) count++;
//             m[t[r].second]++;
//             r++;
//         }

//         if(count < distinct) break;

//         // Update answer
//         ans = min(ans, t[r - 1].first - t[l].first);

//         // Try to shrink from left
//         while(l <= r && count >= distinct) {
//             if(m[t[l].second] == 1) count--;
//             m[t[l].second]--;
//             ans = min(ans, t[r - 1].first - t[l].first);
//             l++;
//         }
//     }

//     return ans;
// }

// int main(){
//     int n, k;
//     cout << "Enter Array Size: ";
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++) cin >> arr[i];

//     cout << "Enter k value: ";
//     cin >> k;

//     cout << "Minimum difference: " << getMinDiff(arr, n, k) << endl;

//     return 0;
// }
