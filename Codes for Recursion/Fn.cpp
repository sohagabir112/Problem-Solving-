//Given an integer N the task is to print the F(N)th term.
#include<iostream>
using namespace std;

// int term(int cal, int cur, int n){
//     int i,curr=1;
//     if(cur == n+1) return 0;

//     for(i = cal; i<cal+cur;i++)
//     {
//         curr *=i;
//     }
//     return curr + term(i, cur+ 1, n);
// }

int term(int cal, int cur, int n){
    int i,result =0;
    while (cur != n+1)
    {
        int curr = 1;
        for( i = cal; i<cal+cur ; i++){
            curr *=i;
        }
        cal = i;
        result += curr;
        cur++;
    }
   return result;
}

int main(){
    int n;
    cin>>n;

    cout<<term(1,1,n);

    return 0;
}