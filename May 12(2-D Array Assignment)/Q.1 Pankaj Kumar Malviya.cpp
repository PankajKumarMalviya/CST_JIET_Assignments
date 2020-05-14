/*Given a M x N matrix mat[][], the task is to count the number of cells which
have the sum of its adjacent cells equal to a prime number. For a cell x[i][j],
only x[i+1][j], x[i-1][j], x[i][j+1] and x[i][j-1] are the adjacent cells.
*/
#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
	int f=0;
	for(int i=2;i<=(n/2);i++)
	{
		if(n%i==0)
		{
			f=1;
			break;
		}
	}
	if(f==1)
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
			cout<<"\n Enter element : "<<i+1<<j+1<<" : ";
			cin>>arr[i][j];
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			int sum=0;
			if(i+1<r)
			{
				sum += arr[i+1][j];
			}
			if(i-1>=0)
			{
				sum += arr[i-1][j];
			}
			if(j+1<c)
			{
				sum += arr[i][j+1];
			}
			if(j-1>=0)
			{
				sum += arr[i][j-1];
			}
			if(prime(sum))
			{
				count++;
			}
			
		}
	}
	cout<<"Result = "<<count<<endl;
}
