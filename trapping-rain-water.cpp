//  * Code by : hr-hackjack

#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int main()
{
    int n=4,k,a=0,b=0;
    int arr[4]= {7,4,0,9};
    
   long long ma = arr[0],sum=0;
       long long mi = arr[n-1];
       
       long long int l[n],r[n];
       
       for(int i=0;i<n;i++)
       {
           l[i] = max(ma,arr[i]);
       }
       
       for(int i=n-1;i!=0;i--)
       {
           r[i] = max(arr[i],mi);
       }
       
       for(int i=0;i<n;i++)
       {
           sum = sum+(min(l[i],r[i])-arr[i]);
       }
    

    cout << a << " " << b;
    return 0;
}

