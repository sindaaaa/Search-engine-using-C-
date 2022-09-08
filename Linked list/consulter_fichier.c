#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include "index.h"
void consulter(Liste L,char nom[20]){
Noeud *parc;
if(L.tete==NULL){
    return NULL;
}
else{
    parc=L.tete;
    while((parc!=NULL)&&(strcmp(parc->info.nom,nom)!=0)){
        parc=parc->suiv;}
    if(parc==NULL){printf("Le fichier n'existe pas .\n");}
    else {printf("Le contenu de votre fichier est :\n");
          printf("%s\n",parc->info.contenu);
           printf("\nLa date delderniere modifcation du fichier est:\n %s\n",parc->info.temp);
          }
    }
printf("**************************************\n");
printf("appuyez sur une touche pour continuer.....");
getch();
system("cls");

}





