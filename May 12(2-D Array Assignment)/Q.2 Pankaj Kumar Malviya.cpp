/*Search in a row wise and column wise sorted matrix. Given an n x n matrix
and a number x, find the position of x in the matrix if it is present in it.
Otherwise, print “Not Found”. In the given matrix, every row and column is
sorted in increasing order. The designed algorithm should have linear time
complexity.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r,count=0,i,j;
	cout<<"\nEnter size of nxn matrix : ";
	cin>>r;
	int arr[r][r];
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			
			cin>>arr[i][j];
		}
	}
	int n;
	cout<<"Enter number for search : ";
	cin>>n;
	i=0;
	j=0;
	int f=0;
	while(i<r && j<r)
	{
		if(arr[i][j]==n)
		{
			cout<<"Number found at position ("<<i<<" , "<<j<<")"<<endl;
			f=1;
			break;
		}
		if(arr[i][j+1]<n && j+1<r)
		{
			j=j+1;
		}
		else
		{
			i=i+1;
		}
	}
	if(f==0)
	{
		cout<<"Number not found"<<endl;
	}
}
