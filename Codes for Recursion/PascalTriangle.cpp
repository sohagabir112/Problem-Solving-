//Find the Nth row in Pascal’s Triangle
#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int prev = 1;
//     cout<<prev;

//     for(int i = 1;i<= n;i++)
//     {
//         int cur = (prev * (n - i + 1))/i;
//         cout<<" "<<cur;
//         prev = cur; 
//     }


//     return 0;
// }

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int val = 1;
        for(int j=0;j<=i;j++)
        {
            cout<<val<<" ";
            val = val * (i-j)/(j+1);
        } 
        cout<<endl;
    }
    return 0;
}