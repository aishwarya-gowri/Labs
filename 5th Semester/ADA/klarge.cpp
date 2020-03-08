#include<iostream>
using namespace std;
int main()
{
	int i,j,n,k;
	cout<<"Enter the size:";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cout<<"Enter:";
		cin>>a[i];
	}
	cout<<"Enter the value for 'k':";
	cin>>k;
	cout<<"the "<<k<<" largest elements are:";
	for(i=0;i<k;i++)
	{
		int max=i;		
		for(j=i+1;j<n;j++)
		{
			if(a[max]<a[j])
			{
				max=j;
			}
		}
		if(a[i]!=a[max])
		{
			int t;
			t=a[i];
			a[i]=a[max];
			a[max]=t;
		}
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
}

