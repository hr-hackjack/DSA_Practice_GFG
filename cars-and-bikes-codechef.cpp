// * Code by : hr-hackjack

#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    int n,x,y;
    cin >> n;
    int a[n];
    
    vector<int> v;
    
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(x%4!=0)
        {
            v.push_pack(x);
        }
    }
    
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>=2)
        {
            cout << v[i]/2 << endl;
        }
    }
    
    

    return 0;
}

