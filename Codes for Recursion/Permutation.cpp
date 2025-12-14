//Print All Permutations of a String using Recursion in C++
//#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void Permute(string str, int len, int r ){
//     if(len == r) cout <<str<<" ";
//     else{
//         for(int i = len; i<=r;i++)
//         {
//             swap(str[len], str[i]);
//             Permute(str,len+1,r);
//             swap(str[len], str[i]);
//         }
//     }
// }

void Permute(string str){
    sort(str.begin(), str.end());

    do{
        cout<<str<<" ";
    }while(next_permutation(str.begin(), str.end()));
}

int main(){
    string str;
    cin>>str;
    // int len = str.length();
    // Permute(str, 0 ,len -1);

    Permute(str);

    return 0;
}