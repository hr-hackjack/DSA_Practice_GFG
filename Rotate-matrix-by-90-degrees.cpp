//  * Code by : hr-hackjack
int main()
{
    int arr[N][N] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };
    rotate90Clockwise(arr);
    return 0;
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	int m;
	cin >> n >> m;
	int arr[n][m],arr1[n][m];
	vector<int> v;
	
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<m;j++)
	    {
	        cin >> arr[i][j];
	        v.push_back(arr[i][j]);
	    }
	}
	
	int k=0;
	for(int i=n-1;i>=0;i--)
	{
	    for(int j=0;j<m;j++)
	    {
	        arr1[j][i] = v[k];
	        k++;
	    }
	}
	
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<m;j++)
	    {
	        cout << arr1[i][j] << " ";
	    }
	    cout << endl;
	}
	
	
	return 0;
}
