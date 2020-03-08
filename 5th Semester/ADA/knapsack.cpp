#include<bits/stdc++.h>
using namespace std;

int max(int x,int y)
{
	if(x>y)
		return x;
	else
		return y;
}
int main()
{
	int x,c;
	cout<<"Enter the number of items:";
	cin>>x;
	int a[x][2];
	for(int i=1;i<=x;i++)
	{	
		cout<<"Enter the weights and value for item"<<i<<":";
		cin>>a[i][0]>>a[i][1];
	}
	cout<<"Enter the capacity of the sack:";
	cin>>c;
	int v[x+1][c+1]={0};
	for(int i=0;i<=x;i++)
	{
		for(int j=0;j<=c;j++)
		{
			if((i==0)||(j==0))
				v[i][j]=0;
			else if(j-a[i][0]>=0)
				v[i][j]=max(v[i-1][j],a[i][1]+v[i-1][j-a[i][0]]);
			else
				v[i][j]=v[i-1][j];
			//cout<<v[i][j]<<" ";
		}
		//cout<<endl;
	}
	
	cout<<v[x][c]<<endl;			
	return 0;
}
