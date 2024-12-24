#ifndef LSTGRAPH_H
#define LSTGRAPH_H
#include "GRAPHEPRIM.h"
#define AA 100
// Structure pour les n�uds du graphe avec poids
typedef struct {
GRAPHE info1; // Valeur du n�ud
int weight1; // Poids de l'ar�te
struct structNode* suivant; // Pointeur vers le prochain n�ud dans la liste de voisins
} structNode1, *Node1;
// D�finition de la structure de graphe utilisant la liste d'adjacence
typedef struct {
int V1;
Node1 adjList1[AA]; // Tableau de n�uds pour la liste d'adjacence
} strucGraph1, *Graph1;
#endif
