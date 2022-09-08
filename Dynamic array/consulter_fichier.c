#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include "index.h"
void consulter(Index *t,int n){

int i,v=0;char nom_fichier[20];
printf("***************************************************\n");
printf("Donner le nom du fichier que vous voulez le consulter:\n ");
scanf("%s",nom_fichier);
printf("***************************************************\n");
for(i=0;i<n;i++){
    if(strcmp(nom_fichier,(t[i].nom))==0){
        puts(t[i].contenu);
      printf("***************************************************\n");
      printf("La date de la derniere modification est:\n%s",t[i].temp);
      printf("\n***************************************************\n");
      v=1;
    }
}
if(v==0){printf("Le fichier a que vous avez entrer n'existe pas!!!\nVeuillez verifier le nom du fichier!!!\n");}
printf("\nMerci d'appuyez sur une touche pour continuer.....");
getch();
system("cls");
/*FILE *fptr;
int i,egale;
char text[50];
char nom_fichier[10];
printf("Entrer le nom du fichier que vous voulez consulter");
scanf("%s",nom_fichier);
egale=1;
i=0;
while ((i<n)&&(egale==0))
{
    if (strcmp(nom_fichier,t[i].nom)==0)
    {  egale=0;
       fptr=fopen(t[i].index,"r");
       if(fptr==NULL){
       printf("le fichier ne contient rien ."); }
       else{
          fgets(text,50,fptr);
          printf("%s",text);
        }
    }
    else
    { i+=1 ;
    }
}*/
}
