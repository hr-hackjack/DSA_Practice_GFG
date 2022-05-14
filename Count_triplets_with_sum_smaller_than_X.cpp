//  * Code by : hr-hackjack
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    int sum1=0;
	    for(int i=0;i<n-2;i++)
	    {
	        for(int j=i+1;j<n-1;j++)
	        {
	            for(int k=j+1;k<n;k++)
	            {
	                if(i<j && j<k && (arr[i]+arr[j]+arr[k])<sum)
	                {
	                   // cout << i << j << k << arr[i] << arr[j] << arr[k] << endl;
	                    sum1++;
	                }
	            }
	        }
	    }
	    return sum1;
	}
		 

};

// { Driver Code Starts.

int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends
