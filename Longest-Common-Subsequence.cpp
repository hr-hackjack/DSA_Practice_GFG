//  * Code by : hr-hackjack

#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;


class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        unordered_map <int ,int> m;
        sort(&s1[0],&s1[x-1]);
        sort(&s2[0],&s2[y-1]);
        int k;
        x>y ? k=x : k=y;
        
        
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]==s1[i+1] && i!=x-1)
            {
                continue;
            }
            else
            {
                cout << s1[i] ;
                m[s1[i]]++;
            }
        }
        cout << endl;
        for(int i=0;i<s2.length();i++)
        {
            if(s2[i]==s2[i+1] && i!=y-1)
            {
                continue;
            }
            else
            {
                cout << s2[i];
                m[s2[i]]++;
            }
        }
        cout << endl;
        int sum=0;
        for(int i=0;i<k-1;i++)
        {
          if(m[s2[i]]==2)
          {
              cout << s2[i];
           sum++;   
          }
         // cout << m[s2[i]] <<  " ";
        }
        cout << endl;
        return sum;
    }
};



int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}

// Other Solution

// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     string s;
//     string ss;
//     int n,m;
//     cin>>m;
//     cin>>n;
//     cin>>s;
//     cin>>ss;
//     int lcs[m+1][n+1];
//     for(int i=0;i<=m;i++)
//     {
//         for(int j=0;j<=n;j++)
//         {
//             if(i==0 or j==0)
//             {
//                 lcs[i][j] = 0;
//             }
//             else if(s[i-1]==ss[j-1])
//             {
//                 lcs[i][j] = lcs[i-1][j-1]+1;
//             }
//             else
//             {
//                 lcs[i][j] = max(lcs[i-1][j],lcs[i][j-1]);
//             }
//         }
        

//     }
//             cout<<lcs[m][n]<<"\n";
// }
// int main() {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         solve();
//     }
//     return 0;
// }
