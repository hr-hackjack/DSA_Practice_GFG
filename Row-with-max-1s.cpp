class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) 
	{
	  int k=-1,sum=0,sum1=0,j,i;
	  //vector<int> v;
	  
	  for(int i=0;i<n;i++)
	  {
	      j=m-1;
	      sum=0;
	      while(arr[i][j]!=0)
	      {
	          sum=sum+arr[i][j];
	          j--;
	      }
	      
	      if(sum>sum1)
	      {
	          sum1=sum;
	          k=i;
	      }
	  }
	  return k;
	}
};
