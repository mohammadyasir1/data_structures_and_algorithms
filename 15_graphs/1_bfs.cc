#include <bits/stdc++.h>
using namespace std;
 
// This class represents a directed graph using
// adjacency list representation
class Graph {
 
    // No. of vertices
    int V;
 
    // Pointer to an array containing adjacency lists
    vector<list<int> > adj;
 
public:
    // Constructor
    Graph(int V);
 
    // Function to add an edge to graph
    void addEdge(int v, int w);
 
    // Prints BFS traversal from a given source s
    void BFS(int s);
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj.resize(V);
}
 
void Graph::addEdge(int v, int w)
{
    // Add w to v’s list.
    adj[v].push_back(w);
}
 
void Graph::BFS(int s)
{
    // Mark all the vertices as not visited
    vector<bool> visited;
    visited.resize(V, false);
 
    // Create a queue for BFS
    list<int> queue;
 
    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push_back(s);
 
    while (!queue.empty()) {
 
        // Dequeue a vertex from queue and print it
        s = queue.front();
        cout << s << " ";
        queue.pop_front();
 
        // Get all adjacent vertices of the dequeued
        // vertex s.
        // If an adjacent has not been visited,
        // then mark it visited and enqueue it
        for (auto adjacent : adj[s]) {
            if (!visited[adjacent]) {
                visited[adjacent] = true;
                queue.push_back(adjacent);
            }
        }
    }
}
 
// Driver code
int main()
{
    // Create a graph given in the above diagram
    Graph g(18);
    g.addEdge(1, 2);
    g.addEdge(1, 6);
    g.addEdge(2, 1);
    g.addEdge(2, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 2);
    g.addEdge(4, 2);
    g.addEdge(4, 5);
    g.addEdge(5, 4);
    g.addEdge(5, 8);
    g.addEdge(6, 1);
    g.addEdge(6, 7);
    g.addEdge(6, 9);
    g.addEdge(7, 6);
    g.addEdge(7, 8);
    g.addEdge(8, 5);
    g.addEdge(8, 7);
    g.addEdge(9, 6);

    cout << "Following is Breadth First Traversal\n";
    g.BFS(1);
 
    return 0;
}
