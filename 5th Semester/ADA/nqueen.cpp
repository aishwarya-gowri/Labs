#include<bits/stdc++.h> 
using namespace std;
int N;  
void printSolution(int board[][100]) 
{ 
    static int k = 1; 
    printf("%d.)\n",k++); 
    for (int i = 0; i < N; i++) 
    { 
        for (int j = 0; j < N; j++) 
            printf(" %d ", board[i][j]); 
        printf("\n"); 
    } 
    printf("\n"); 
}  

bool isSafe(int board[][100], int row, int col) 
{ 
    int i, j;   
    for (i = 0; i < col; i++) 
        if (board[row][i]) 
            return false;    
    for (i=row, j=col; i>=0 && j>=0; i--, j--) 
        if (board[i][j]) 
            return false;   
    for (i=row, j=col; j>=0 && i<N; i++, j--) 
        if (board[i][j]) 
            return false; 
    return true; 
} 
bool solveNQUtil(int board[][100], int col) 
{  
    if (col == N) 
    { 
        printSolution(board); 
        return true; 
    }   
    bool res = false; 
    for (int i = 0; i < N; i++) 
    {  
        if ( isSafe(board, i, col) ) 
        {       
            board[i][col] = 1;           
            res = solveNQUtil(board, col + 1) || res;   
            board[i][col] = 0; 
        } 
    }  
    return res; 
} 
  
void solveNQ() 
{ 
    int board[100][100]={0};   
    if (solveNQUtil(board, 0) == false) 
    { 
        printf("Solution does not exist"); 
        return ; 
    }   
    return ; 
} 
  
int main() 
{ 
    cout<<"Enter the value of N:";
    cin>>N;
    solveNQ(); 
    return 0; 
} 
