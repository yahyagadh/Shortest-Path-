#ifndef LSTPRIM_H
#define LSTPRIM_H
#include "LSTSDD.h"
#include "ELTPRIM.h"
Node createNode(ELEMENT e, int weight);
Graph createGraph(int V);
void addEdge(Graph G, ELEMENT src, ELEMENT dest, int weight);
void printGraph(Graph G);
void shortestPath(Graph G, char source[], char dest[]);
 void printAllPaths(int parent[], int j, Graph G);
#endif // LSTPRIM_H_INCLUDED
