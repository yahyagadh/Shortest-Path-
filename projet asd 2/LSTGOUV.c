#include "LSTPRIM.h"
#include "ELTPRIM.h"
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
Node createNode(ELEMENT e, int weight){
Node n=(Node)malloc(sizeof(structNode));
n->info=e;
n->weight=weight;
n->next=NULL;
return n;
}
void addEdge(Graph G, ELEMENT src, ELEMENT dest, int weight){
int a= -1, b= -1;
int i;
for(i=0;i<G->V;i++){
Node nn=G->adjList[i];
if(elementComparer(nn->info, src)==0)
a= i;
if(elementComparer(nn->info, dest)==0)
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
Node newNode = createNode(dest, weight);
if(G->adjList[a]== NULL){
G->adjList[a]= newNode;
}
else {
Node q = G->adjList[a];
while (q->next!= NULL) q= q->next;
q->next = newNode;
}
}
Graph createGraph(int V){
Graph G=(Graph)malloc(sizeof(strucGraph));
G->V=V;
for(int i=0;i<V;i++) G->adjList[i]=NULL;
char *line[200];
FILE* file=fopen("fichertunisie.txt","r");
char *kk;
int compteur=0 ;
while(fgets(line,sizeof(line),file)!=NULL){
line[strcspn(line,"\n")]='\0';
ELEMENT e=elementCreer();
kk= strtok(line,",");
strcpy(e->nom,kk);
kk= strtok(NULL,",");
strcpy(e->date_creation,kk);
kk= strtok(NULL,",");
strcpy(e->population,kk);
kk= strtok(NULL,",");
strcpy(e->superficie,kk);
kk= strtok(NULL,",");
strcpy(e->nbr_municipalite,kk);
Node n=createNode(e,0);
G->adjList[compteur]=n;
compteur++;
}
fclose(file);
FILE* file1=fopen("ca.txt","r");
while (fgets(line, sizeof(line),file1) != NULL) {
line[strcspn(line, "\n")] = '\0';
char *sournom = strtok(line, ";");
char *destinom = strtok(NULL, ";");
char *w = strtok(NULL, ";");
int sour = -1;
for(int i = 0; i < G->V; i++) {
Node nnnn=G->adjList[i];
if (strcmp(nnnn->info->nom,sournom) == 0) {
sour = i;
}
}
if(sour== -1)
printf("%s n'est pas trouve",sournom);
int dst = -1;
for(int i = 0; i < G->V; i++) {
Node nnnnn=G->adjList[i];
if(strcmp(nnnnn->info->nom,destinom) == 0)
dst=i;
}
if(dst == -1)
printf("%s n'est pas trouve",destinom);
int w1 = atoi(w);
Node aa=G->adjList[sour];
Node aaaa=G->adjList[dst];
addEdge(G, aa->info, aaaa->info,w1);
}
fclose(file1);
return G;
}
void printGraph(Graph G){
int j;
    for(j = 0; j < G->V; j++){
        Node node = G->adjList[j];
        printf("\n");
        while(node != NULL){
            printf(" %s  --------------->",node->info->nom);
            node = node->next;
        }
    }}
    void shortestPath(Graph G, char dest[], char source[]) {
    int visited[G->V];
    int parent[G->V];
    int dist[G->V];
    int j;
    int destination;
    int ab;
for(int i=0;i<G->V;i++){
visited[i]=0;
parent[i]=-1;
dist[i]=1000000;
}
for(int i=0;i<G->V;i++){
if(strcmp(G->adjList[i]->info->nom,source)==0){
ab=i;
break;
}
}
dist[ab]=0;
for(int i=1;i<G->V;i++){
int minDist = 1000000;
int b=-1;
for(int i=0;i<G->V;i++){
if((visited[i]==0) && (dist[i]<minDist)){
minDist=dist[i];
b=i;
}
}
visited[b]=1;
Node node = G->adjList[b];
while(node != NULL){
for(int h=0;h<=G->V;h++){
if(strcmp(G->adjList[h]->info->nom,node->info->nom)==0){
j=h;
break;
}
}
if((visited[j]==0) && (dist[b]+(node->weight)<dist[j])){
dist[j]=dist[b]+(node->weight);
parent[j]=b;
}
node = node->next;
}
}
for(int i=0;i<G->V;i++){
Node node=G->adjList[i];
if(strcmp(node->info->nom,dest)==0){
destination=i;
break;
}
}
printf("le chemin le plus court est : ");
printf("%s", G->adjList[destination]->info->nom);
int f=parent[destination];
while(f!=-1){
printf("->%s", G->adjList[f]->info->nom);
f=parent[f];
}
printf("\n");
}
