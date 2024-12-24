#include "GRAPHEPRIM.h"
#include <stdio.h>
#define GRAPHE_VIDE
#include <string.h>
GRAPHE GRAPHECreer (void) {
return GRAPHE_VIDE ;}
void GRAPHELire(GRAPHE* elt){
printf("\n un sommet  svp :") ;
scanf("%c",&elt->sommet);
}
void GRAPHEDetruire (GRAPHE elt){
}
void GRAPHEAfficher(GRAPHE elt){
    printf(" %c ",elt);
}
void GRAPHEAffecter(GRAPHE *e1, GRAPHE e2){
*e1 = e2 ;}
void GRAPHECopier(GRAPHE *e1, GRAPHE e2){
*e1 = e2 ;}
int GRAPHEComparer(GRAPHE e1, GRAPHE e2){
    return (e1.sommet)-(e2.sommet);
}
