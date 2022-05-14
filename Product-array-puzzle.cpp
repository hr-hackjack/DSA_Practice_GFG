// * Code by : hr-hackjack

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
       long long int sum=1,sum2=0;
       vector<long long int> v;
       for(int i=0;i<n;i++)
       {
           sum=sum*nums[i];
           if(nums[i]==0)
           {
               sum2++;
           }
       }
       long long int sum1=1,a=0;
       
       if(sum2<2)
       {
           for(int i=0;i<n;i++)
       {
           if(nums[i]==0)
           {
              continue;
           }
           sum1=sum1*nums[i];
          // cout << sum1 << " ";
       }
       }
       else if(sum2>1)
       {
          for(int i=0;i<n;i++)
          {
              v.push_back(0);
          }
          
          return v;
       }
       //cout << endl;
       //cout << sum <<  " " << sum1 << endl;
       
       
       for(int i=0;i<n;i++)
       {
          if(nums[i]==0)
          {
             v.push_back(sum1);
             continue;
          }
          // cout << sum/nums[i];
           v.push_back(sum/nums[i]);
       }
       
       return v;
       
       
    }
};


// { Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends
