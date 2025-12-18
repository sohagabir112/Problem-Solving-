//Finding if Arrays are disjoint or not
#include<bits/stdc++.h>
using namespace std;

// int isDisjoint(int arr1[], int arr2[], int n1, int n2){
//     for(int i=0;i<n1;i++)
//     {
//         for(int j=0;j<n2;i++)
//         {
//             if(arr1[i] == arr2[j])
//                 return 0;
//         }
//     }
//     return 1;
// }

// int isDisjoint(int arr1[], int arr2[], int n1, int n2){
//     sort(arr1, arr1+n1);
//     sort(arr2, arr2+n2);

//     int i=0,j=0;
//     while(i<n2 && j<n1)
//     {
//         if(arr1[i] < arr2[j]) i++;
//         else if (arr2[j] < arr1[i]) j++;
//         else return 0;
//     }
//     return 1;
// }

int isDisjoint(int arr1[], int arr2[], int n1, int n2){
    set<int> st;
    for(int i=0;i<n1;i++){
        st.insert(arr1[i]); 
    }
    for(int i=0;i<n2;i++){
        if(st.find(arr2[i]) != st.end()){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n1,n2;
    cout<<"Enter Two Value Size for Array 1 and 2: "<<endl;
    cin>>n1>>n2;
    int arr1[n1],arr2[n2];
    for(int i =0;i<n1;i++) cin>>arr1[i];
    for(int i=0;i<n2;i++) cin>>arr2[i];

    if(isDisjoint(arr1, arr2, n1, n2))
        cout<<"Yes";
    else
        cout<<"No";
    
    return 0;
}