#ifndef LSTGOUV_H
#define LSTGOUV_H
#include "ELTPRIM.h"
#define AAA 100
// Structure pour les nœuds du graphe avec poids
typedef struct {
ELEMENT info; // Valeur du nœud
int weight; // Poids de l'arête
struct structNode* next; // Pointeur vers le prochain nœud dans la liste de voisins
} structNode, *Node;
// Définition de la structure de graphe utilisant la liste d'adjacence
typedef struct {
int V;
Node adjList[AAA]; // Tableau de nœuds pour la liste d'adjacence
} strucGraph, *Graph;
#endif // LSTGOUV_H_INCLUDED
