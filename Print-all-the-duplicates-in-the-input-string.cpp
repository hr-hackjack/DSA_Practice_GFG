//  * Code by : hr-hackjack

#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s= "geeksforgeeks";
    int n=s.length();
    
    unordered_map<int,int> m;
    
    for(int i=0;i<s.length();i++)
    {
        m[s[i]]++;
    }
    sort(&s[0],&s[n]-1);
    char a;
    for(int i=0;i<s.length();i++)
    {
        if(m[s[i]]>1 && a!=s[i])
        {
            cout << s[i] << " is repeated thsese many times " << m[s[i]] << endl; 
            a=s[i];
        }
    }
    return 0;
}

