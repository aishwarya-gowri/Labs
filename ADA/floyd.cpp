#include<iostream>
using namespace std;

int min(int a,int b)
{
	if(a<b)
		return a;
	else
		return b;
}


int main()
{
	int n;
	cout<<"Enter the number of nodes:";
	cin>>n;
	int a[10][10];
	int r[n+1][n+1]={0};
	cout<<"Enter the adjacency matrix:";
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
			
		}
	}
	cout<<endl<<"the adjacency matrix is:\n";
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<a[i][j]<<"          ";
			
		}
		cout<<endl;
		
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			r[i][j]=a[i][j];
			
		}
		cout<<endl;
		
	}
	for(int k=1;k<=n;k++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
			
				r[i][j]=min(r[i][j],r[i][k]+r[k][j]);	
				
			}
		}
	}
	cout<<endl<<"The final result:\n";
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<r[i][j]<<"          ";
			
		}
		cout<<endl;
		
	}
	
	
	return 0;
}
