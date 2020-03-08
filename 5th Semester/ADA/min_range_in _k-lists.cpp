#include <bits/stdc++.h> 
using namespace std;   
#define N 5 
int ptr[100]; 
  
void findSmallestRange(int arr[][N], int n, int k) 
{ 
      int i,minval,maxval,minrange,minel,maxel,flag,minind;       
      for(i = 0;i <= k;i++)  
        ptr[i] = 0; 
  
      minrange = INT_MAX; 
        
      while(1)        
      { 
            
          minind = -1;  
          minval = INT_MAX; 
          maxval = INT_MIN; 
          flag = 0;   
          
          for(i = 0;i < k;i++)    
          {                     
              if(ptr[i] == n)    
              { 
                flag = 1; 
                break; 
              } 
					/*{4, 7, 9, 12, 15}, 
                    {0, 8, 10, 14, 20}, 
                    {6, 12, 16, 30, 50}*/ 
              if(ptr[i] < n && arr[i][ptr[i]] < minval)   
              { 
                  minind=i;  
                  minval=arr[i][ptr[i]]; 
              } 
              
              if(ptr[i] < n && arr[i][ptr[i]] > maxval)     
              { 
                  maxval = arr[i][ptr[i]]; 
              } 
          } 
  
          
          if(flag)  
            break; 
  
          ptr[minind]++; 
  
         
          if((maxval-minval) < minrange)   
          { 
              minel = minval; 
              maxel = maxval; 
              minrange = maxel - minel; 
          } 
      } 
        
      printf("The smallest range is [%d , %d]\n",minel,maxel); 
}     
  

int main() 
{ 
    int arr[][N] = { 
                    {4, 7, 9, 12, 15}, 
                    {0, 8, 10, 14, 20}, 
                    {6, 12, 16, 30, 50} 
                    };
	
//	cout<<"Enter the size of each list:";
//	cin>>n;
//	cout<<"Enter the number of lists:";
//	cin>>k;
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<)
//	}
    int k = sizeof(arr)/sizeof(arr[0]); 
   
    findSmallestRange(arr,N,k); 
   
    return 0; 
} 