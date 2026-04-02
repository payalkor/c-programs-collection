#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int adj[MAX][MAX], visited[MAX], stack[MAX], top = -1;
int V;

// Function to perform DFS and store nodes in stack
void dfs(int v) {
    visited[v] = 1;
    for (int i = 0; i < V; i++) {
        if (adj[v][i] && !visited[i]) 
            dfs(i);
    }
    stack[++top] = v; // Push node onto stack after recursion
}

// Function to perform Topological Sort
void topologicalSort() {
    for (int i = 0; i < V; i++) visited[i] = 0;

    for (int i = 0; i < V; i++) 
        if (!visited[i]) 
            dfs(i);

    printf("Topological Order: ");
    while (top >= 0) printf("%d ", stack[top--]); // Print from stack
    printf("\n");
}

int main() {
    int E, src, dest;
    printf("Enter number of vertices and edges: ");
    scanf("%d %d", &V, &E);

    for (int i = 0; i < E; i++) {
        printf("Enter edge (src dest): ");
        scanf("%d %d", &src, &dest);
        adj[src][dest] = 1; // Directed edge from src to dest
    }

    topologicalSort();
    return 0;
}