#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LSTGOUV.h"
#include "LSTGRAPH.h"
int main()
{
    int choix;
    int choix1;
    char src[20];
    char des[20];
            int d;
            int n;
    Graph G;
    Graph1 G1;
    do{
    printf("1.utiliser le graphe en maniere generale\n");
    printf("2.utiliser le graphe en cas de la carte de tunisie\n");
    printf("3.exit");
    scanf("%i",&choix);
    switch (choix){
    case 1 :{
        printf("donner le nombre de sommets a saisir");
        scanf("%i",&n);
        G1=createGraph1(n);
        G1->V1=n;
        for(int i=0;i<n;i++){
            GRAPHE e1=GRAPHECreer();
            char som;
            fflush(stdin);
          printf("donner un sommet \n");
        scanf(" %c",&som);
        e1.sommet=som;
        Node1 node=createNode1(e1,0);
        G1->adjList1[i]=node;
        }
        do{
                printf("1.relier deux sommets\n");
                printf("2.voir le chemin le plus court entre  deux sommets\n");
                printf("3.retour\n");
                scanf("%i",&choix1);
                switch(choix1){
                    case 1 :{
                          char a;
            char b;
               fflush(stdin);
        printf("donner les deux sommets a relier\n");
        scanf(" %c",&a);
        scanf(" %c",&b);
        printf("donner la distance entre eux    ");
        scanf("%i",&d);
        GRAPHE e2=GRAPHECreer();
        GRAPHE e3=GRAPHECreer();
        e2.sommet=a;
        e3.sommet=b;
        addEdge1(G1,e2,e3,d);}
        break ;
        case 2 :{
        char x;
        char y;
        printf("donner les deux sommets a voir la distance entre eux\n");
        scanf(" %c",&x);
        scanf(" %c",&y);
        shortestPath1(G1,x,y);}
        break ;}}while(choix1!=3);}
        break ;
        case 2 :{
    G=createGraph(24);
    printf("source");
    scanf("%s",&src);
   src[0]=toupper(src[0]);
    for(int i=1;i<strlen(src);i++){
    src[i]=tolower(src[i]);
    }
    printf("destination\n");
    scanf("%s",&des);
    des[0]=toupper(des[0]);
     for(int i=1;i<strlen(src);i++){
    des[i]=tolower(des[i]);
    }
    shortestPath(G,src,des);}
    break ;
    } }while(choix!=3);

return 0;
}
