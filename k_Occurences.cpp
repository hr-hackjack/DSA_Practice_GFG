//  * Code by : hr-hackjack

#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=8,k=4,cha=256,sum=0,sum1=0;
    int a[8]= {3,1,2,2,1,2,3,3};
    sort(a,a+n);
    vector<int> v;
    
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            sum++;
        }
        else
        {
            v.push_back(sum+1);
            sum=0;
        }
    }
    
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>n/k)
        {
            sum1++;
        }
    }
    
    cout << sum1;
    
    return 0;
}
