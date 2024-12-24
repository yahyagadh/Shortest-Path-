#include "LSTGRAPHPRIM.h"
#include "GRAPHEPRIM.h"
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
Node1 createNode1(GRAPHE e, int weight1){
Node1 n=(Node1)malloc(sizeof(structNode1));
n->info1=e;
n->weight1=weight1;
n->suivant=NULL;
return n;
}
void addEdge1(Graph1 G, GRAPHE src, GRAPHE dest, int weight1){
int a= -1, b= -1;
int i;
for(i=0;i<G->V1;i++){
if(GRAPHEComparer(G->adjList1[i]->info1,src)==0){
a= i;
}
if(GRAPHEComparer(G->adjList1[i]->info1,dest)==0)
b= i;
}
if(a== -1) {
printf("\n la source n existe pas");
return 0;
}
if(b== -1) {
printf("\n la destination n existe pas ");
return 0;
}
Node1 newNode = createNode1(dest, weight1);
if(G->adjList1[a]== NULL){
G->adjList1[a]= newNode;
}
else {
Node1 q = G->adjList1[a];
while (q->suivant!= NULL) q= q->suivant;
q->suivant = newNode;
}
newNode = createNode1(src, weight1);
if(G->adjList1[b]== NULL){
G->adjList1[b]= newNode;
}
else {
Node1 q = G->adjList1[b];
while (q->suivant!= NULL) q= q->suivant;
q->suivant = newNode;
}
}
Graph1 createGraph1(int V){
 Graph1 G =(Graph1)malloc(sizeof(strucGraph1));
 G->V1=V;
 for(int i=0;i<G->V1;i++){
    G->adjList1[i]= NULL;
 } return G;
}
void printGraph1(Graph1 G){
int j;
    for(j = 0; j < G->V1; j++){
        Node1 node = G->adjList1[j];
        printf("\n");
        while(node != NULL){
            printf(" %s ",node->info1.sommet);
            node = node->suivant;
        }
    }}
int testsom(Graph1 G , char som){
int  test=0;
for(int i=0;i<G->V1;i++){
    if(G->adjList1[i]->info1.sommet==som){
        test=1;
        printf("ce sommet existe deja");
        break;
}
return test;
    }}
    void shortestPath1(Graph1 G, char dest, char source) {
    int visited[G->V1];
    int parent[G->V1];
    int dist[G->V1];
    int j;
    int destination;
    int ab;
for(int i=0;i<G->V1;i++){
visited[i]=0;
parent[i]=-1;
dist[i]=1000000;
}
for(int i=0;i<G->V1;i++){
if(G->adjList1[i]->info1.sommet==source){
ab=i;
break;
}
}
dist[ab]=0;
for(int i=1;i<G->V1;i++){
int minDist = 1000000;
int b=-1;
for(int i=0;i<G->V1;i++){
if((visited[i]==0) && (dist[i]<minDist)){
minDist=dist[i];
b=i;
}
}
visited[b]=1;
Node1 node = G->adjList1[b];
while(node != NULL){
for(int h=0;h<=G->V1;h++){
if(G->adjList1[h]->info1.sommet==node->info1.sommet){
j=h;
break;
}
}
if((visited[j]==0) && (dist[b]+(node->weight1)<dist[j])){
dist[j]=dist[b]+(node->weight1);
parent[j]=b;
}
node = node->suivant;
}
}
for(int i=0;i<G->V1;i++){
Node1 node=G->adjList1[i];
if(node->info1.sommet==dest){
destination=i;
break;
}
}
printf("le chemin le plus court est : ");
printf("%c", G->adjList1[destination]->info1.sommet);
int f=parent[destination];
while(f!=-1){
printf("->%c", G->adjList1[f]->info1.sommet);
f=parent[f];
}
printf("\n");
}

