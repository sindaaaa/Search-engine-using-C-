#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void modifier(Index *t,int n){
int i=0,v=0;
char nom_fichier[20],contenu_fichier[200];

FILE *f;
printf("***************************************************\n");
printf("Entrer le nom de fichier a modifier : ");
scanf("%s",nom_fichier);
printf("***************************************************\n");
while (i<n){
    if (strcmp(t[i].nom,nom_fichier)==0){

        printf("Entrer le contenu :\n ");
        fflush(stdin);
        gets(contenu_fichier);
        printf("***************************************************\n");
        printf("\n Le contenu du fichier ' %s 'a ete modifie avec succes !!!",nom_fichier);
        printf("\n Si vous voulez le consulter veuillez choisir l'option numero 3 dans le menu\n!!! ");
        strcpy(t[i].contenu,contenu_fichier);
        f=fopen(nom_fichier,"w+");
        fprintf(f,contenu_fichier);
        fclose(f);
        v=1;
        break ;
    }
    else v=2;
    i++;

  }
if (v==2){printf("Le fichier a que vous avez entrer n'existe pas!!!\nVeuillez verifier le nom du fichier!!!\n");}
printf("\nMerci d'appuyez sur une touche pour continuer.....");
getch();
system("cls");
}
