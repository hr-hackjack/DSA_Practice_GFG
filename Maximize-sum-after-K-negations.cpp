//  * Code by : hr-hackjack

#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    long long int maximizeSum(long long int a[], int n, int k)
    {
        sort(a,a+n);
        //reverse(a,a+n);
        int sum1=0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]<0 && k!=0)
            {
                a[i]=a[i]*(-1);
                k--;
                sum1++;
            }
            
            else if(a[i]>0 && k!=0)
            {
                if(k%2!=0)
                {
                    a[i]=a[i]*(-1);
                    break;
                }
            }
            
            if(k==0)break;
        }
        
        if(sum1==n && k!=0)
        {
            if(k%2!=0)
            {
               a[n-1]=a[n-1]*(-1); 
            }
        }
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
        
        return sum;
    }
};

// { Driver Code Starts.
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n, k;
         cin>>n>>k;
         long long int a[n+5];
         for(int i=0;i<n;i++)
         cin>>a[i];
         Solution ob;
         cout<<ob.maximizeSum(a, n, k)<<endl;
     }
	
	return 0;

