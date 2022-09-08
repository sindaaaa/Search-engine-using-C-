#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void modifier(Liste *L,char nom[20],char contenu[200])
{
Noeud *parc;
FILE *f;
parc=L->tete;
while ((parc!=NULL)&&(strcmp(parc->info.nom,nom)!=0)){
        parc=parc->suiv;}
if (parc==NULL){printf("Ce fichier n'existe pas");}
else {
    strcpy(parc->info.contenu,contenu);
    f=fopen(nom,"w+");
    fprintf(f,contenu);
    fclose(f);
}


printf("\nappuyez sur une touche pour continuer.....");
getch();
system("cls");
}
