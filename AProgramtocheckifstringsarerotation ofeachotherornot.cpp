//  * Code by : hr-hackjack

#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int arr(string s1,string s2)
{
    int j=0;
    for(int i=0;i<s1.length();i++)
    {
       if(s1[i]==s2[j])
       {
           j++;
       }
       else if(s1[i]!=s2[j])
       {
           j=0;
       }
       
       if(j==s2.length())
       {
           return 1;
       }
    }
    return 0;
}

int main()
{
    string s2="APPLE";
    string s1="ACDAVDGTTRHAPLEGNFGNXH";
    
    s1=s1+s1;
    
    cout << arr(s1,s2);
    
    return 0;
}

