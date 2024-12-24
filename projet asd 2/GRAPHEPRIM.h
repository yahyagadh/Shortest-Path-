#ifndef GRAPHEPRIM_H
#define GRAPHEPRIM_H
#include "GRAPHESDD.h"
GRAPHE GRAPHECreer(void);
void GRAPHELire(GRAPHE*);
void GRAPHEDetruire (GRAPHE);
void GRAPHEAfficher(GRAPHE);
void GRAPHEAffecter(GRAPHE*, GRAPHE);
void GRAPHECopier(GRAPHE *, GRAPHE) ;
int GRAPHEComparer(GRAPHE, GRAPHE);

#endif // ELTPRIM_H_INCLUDED
