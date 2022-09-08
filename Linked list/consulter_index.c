#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void consulter_tab(Liste L){

    Noeud *parc;

    if(L.tete==NULL){printf("la liste est vide\n");}
    else{
        parc=L.tete;
        while(parc!=NULL){

            printf("****************************************\n");
            printf("Le nom du fichier :\n%s\n",parc->info.nom);
            printf("\n");
            printf("Le contenu du fichier est:\n %s\n",parc->info.contenu);
            printf("\nLa date delderniere modifcation du fichier est:\n %s\n",parc->info.temp);
            parc=parc->suiv;
        }
    }


printf("****************************************");
printf("\nappuyez sur une touche pour continuer.....");
getch();
system("cls");
}
