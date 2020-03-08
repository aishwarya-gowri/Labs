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
	for(i=0;i<k;i++)
	{
		int min=i;		
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
		}
		if(a[i]!=a[min])
		{
			int t;
			t=a[i];
			a[i]=a[min];
			a[min]=t;
		}
	}
	cout<<a[k-1]<<endl;
}

