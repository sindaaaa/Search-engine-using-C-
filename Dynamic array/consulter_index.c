#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void consulter_tab(Index *t,int n){
    int i;
    printf("***************************************************\n");
    for(i=0;i<n;i++){
        printf("Le nom du fichier est:\n%s",t[i].nom);
        printf("\n\nLe contenu du fichier est:\n%s",t[i].contenu);
        printf("\n\nLa date de la derniere modification est:\n%s",t[i].temp);
        printf("\n***************************************************\n");
    }

printf("\nMerci d'appuyez sur une touche pour continuer.....");
getch();
system("cls");
}
