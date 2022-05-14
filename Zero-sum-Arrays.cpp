//  * Code by : hr-hackjack

#include<bits/stdc++.h>
using namespace std;
#define ll long long

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        
        int sum=0,j=0,sum1=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                sum++;
            }
            j=i;
            sum1=arr[j];
            j++;
            while(j<n)
            {
                sum1=sum1+arr[j];
                if(sum1==0)
                {
                    sum++;   
                }
                j++;
            }
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
        int n;
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}  // } Driver Code Ends
