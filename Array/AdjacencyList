#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Graph {
    int vertices;
    struct Node** adjList;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Graph* createGraph(int vertices) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->vertices = vertices;
    graph->adjList = (struct Node**)malloc(vertices * sizeof(struct Node*));
    for (int i = 0; i < vertices; ++i) {
        graph->adjList[i] = NULL;
    }
    return graph;
}

// Function to add an edge to an undirected graph
void addEdge(struct Graph* graph, int src, int dest) {
    // Add an edge from src to dest
    struct Node* newNode = createNode(dest);
    newNode->next = graph->adjList[src];
    graph->adjList[src] = newNode;
    // Since the graph is undirected, add an edge from dest to src as well
    newNode = createNode(src);
    newNode->next = graph->adjList[dest];
    graph->adjList[dest] = newNode;
}

void insertNode(struct Graph* graph, int newNode, int existingNode) {
    struct Node* newNodePtr = createNode(newNode);
    newNodePtr->next = graph->adjList[existingNode];
    graph->adjList[existingNode] = newNodePtr;
}

// Function to delete a node from the adjacency list
void deleteNode(struct Graph* graph, int nodeToDelete) {
    // Traverse each adjacency list and delete the node if found
    for (int i = 0; i < graph->vertices; ++i) {
        struct Node* current = graph->adjList[i];
        struct Node* prev = NULL;
        // Traverse the adjacency list for the current vertex
        while (current != NULL && current->data != nodeToDelete) {
            prev = current;
            current = current->next;
        }
        // If the node is found, delete it
        if (current != NULL) {
            if (prev == NULL) {
                // If the node to be deleted is the first node in the list
                graph->adjList[i] = current->next;
            } else {
                // If the node to be deleted is not the first node
                prev->next = current->next;
            }
            // Free the memory allocated for the node
            free(current);
        }
    }
}

void printGraph(struct Graph* graph) {
    for (int i = 0; i < graph->vertices; ++i) {
        struct Node* current = graph->adjList[i];
        printf("Adjacency list of vertex %d: ", i);
        while (current) {
            printf("%d -> ", current->data);
            current = current->next;
        }
        printf("NULL\n");
    }
}

int main() {
    int vertices, edges, delete, insert;
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);
    printf("Enter the number of edges: ");
    scanf("%d", &edges);
    struct Graph* graph = createGraph(vertices);
    for (int i = 0; i < edges; ++i) {
        int src, dest;
        printf("Enter edge %d (source, destination): ", i + 1);
        scanf("%d %d", &src, &dest);
        addEdge(graph, src, dest);
    }

    // Print the adjacency list
    printf("\nOriginal Graph:\n");
    printGraph(graph);

    printf("\nEnter the new node to insert: ");
    scanf("%d", &insert);
    printf("Enter the existing node to connect the new node to: ");
    scanf("%d", &vertices);  // Reuse 'vertices' variable for the existing node
    insertNode(graph, insert, vertices);
    printf("\nGraph after inserting node %d connected to node %d:\n", insert, vertices);
    printGraph(graph);

    printf("Enter the node to delete: ");
    scanf("%d", &delete);
    deleteNode(graph, delete);
    printf("\nGraph after deleting node %d:\n", delete);
    printGraph(graph);

    return 0;
}
