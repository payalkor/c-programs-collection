//Kruskal
#include <stdio.h>
#include <stdlib.h>

#define MAX 100  // Maximum number of vertices

// Structure to represent an edge
typedef struct {
    int src, dest, weight;
} Edge;

// Structure to represent a graph
typedef struct {
    int V, E;  // Number of vertices and edges
    Edge edges[MAX];  // Array of edges
} Graph;

// Structure for subset for Union-Find
typedef struct {
    int parent;
    int rank;
} Subset;

// Function to compare two edges by weight (for sorting)
int compareEdges(const void* a, const void* b) {
    return ((Edge*)a)->weight - ((Edge*)b)->weight;
}

// Function to find the root of a set (with path compression)
int find(Subset subsets[], int i) {
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
    return subsets[i].parent;
}

// Function to perform union of two sets (by rank)
void unionSets(Subset subsets[], int x, int y) {
    int rootX = find(subsets, x);
    int rootY = find(subsets, y);

    if (subsets[rootX].rank < subsets[rootY].rank)
        subsets[rootX].parent = rootY;
    else if (subsets[rootX].rank > subsets[rootY].rank)
        subsets[rootY].parent = rootX;
    else {
        subsets[rootY].parent = rootX;
        subsets[rootX].rank++;
    }
}

// Kruskal's Algorithm to find the Minimum Spanning Tree (MST)
void kruskalMST(Graph* graph) {
    int V = graph->V;
    Edge result[MAX];  // Store the final MST edges
    int e = 0;  // Count of edges in MST
    int i = 0;  // Index for sorted edges

    // Step 1: Sort all edges by weight
    qsort(graph->edges, graph->E, sizeof(Edge), compareEdges);

    // Allocate memory for subsets
    Subset subsets[MAX];
    for (int v = 0; v < V; v++) {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }

    // Step 2: Process edges one by one
    while (e < V - 1 && i < graph->E) {
        Edge nextEdge = graph->edges[i++];

        int x = find(subsets, nextEdge.src);
        int y = find(subsets, nextEdge.dest);

        // If including this edge does not form a cycle, include it in MST
        if (x != y) {
            result[e++] = nextEdge;
            unionSets(subsets, x, y);
        }
    }

    // Print the MST
    printf("\nMinimum Spanning Tree (MST) using Kruskal's Algorithm:\n");
    printf("Edge \tWeight\n");
    int totalWeight = 0;
    for (i = 0; i < e; i++) {
        printf("%d - %d \t%d\n", result[i].src, result[i].dest, result[i].weight);
        totalWeight += result[i].weight;
    }
    printf("Total Weight of MST: %d\n", totalWeight);
}

int main() {
    Graph graph;
    printf("Enter number of vertices: ");
    scanf("%d", &graph.V);
    
    printf("Enter number of edges: ");
    scanf("%d", &graph.E);

    printf("Enter edges (src dest weight):\n");
    for (int i = 0; i < graph.E; i++) {
        scanf("%d %d %d", &graph.edges[i].src, &graph.edges[i].dest, &graph.edges[i].weight);
    }

    kruskalMST(&graph);
    
    return 0;
}