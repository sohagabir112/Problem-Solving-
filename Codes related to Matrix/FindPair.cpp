//Find a specific pair in matrix
#include<bits/stdc++.h>
using namespace std;
#define  N 5

int findMaxValue(int mat[][N]){
    int maxValue = INT_MIN;

    for(int i=0;i<N-1;i++)
    {
        for(int j =0; j<N-1;j++)
        {
            for(int k = i+1; k<N; k++)
            {
                for(int l =j+1;l<N;l++)
                {
                    if(maxValue <(mat[k][l] - mat[i][j]))
                    {
                        maxValue = mat[k][l] - mat[i][j];
                    }
                }
            }
        }
    }

    return maxValue;
}

int main(){
   
    int mat[N][N] = {
        {1, 2, -1, -4, -20},
        {-8, -3, 4, 2, 1},
        {3, 8, 6, 1, 3},
        {-4, -1, 1, 7, -6},
        {0, -4, 10, -5, 1}
    };

    cout<<"Maximum Value is: "<<findMaxValue(mat);

    return 0;
}

//just for max value

// int main(){
   
//     int mat[N][N] = {
//         {1, 2, -1, -4, -20},
//         {-8, -3, 4, 2, 1},
//         {3, 8, 6, 1, 3},
//         {-4, -1, 1, 7, -6},
//         {0, -4, 10, -5, 1}
//     };

//     int max = mat[0][0]; 
//     for(int i=0;i<5;i++)
//     {
//         for(int j=0;j<5;j++)
//         {
//             if(max< mat[i][j])
//             {
//                 max = mat[i][j];
//             }
//         }
//     }
//     cout<<"Maximum Value is: "<<max;

//     return 0;
// }