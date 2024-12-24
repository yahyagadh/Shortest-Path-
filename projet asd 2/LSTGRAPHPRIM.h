#ifndef LSTGRAPHPRIM_H
#define LSTGRAPHPRIM_H
#include "LSTGRAPHSDD.h"
#include "GRAPHEPRIM.h"
Node1 createNode1(GRAPHE e, int weight1);
Graph1 createGraph1(int V);
int testsom(Graph1 G , char som);
void addEdge1(Graph1 G, GRAPHE src, GRAPHE dest, int weight1);
void printGraph1(Graph1 G);
void shortestPath1(Graph1 G, char source, char dest);
#endif
