//Check if the given string is Palindrome or not
// #include<iostream>
// using namespace std;

// int main(){
//     string str;
//     cin>>str;
//     int len = str.size();
//     bool isPalindrome = true;
//     for(int i=0;i<len/2;i++)
//     {
//         if(str[i] != str[len-1-i]) 
//         {
//             isPalindrome = false;
//             break;
//         }
//     }
//     if(isPalindrome) cout<<"Palindrome";
//     else cout<<"Not Palindrome";


//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str, str2;
    cin>>str;
    str2 = str;
    reverse(str2.begin(),str2.end());
    if(str == str2) cout<<"Palindrome";
    else cout<<"Not Palindrome";

    return 0;
}