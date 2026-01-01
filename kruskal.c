#include <stdio.h>
#include <stdlib.h>
    
#define MAX 20
struct Edge {
    int u, v, w;
};

struct Edge edge[MAX];
int parent[MAX];
int n, e;


int find(int i) {
    while (parent[i] != i)
        i = parent[i];
    return i;
}


void unionSet(int a, int b) {
    parent[a] = b;
}


void sortEdges() {
    int i, j;
    struct Edge temp;
    for (i = 0; i < e - 1; i++) {
        for (j = 0; j < e - i - 1; j++) {
            if (edge[j].w > edge[j + 1].w) {
                temp = edge[j];
                edge[j] = edge[j + 1];
                edge[j + 1] = temp;
            }
        }
    }
}

int main() {
    int i, u, v, a, b;
    int cost = 0;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &e);

    printf("Enter edges (u v weight):\n");
    for (i = 0; i < e; i++) {
        scanf("%d %d %d", &edge[i].u, &edge[i].v, &edge[i].w);
    }

   
    for (i = 0; i < n; i++) {
        parent[i] = i;
    }

   
    sortEdges();

    printf("\nEdges in Minimum Spanning Tree:\n");

    for (i = 0; i < e; i++) {
        u = edge[i].u;
        v = edge[i].v;

        a = find(u);
        b = find(v);

        if (a != b) {
            printf("%d -- %d  (weight = %d)\n", u, v, edge[i].w);
            cost += edge[i].w;
            unionSet(a, b);
        }
    }

    printf("\nTotal cost of Minimum Spanning Tree = %d\n", cost);

    return 0;
}
