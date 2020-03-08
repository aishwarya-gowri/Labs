#include<iostream>
using namespace std;

int search(int a[],int n,int k)
{
	int b=0,e=n-1,m;
	while(b<=e)
	{
		m=(b+e)/2;
		if(k==a[m])
			return m;
		else if(k<a[m])
			e=m-1;
		else
			b=m+1;
	}
return -1;
}

int main()
{
	int n,i,k;
	cout<<"Enter the size of the array:";
	cin>>n;
	int a[n];
	cout<<"Enter "<<n<<" elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the element to be found:";
	cin>>k;	
	cout<<"The position of the element "<<k<<" in the array is:";
	cout<<search(a,n,k)<<endl;
	return 0;
}

