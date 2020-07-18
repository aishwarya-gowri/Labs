#include<iostream>
using namespace std;

int max(int a[],int n)
{
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];	
	}
return max;
}

int main()
{
	int n,i;
	cout<<"Enter the size of the array:";
	cin>>n;
	int a[n];
	cout<<"Enter "<<n<<" elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"The maximum is:"<<max(a,n)<<endl;	
}

