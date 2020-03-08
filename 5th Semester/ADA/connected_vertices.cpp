#include<bits/stdc++.h>
using namespace std;
int v,e,m,n;
int c=0;
void dfs(int x,int k[],int b[][10])
{
	c++;
	k[x]=1;
	for(int j=0;j<n;j++)
	{
			if(b[x][j]==1)
			{
					
				if(k[j]==0)
				{
					cout<<j<<" ";
					dfs(j,k,b);
				}
			}
	}		
	cout<<endl;
	
return;
}

int main()
{
	
	cout<<"Enter number of vertices:";
	cin>>v;
	int a[v][10]={-1};
	int visited[v]={0};
	cout<<"Enter the number of edges:";
	cin>>e;
	cout<<"Enter the start and end vertices of all edges:"<<endl;
	for(int i=0;i<e;i++)
	{
		cout<<"Enter start point for "<<i<<":";
		cin>>m;
		cout<<"Enter end point for "<<i<<":";
		cin>>n;
		a[m][n]=1;
		a[n][m]=1;
		
	}
	for(int i=0;i<v;i++)
	{
		if(visited[i]==0)
		{
			cout<<i<<" ";
			dfs(i,visited,a);
		}
	}
	cout<<endl;
return 0;
}
