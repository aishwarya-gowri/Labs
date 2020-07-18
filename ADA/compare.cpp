#include <bits/stdc++.h> 
using namespace std;  
  
void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  
int merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k,count=0; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    
    int L[n1], R[n2]; 
  
   
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
   
    i = 0; 
    j = 0; 
    k = l; 
    count++;
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
return count;
} 
  
int p;
int mergeSort(int arr[], int l, int r) 
{ 
int x;    
if (l < r) 
    { 
        
        int m = l+(r-l)/2; 
  	p++;
        
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        x=merge(arr, l, m, r); 
    } 
return p*x;
} 
 
int bubblesort(int arr[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			count++;			
			if(arr[i]>arr[j])
			{
				swap(&arr[i],&arr[j]);
				
			}	
		}
	}
	return count;
} 
int selectionsort(int arr[],int n)
{
	int count=0,min,i,j;
	for(int i=0;i<n;i++)
	{
		min=i;		
		for(int j=i+1;j<n;j++)
		{
			count++;			
			if(arr[min]>arr[j])
			{
				min=j;
			}	
		}
		if(min!=arr[i])
			swap(&arr[i],&arr[j]);
	}
	return count;
} 

int main() 
{ 
     int n=100,i,t;
	int arr[100];
	for(i=0;i<100;i++)
	{
		arr[i]=rand();
	}
  	
    int x=mergeSort(arr, 0, n - 1); 
    int y=bubblesort(arr,n);
    int z=selectionsort(arr,n);
  
    cout<<"mergesort:"<<x;
cout<<endl;
cout<<"bubblesort:"<<y;
cout<<endl;
cout<<"selectionsort:"<<z;
cout<<endl;
    return 0; 
} 
