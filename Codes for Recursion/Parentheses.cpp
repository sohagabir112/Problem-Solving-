//Generate all Combinations of Balanced Parentheses
#include<iostream>
#include<vector>
using namespace std;

// int main(){
//     string str;
//     cin>>str;
//     cout<<str<<endl;

//     for(int i=0;i<str.size()/2;i++)
//     {
//         cout<<"{}";
//     }
//     return 0;
// }

// vector <string> generateParenthesis(int n){
//     vector<string> two;
//     vector<string> ans;
//     if(n == 1){
//         two.push_back("{}");
//         return two;
//     }
//     if(n == 2){
//         two.push_back("{{}}");
//         two.push_back("{}{}");
//         return two;
//     }

//     two = generateParenthesis(n-1);

//     for(int i = 0;i<two.size();i++)
//     {
//         string buf = "{", bug = "{", bus = "{" ;
//         buf = buf + two[i] +"}";
//         bug = bug + "}" + two[i];
//         bus = two[i] + bus + "}";
//         ans.push_back(buf);
//         ans.push_back(bus);
//         ans.push_back(bug);
//     }
//     ans.pop_back();

//     return ans;
// }


// int main(){
//     vector <string> ff;
//     int n;
//     cin>>n;
//     ff = generateParenthesis(n);

//     for(int i=0; i<ff.size();++i){
//         cout<<ff[i]<<endl;
//     }
//     return 0;
// }

void generateParenthesis(int n, int open, int close, string s, vector<string> &ans){
    if(open == n && close == n){
        ans.push_back(s);
        return;
    }
    if(open<n){
        generateParenthesis(n,open+1,close,s+"{",ans);
    }
    if(close<open){
        generateParenthesis(n,open,close+1,s+"}",ans);
    }
}

int main(){
    int n;
    cin>>n;

    vector<string> ans;
    generateParenthesis(n,0,0,"",ans);

    for(auto s:ans){
        cout<<s<<endl;
    }
    return 0;
}