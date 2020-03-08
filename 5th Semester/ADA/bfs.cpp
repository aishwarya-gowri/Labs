#include<iostream> 
#include <list> 
#include<vector>
  
using namespace std; 
  
class Graph 
{ 
    int V;    
    list<int> *adj;    
public: 
    Graph(int V) 
    { 
    	this->V = V; 
    	adj = new list<int>[V]; 
	}  
    void addEdge(int v, int w)
    { 
    	adj[v].push_back(w);
	}   
    void BFS(int s)  
	{ 
    
		int visited[V] ={0}; 
	 	list<int> queue;  
		visited[s] = 1; 
		queue.push_back(s);   
		list<int>::iterator i; 
	  
		while(!queue.empty()) 
		{
		    s = queue.front(); 
		    cout << s << " "; 
		    queue.pop_front(); 	   
		    for (i = adj[s].begin(); i != adj[s].end(); ++i) 
		    { 
		        if (!visited[*i]) 
		        { 
		            visited[*i] = true; 
		            queue.push_back(*i); 
		        } 
		    } 
		} 
	} 
}; 

  

int main() 
{ 
    int n,e;
    cout<<"Enter the number of vertices:";
    cin>>n;
    Graph g(n);
    cout<<"Enter the number of edges:";
    cin>>e;
	for(int i=0;i<e;i++)
	{ 
		int m,n;
		cout<<"Enter the start and end for edge "<<i+1<<":";
		cin>>m>>n;
		g.addEdge(m,n);
	}
		
    cout << "Breadth First Traversal:"; 
    g.BFS(1); 
    cout<<endl;
  
    return 0; 
} 
