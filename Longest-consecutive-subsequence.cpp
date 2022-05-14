//  * Code by : hr-hackjack

#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=12;
    int a[12] = {2,3,1,12,23,24,25,26,27,28,31,32};
    int sum = 0,k=0,k1=0;
    
    sort(a,a+n);
    
    for(int i=0;i<n-1;i++)
    {
       if(a[i+1]-a[i]==1)
       {
           k++;
       }
       else
       {
           if(sum<k)
           {
               sum=k;
           }
           k=0;
           
       }
    }
    
    cout << sum+1;
    return 0;
}
