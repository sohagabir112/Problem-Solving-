//Spiral Traversal of a Matrix
#include<bits/stdc++.h>
#define r 4
#define c 4
using namespace std;

int main(){
    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int left = 0, i, right = c-1, top = 0, bottom = r-1;

    while(left<=right && top<=bottom)
    {
        for(int i=left; i<=right; i++)
        {
            cout<<arr[top][i]<<" ";
        }
        top++;
        for(i=top; i<=bottom; i++)
        {
            cout<<arr[i][right]<<" ";
        }
        right--;

        if(top<=bottom)
        {
            for(int i=right; i>=left; i--)
            {
                cout<<arr[bottom][i]<<" ";
            }
            bottom--;
        }

        if(left<=right)
        {
            for(i=bottom; i>=top; i--)
            {
                cout<<arr[i][left]<<" ";
            }
            left++;
        }
    }

    return 0;
}