#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for(int i=0;i<n;i++){
        for(char ch = ('A'+n-1)-i;ch<=('A'+n-1);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    pattern1(n);

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// void pattern18(int N)
// {
//       // Outer loop for the no. of rows.
//       for(int i=0;i<N;i++){
          
//           // Inner loop for printing the alphabets from
//           // A + N -1 -i (i is row no.) to A + N -1 ( E in this case).
//           for(char ch =('A'+N-1)-i;ch<=('A'+N-1);ch++){
              
//               cout<<ch<<" ";
//           }
//           cout<<endl;
//       }
// }

// int main()
// {   
//     int N = 5;
    
//     pattern18(N);

//     return 0;
// }