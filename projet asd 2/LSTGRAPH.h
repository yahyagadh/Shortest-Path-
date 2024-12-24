#ifndef LSTGRAPH_H
#define LSTGRAPH_H
#include "GRAPHEPRIM.h"
#define AA 100
// Structure pour les nœuds du graphe avec poids
typedef struct {
GRAPHE info1; // Valeur du nœud
int weight1; // Poids de l'arête
struct structNode* suivant; // Pointeur vers le prochain nœud dans la liste de voisins
} structNode1, *Node1;
// Définition de la structure de graphe utilisant la liste d'adjacence
typedef struct {
int V1;
Node1 adjList1[AA]; // Tableau de nœuds pour la liste d'adjacence
} strucGraph1, *Graph1;
#endif
