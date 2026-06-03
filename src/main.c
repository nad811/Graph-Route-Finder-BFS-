#include <stdio.h>
#include "../include/graph.h"
#include "../include/bfs.h"

int main()
{
    int graph[10][10] = {0};
    int n, choice, u, v, start;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    do
    {
        printf("\n--- Graph Menu ---\n");
        printf("1. Add Edge\n");
        printf("2. Print Graph\n");
        printf("3. BFS Traversal\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter edge (u v): ");
            scanf("%d %d", &u, &v);
            addEdge(graph, u, v);
            break;

        case 2:
            printGraph(graph);
            break;

        case 3:
            printf("Enter start node: ");
            scanf("%d", &start);
            bfs(graph, start, n);
            break;

        case 4:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice\n");
        }

    } while (choice != 4);

    return 0;
}
