//the longest palindrome in an array
#include<iostream>
using namespace std;

int isPalindrome(int n){
    int rev = 0, temp = n;
    while(temp>0){
        int rem = temp%10;
        rev = rev*10 + rem;
        temp/=10;
    }
    if(n==rev) return 1;

    return 0;
}

int main(){
    int n;
    cout<<"Enter Array Size: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int res = INT_MIN;
    for(int i=0;i<n;i++){
        if(isPalindrome(arr[i]) && res<arr[i])
        {
            res = arr[i];
        }
    }
    if(res == INT_MIN) res = -1;

    cout<<res;

    return 0;
}