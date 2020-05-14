/*
Given an N * M 2D binary matrix, the task is to find the count of columns
having odd number of 1s.
*/
#include<bits/stdc++.h>
using namespace std;
bool odd(int n)
{
	if (n%2==0)
	{
		return false;
	}
	else
	{
		return true;
	}
}
int main()
{
	int r,c,count=0,i,j;
	cout<<"\nEnter number of rows : ";
	cin>>r;
	cout<<"\nEnter number of columns : ";
	cin>>c;
	int arr[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		
			cin>>arr[i][j];
		}
	}
	for(i=0;i<c;i++)
	{
		int c=0;
		for(j=0;j<r;j++)
		{
			if(arr[j][i]==1)
			{
				c++;
			}
		}
		if(odd(c))
		{
			count++;
		}
	}
	cout<<"Total number of columns having odd number of 1's is : "<<count<<endl;
}
	
