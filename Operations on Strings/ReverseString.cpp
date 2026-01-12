//Reverse a String 
#include<bits/stdc++.h>
using namespace std;

// int main(){
//     string str;
//     cin>>str;
//     reverse(str.begin(), str.end());

//     cout<<str;
//     return 0;
// }

int main(){
    string str;
    cin>>str;
    int i,temp,len = str.size();

    for(int i=0;i<len/2;i++)
    {
        temp = str[len-1-i];
        str[len-1-i] = str[i];
        str[i] = temp;
    }
    cout<<str;

    return 0;
}
