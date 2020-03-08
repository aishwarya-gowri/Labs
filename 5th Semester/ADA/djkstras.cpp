#include<bits/stdc++.h>
using namespace std; 

#define V 5
  

int minDistance(int dist[], bool visited[]) 
{ 
    
    int min = INT_MAX, min_index; 
  
    for (int v = 0; v < V; v++) 
        if (visited[v] == false && dist[v] <= min) 
            min = dist[v], min_index = v;
            
  
    return min_index; 
} 
  

void printSolution(int dist[]) 
{ 
    printf("\nVertex \t\t Distance from Source\n"); 
    for (int i = 0; i < V; i++) 
        printf("%d \t\t %d\n", i, dist[i]); 
} 
  
void dijkstra(int graph[V][V], int src) 
{ 
    int dist[V]; 
    bool visited[V]; 
    for (int i = 0; i < V; i++) 
        dist[i] = INT_MAX, visited[i] = false;    
    dist[src] = 0; 
    for (int count = 0; count < V - 1; count++)
    { 
        int u = minDistance(dist, visited);  
           
        visited[u] = true; 
        for (int v = 0; v < V; v++)
            if (!visited[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) 
                dist[v] = dist[u] + graph[u][v]; 
    } 
  
    
    printSolution(dist); 
} 
  

int main() 
{ 
    
    int graph[V][V] = { { 0,3,0,7,0 }, 
                        { 3,0,4,2,0}, 
                        { 0,4,0,8,6}, 
                        { 7,2,8,0,4 }, 
                        { 0,0,6,4,0}, 
                       }; 
  
    dijkstra(graph, 0); 
  
    return 0; 
} 
