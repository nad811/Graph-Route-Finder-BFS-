#include <stdio.h>
#include "../include/graph.h"

void addEdge(int graph[MAX][MAX], int u, int v)
{
    graph[u][v] = 1;
    graph[v][u] = 1;
}

void printGraph(int graph[MAX][MAX])
{
    printf("\nGraph Connections:\n");

    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            if (graph[i][j] == 1)
            {
                printf("%d <-> %d\n", i, j);
            }
        }
    }
}
