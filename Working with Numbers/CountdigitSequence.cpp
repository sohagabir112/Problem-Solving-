/*The decoding programs are the most possible questions 
asked and are largely practiced in C  programming. The 
program counts the number of possible decoding’s of the 
entered digit by the user of the given sequence.
For example :- if the digit sequence is “12” then there 
are two possible decoding’s for this – One of them is ‘AB’ 
when we decode 1 as ‘A’ and 2 as ‘B’. Now we can also 
decode this digit sequence “12” as ‘L’ when we decode 
digits 1 and 2 taken together as an integer 12*/

#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int decodeString(char *s , int n){
    int cnt[n+1];
    cnt[0]=1;
    cnt[1]=1;

    for(int i=2;i<=n;i++)
    {
        cnt[i]=0;
        if(s[i-1] >'0') cnt[i] = cnt[i-1];
        if(s[i-2] == '1' || (s[i-2 == '2'] && s[i-1] <'7'))
        {
            cnt[i] += cnt[i-2];
        } 
    }
    return cnt[n];
}

int main(){
    char s[15];
    cin>>s;
    int n = strlen(s)-1;
    cout<<"Possible count of decoding of the sequence: "<<decodeString(s,n);
    return 0;
}