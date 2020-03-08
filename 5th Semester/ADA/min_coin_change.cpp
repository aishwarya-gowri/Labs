#include<bits/stdc++.h>
using namespace std;

int main()
{
	int A,p,count=0,i=-1,n,k=-1;
	cout<<"Enter the amount:";
	cin>>A;
	int c[A+1]={0};
	cout<<"Enter the number of denominations:";
	cin>>n;
	cout<<"Enter the denominations:";
	int d[n],coins[A];
	for(int i=0;i<n;i++)
	{
		cin>>d[i];	
	}
	for(int i=0;i<n;i++)
	{
	cout<<d[i];
	}
	for(p=1;p<=A;p++)
	{
		count=0;
		memset(coins,0,A);
		while(p)
		{
			//cout<<"p:"<<p<<"p-d:"<<p-d[2]<<" ";
			if(p-d[2]>=0)
			{
				count++;
				coins[++i]=d[2];
				p=p-d[2];
				//cout<<"hi1 ";
			}
			else if(p-d[1]>=0)
			{
				count++;
				coins[++i]=d[1];
				p=p-d[1];
				//cout<<"hi2 ";
				
			}
			else if(p-d[0]>=0)
			{
				count++;
				coins[++i]=d[0];
				p=p-d[0];
				//cout<<"hi3 ";
			}
			//cout<<count<<" ";
		}
		c[++k]=count;
	}
	cout<<endl;
	for(int j=0;j<=k;j++)
	{
		cout<<c[j]<<"";
	}
	cout<<endl<<"Minimum coins required:"<<count<<endl;
	for(int j=0;j<=i;j++)
	{
		cout<<coins[j]<<" ";
	}
    
	cout<<endl;
}
		
