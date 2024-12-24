#ifndef LSTGOUV_H
#define LSTGOUV_H
#include "ELTPRIM.h"
#define AAA 100
// Structure pour les n�uds du graphe avec poids
typedef struct {
ELEMENT info; // Valeur du n�ud
int weight; // Poids de l'ar�te
struct structNode* next; // Pointeur vers le prochain n�ud dans la liste de voisins
} structNode, *Node;
// D�finition de la structure de graphe utilisant la liste d'adjacence
typedef struct {
int V;
Node adjList[AAA]; // Tableau de n�uds pour la liste d'adjacence
} strucGraph, *Graph;
#endif // LSTGOUV_H_INCLUDED
