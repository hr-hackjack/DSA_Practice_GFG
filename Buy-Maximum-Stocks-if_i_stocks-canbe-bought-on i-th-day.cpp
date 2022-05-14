// * Code by : hr-hackjack

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=3,k=100,sum=0;
   // cin >> n;
    int arr[n]={7,10,4};
    vector<int> v;
    // for(int i=0;i<n;i++)
    // {
    //     cin >> a[i];
    // }
    //cin >> k;
    for(int i=0;i<n;i++)
    {
        if(k>arr[i]*(i+1))
        {
            v.push_back(i+1);
        }
        else if(k<arr[i]*(i+1))
        {
            v.push_back(k/arr[i]);
        }
        
        if(k<arr[i])
        {
            break;
        }
        //cout << k << endl;
        k=k-arr[i]*(i+1);
    }
    
    for(int i=0;i<v.size();i++)
    {
        sum=sum+v[i];
    }
    
   cout << sum;
    
     

    return 0;
}
