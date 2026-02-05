//Rotate a matrix by 90 degree in clockwise direction
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter matrix size: ";
    cin>>n;
    int mat[n][n];
    cout<<"Enter Element: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) cin>>mat[i][j];
    }

    for(int i=0; i<n;i++)
    {
        for(int j=0;j=n/2;j++)
        {
            swap(mat[i][j], mat[i][n-j-1]);
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}