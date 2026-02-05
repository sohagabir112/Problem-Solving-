
#include<bits/stdc++.h>
using namespace std;
#define N 5
#define M 4

void printCommonElement(int mat[M][N]){
    unordered_map<int, int> mp;

    for(int j=0; j<N; j++) mp[mat[0][j]] = 1;

    for(int i=0;i<M; i++)
    {
        for(int j=0;j<N;j++)
        {
            if(mp[mat[i][j]] == i)
            {
                mp[mat[i][j]] = i+1;

                if(i==M-1 && mp[mat[i][j]] == M)
                {
                    cout<<mat[i][j]<<" ";
                }
            }
        }
    }
}


int main(){
    // int n;
    // cout<<"Enter Size of Matrix: ";
    // cin>>n;
    // int mat[n][n];
    // cout<<"Enter element: "<<endl;
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<n; j++)
    //     {
    //         cin>>mat[i][j];
    //     }
    // }


    int mat[M][N] = {
        {10, 20, 10, 40, 80},
        {30, 70, 80, 50, 10},
        {80, 70, 70, 30, 10},
        {80, 10, 20, 70, 90}
    };
    

    printCommonElement(mat);

    return 0;
}
