//Find row with maximum no. of 1’s
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter Matrix Size: ";
    cin>>n;
    int mat[n][n];
    cout<<"Enter Element: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) cin>>mat[n][n];
    }
    int max_count=0, index = -1;

    for(int i=0;i<n;i++)
    {
        int count = 0;
        for(int j=0;j<n;j++)
        {
            if(mat[i][j] == 1) count++;
        }
        if(max_count<count) 
        {
            max_count = count;
            index = i;
        }
    }

    cout<<"Index of row with maximum 1s is "<<index;

    return 0;
}