// #include<bits/stdc++.h>
// using namespace std;

// void pattern1(int n){
//     int ch = 0;
//     for(int i=0;i<n;i++){
//         for(int j=n;j>i;j--){
//             cout<<char(65+ ch)<<" ";
//             ch+=1;
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     pattern1(n);

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

void pattern15(int N)
{
      for(int i=0;i<N;i++){
          for(char ch = 'A'; ch<='A'+(N-i-1);ch++){
              cout<<ch<<" ";
              
          }
          cout<<endl;
          
      }
}

int main()
{   
   
    int N = 5;
    pattern15(N);

    return 0;
}
