#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void recherche(Index *t,int n){
char mot[20];int i,k,v=0;
printf("***************************************************\n");
printf("Entrer un mot a rechercher :\n");
scanf("%s",mot);
printf("***************************************************\n");
for(k=0;k<n;k++){
        if (strstr(t[k].contenu,mot)!=NULL){
            v=1;
        }
}

if(v==0){printf("Aucun fichier contient le mot '%s'.",mot);
        }
else{printf("Les fichiers qui continennet le mot '%s' sont: \n",mot);
    for(i=0;i<n;i++){
    if (strstr(t[i].contenu,mot)!=NULL){
            printf("%s \n",t[i].nom);
        }
    }
printf("***************************************************\n");
}
printf("\nMerci d'appuyez sur une touche pour continuer.....");
getch();
system("cls");
}
