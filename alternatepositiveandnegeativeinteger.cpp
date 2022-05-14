
//* Code by : hr-hackjack

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[9] = {9, 4, -2, -1, 5, 0, -5, -3, 2};
    int n=9;
    
    vector<int> v1,v2;
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            v1.push_back(a[i]);
        }
        
        else if(a[i]<0)
        {
            v2.push_back(a[i]);
        }
    }
    
    int k1=0,k2=0;
    
    for(int i=0;i<n;i++)
    {
        if(i%2!=0 && k1!=v2.size())
        {
            a[i]=v2[k1];
            k1++;
        }
        else
        {
            a[i]=v1[k2];
            k2++;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    

    return 0;
}

