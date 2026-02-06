//Print elements in sorted order using row-column wise sorted matrix
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

    int arr[n*n], x=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[x] = mat[i][j];
            x++;
        }
    }
    int size = n*n;

    sort(arr, arr+size);

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}