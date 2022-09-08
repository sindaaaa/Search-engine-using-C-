#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "index.h"
void supprimer(Liste *L,char nom[20]){
Noeud *parc,*prec;
if(L->tete==NULL){
        printf("La liste est vide. ");
}
else{
    if(strcmp(L->tete->info.nom,nom)==0){
        parc=L->tete;
        L->tete=L->tete->suiv;
        free(parc);
        }
    else{
        parc=L->tete;
        while((parc!=NULL)&&(strcmp(parc->info.nom,nom)!=0)){
            prec=parc;
            parc=parc->suiv;
        }
        if(parc==NULL){printf("Le fichier a supprimer n'existe pas ."); }
        else{
            prec->suiv=parc->suiv;
            free(parc);
        }
    }
}
printf("\nappuyez sur une touche pour continuer.....");
getch();
system("cls");
}
