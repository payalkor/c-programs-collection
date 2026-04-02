#include <stdio.h>
#include <limits.h>

#define MAX 100  // Maximum number of vertices
#define INF INT_MAX  // Represents infinity

// Function to find the vertex with the minimum distance value
int minDistance(int dist[], int visited[], int vertices) {
    int min = INF, min_index = -1;
    
    for (int v = 0; v < vertices; v++) {
        if (!visited[v] && dist[v] < min) {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

// Function to print the shortest distances
void printSolution(int dist[], int vertices) {
    printf("\nVertex\tShortest Distance from Source\n");
    for (int i = 0; i < vertices; i++).
        printf("%d\t%d\n", i, dist[i]);
}

// Dijkstra's Algorithm for shortest path
void dijkstra(int graph[MAX][MAX], int vertices, int src) {
    int dist[MAX];     // Distance from source to each vertex
    int visited[MAX];  // Track visited vertices

    // Initialize all distances to infinity and visited[] to false
    for (int i = 0; i < vertices; i++) {
        dist[i] = INF;
        visited[i] = 0;
    }

    dist[src] = 0;  // Distance to source is 0

    // Find the shortest path for all vertices
    for (int count = 0; count < vertices - 1; count++) {
        int u = minDistance(dist, visited, vertices);
        visited[u] = 1;  // Mark the chosen vertex as processed

        // Update distance of adjacent vertices
        for (int v = 0; v < vertices; v++) {
            if (!visited[v] && graph[u][v] && dist[u] != INF && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    // Print the result
    printSolution(dist, vertices);
}

int main() {
    int vertices, edges, src;
    int graph[MAX][MAX];

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    // Initialize graph with infinity (no direct path)
    for (int i = 0; i < vertices; i++)
        for (int j = 0; j < vertices; j++)
            graph[i][j] = (i == j) ? 0 : INF;

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    printf("Enter edges (from to cost):\n");
    for (int i = 0; i < edges; i++) {
        int from, to, cost;
        scanf("%d %d %d", &from, &to, &cost);
        graph[from][to] = cost; // Directed graph
    }

    printf("Enter the source vertex: ");
    scanf("%d", &src);

    dijkstra(graph, vertices, src);

    return 0;
}