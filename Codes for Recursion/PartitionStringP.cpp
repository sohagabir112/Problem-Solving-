//Find all possible Palindromic Partitions of the given
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int low, int high)
{
    while (low < high)
    {
        if (str[low] != str[high])
            return false;
        low++;
        high--;
    }
    return true;
}

void allPalPartUtil(vector<vector<string>>&allPart, vector<string> &currPart, int start, int n, string str)
{
    if (start >= n)
    {
        allPart.push_back(currPart);
        return;
    }
 
    for (int i=start; i<n; i++)
    {
        if (isPalindrome(str, start, i))
        {
            currPart.push_back(str.substr(start, i-start+1));
 
            allPalPartUtil(allPart, currPart, i+1, n, str);
          
            currPart.pop_back();
        }
    }
}

void allPalPartitions(string str)
{
    int n = str.length();
 
    vector<vector<string> > allPart;
 
    vector<string> currPart;
 
    allPalPartUtil(allPart, currPart, 0, n, str);
 
    for (int i=0; i<allPart.size(); i++ )
    {
        for (int j=0; j<allPart[i].size(); j++)
            cout << allPart[i][j] << " ";
        cout << "\n";
    }
}

int main()
{
    string str = "nitin";
    allPalPartitions(str);
    return 0;
}




// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string str ;
//     cin>>str;
//     for(int i=0;i<str.length();i++)
//     {
//         for(int j=i;j<str.length();j++)
//         {
//             if(i==j)
//                 cout<<str[i]<<endl;
//             else{
//                 string sub1= str.substr(i,j+1);
//                 string sub2= sub1;
//                 reverse(sub1.begin(),sub1.end());
//                 cout<<sub1<<" "<<sub2<<endl;
//                 if(sub1==sub2)
//                     cout<<sub1<<endl;
//                 }
//         }
//     }

// return 0;
// }