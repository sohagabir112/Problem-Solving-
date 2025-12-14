//Given a list arr of N integers, print sums of all subsets
#include<iostream>
using namespace std;

void subsetSums(int arr[],  int n){
    long long total = 1 <<n ;
    for(long long i = 0; i<total; i++){
        long long sum = 0;
        for(int j= 0;j< n;j++){
            if(i & (1<<j))
                 sum  += arr[j];
        }
        cout<<sum <<" ";
    }
}

// void subsetSums(int arr[], int l, int r, int sum=0){
//     if(l>r){
//         cout<<sum<<" ";
//         return ;
//     }
//     subsetSums(arr,l+1,r,sum+arr[l]);
//     subsetSums(arr,l+1,r,sum);
// }
    



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   subsetSums(arr,n);

   //subsetSums(arr,0,n-1);

    return 0;
}