//  * Code by : hr-hackjack
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        
        unordered_map<int,int> m;
        int *arr1 = new int[2];
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        
        for(int i=0;i<n;i++)
        {
            if(m[arr[i]]==2)
            {
                arr1[0]=arr[i];
                break;
            }
        }
        
        sort(arr,arr+n);
        //cout << arr[0] << endl;
        int sum=0;
        if(arr[0]!=1)
        {
           arr1[1]=1;
        }
        else
        {
            for(int i=0;i<n-1;i++)
            {
                if(arr[i+1]-arr[i]>1)
                {
                    arr1[1]=arr[i]+1;
                    break;
                }
                sum++;
            }
        }
        if(sum==n-1)
        {
            arr1[1]=n;
        }
        
        // for(int i=0;i<2;i++)
        // {
        //     cout << arr1[i] << endl;
        // }
        return arr1;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends
