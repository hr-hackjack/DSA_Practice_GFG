//  * Code by : hr-hackjack

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int inSequence(int A, int B, int C){
        
      if(C==0 && A==B)
      {
          return 1;
      }
      if(C==0 && A!=B)
      {
          return 0;
      }
      if(B<A && C>0)
      {
          // cout << "hello" << endl;
          return 0;
      }
      else if(B>A && C<0)
      {
           return 0;
      }
       //cout << B <<" " << A << endl;
       if((B-A)%C==0)
       {
           return 1;
       }
       else
       {
          // cout << 23;
           return 0;
       }
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int A, B, C;
        cin>>A>>B>>C;
        
        Solution ob;
        cout<<ob.inSequence(A, B, C)<<endl;
    }
    return 0;
}  // } Driver Code Ends
