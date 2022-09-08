#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void recherche(Liste L,char mot[20]){
Noeud *parc;
char contenu_f[200];
printf("Les fichiers qui contiennet ce mot sont:\n");
if(L.tete==NULL){
    return NULL;
}
else{
    parc=L.tete;
    while(parc!=NULL){
        strcpy(contenu_f,parc->info.contenu);
        if(strstr(contenu_f,mot)!=NULL){
            printf("%s\n",parc->info.nom);
        }

        parc=parc->suiv;
    }
}

printf("****************************************\n");
    printf("appuyez sur une touche pour continuer.....");
getch();
system("cls");

}
