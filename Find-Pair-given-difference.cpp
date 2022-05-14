// * Code by : hr-hackjack
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends


bool findPair(int a[], int n, int x){
    
    unordered_map<int,int> m;
    int f=-1;
    for(int i=0;i<n;i++)
    {
        m[a[i]] = 1;
    }
    for(int i=0;i<n;i++)
    {
        if(m[a[i]+x])
        {
            return true;
            break;
        }
    }
    return false;
    
}
