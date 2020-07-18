#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string x,y;
	int m,n,count;
	cout<<"Enter string1:";
	getline(cin,x);
	cout<<"Enter string2:";
	getline(cin,y);
	m=x.length();
	n=y.length();
	
	int a[m+1][n+1]={-1};
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if((i==0)||(j==0))
				a[i][j]=0;
			else if(x[i-1]==y[j-1])
			{	a[i][j]=a[i-1][j-1]+1;cout<<x[i-1];}
			else
				a[i][j]=max(a[i-1][j],a[i][j-1]);
			//cout<<a[i][j]<<"  ";
		}
		//cout<<endl;
	}
	cout<<endl<<"length:"<<a[m][n]<<endl;
	return 0;
}
