//Kth smallest element in a row-column wise sorted matrix 
#include<bits/stdc++.h>
using namespace std;

int countLessEqual(vector<vector<int>> &mat, int mid, int n){
    int count = 0;
    int row = n-1, col = 0;
    
    while(row>=0 && col <n)
    {
        if(mat[row][col] <= mid)
        {
            count += (row+1);
            col++;
        }
        else row--;
    }
    return count;
}

int kthSmallest(vector<vector<int>> &mat, int k){
    int n = mat.size();
    int low = mat[0][0];
    int high = mat[n-1][n-1];

    while(low<high)
    {
        int mid = low + (high - low)/2;
        int count = countLessEqual(mat, mid, n);
        if(count < k) low = mid + 1;
        else high = mid;
    }

    return low;
}

int main(){
    int n, k;
    cout<<"Matrix size: ";
    cin>>n;
    vector<vector<int>> mat(n, vector<int>(n));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }
    cout<<"Enter value of k: ";
    cin>>k;

    int result = kthSmallest(mat, k);

    cout<<k<<"th smallest is: "<<result<<endl;

    return 0;
}