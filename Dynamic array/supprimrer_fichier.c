#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "index.h"
void supprimer(Index *t,Index *t_aux,int *n,char nom[20]){

char aux_contenu[200],aux_nom[20];
int i=0,j=0,k;
while(i<*n){
    if(strcmp(t[i].nom,nom)!=0){
        strcpy(aux_nom,t[i].nom);
        strcpy(t_aux[j].nom,aux_nom);
        strcpy(aux_contenu,t[i].contenu);
        strcpy(t_aux[j].contenu,aux_contenu);
        i++;
        j++;
        }
    else {i++ ;}
}
*n=*n-1;
t = (Index *)realloc(t, sizeof(Index)*(*n));
for(k=0;k<*n;k++){
    strcpy(t[k].nom,t_aux[k].nom);
    strcpy(t[k].contenu,t_aux[k].contenu);
}
printf("\nMerci d'appuyez sur une touche pour continuer.....");
getch();
system("cls");
}
