#ifndef ELTGOUV_C
#define ELTGOUV_C
#include "ELTPRIM.h"
#include <stdio.h>
#include <stdlib.h>
ELEMENT elementCreer (void) {
    ELEMENT L;
    L=(ELEMENT)malloc(sizeof(element));
    return L;
}
void elementLire(ELEMENT elt) {
    char x;
printf(" \nDonnez un nom svp :") ;
fgets(elt->nom, 18, stdin);
printf(" \nDonnez une date de creation  svp :") ;
fgets(elt->date_creation, 18,stdin);
printf(" \nDonnez la population  :") ;
scanf("%d",&(elt)->population);
printf(" \nDonnez la superficie  :") ;
scanf("%d",&(elt)->superficie);
printf(" \nDonnez le nombre des municipalites  :") ;
scanf("%d",&(elt)->nbr_municipalite);
x=getchar();
}
void elementDetruire (ELEMENT elt) {
    free(elt);
}
void elementAfficher(ELEMENT elt){
    printf("\n nom = %s , date de creation = %s , population = %i ,superficie= %i ,le nombre de municipalite = %i ",elt->nom, elt->date_creation,elt->population, elt->superficie, elt->nbr_municipalite);
}
void elementAffecter(ELEMENT *e1, ELEMENT e2) {
*e1 = e2 ;
}
void  elementCopier(ELEMENT *e1, ELEMENT e2) {
    strcpy((*e1)->nom, e2->nom);
strcpy((*e1)->date_creation, e2->date_creation);
strcpy((*e1)->population , e2->population);
strcpy((*e1)->superficie , e2->superficie);
strcpy((*e1)->nbr_municipalite , e2->nbr_municipalite);
}
int elementComparer(ELEMENT e1, ELEMENT e2){
return (e1->population - e2->population);
}

#endif // ELTREL_C_INCLUDED
