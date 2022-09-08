#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Date.h"
#include "index.h"
#include "index.h"
#include "ajouter_fichier.c"
#include "consulter_fichier.c"
#include "consulter_index.c"
#include "recherche_mot.c"
#include "modifier_fichier.c"
#include "supprimrer_fichier.c"

int menu()
{
    int n;
    printf("etes vous connecte en tant que gerant ou internaute ? \n tapez 1 si vous etes gerant \n tapez 2 si vous etes internaute \n");
    printf("votre choix ? ");
    scanf("%d",&n);
    system("cls");
    return n ;
}
int gerant()
{
    int k;
    printf("====================Menu====================\n            1.ajouter un fichier.\n            2.modifier le fichier. \n            3.consulter le fichier. \n            4.supprimer un fichier.\n            5.consulter l'index. \n            6.rechercher un mot. \n            7.retourner au menu precedent. \n            8.quitter. \nVotre choix:  ");
    scanf("%d",&k);
    system("cls");
    return k ;
}
int internaute()
{
    int k;
    printf("====================Menu====================\n            1.consulter le fichier. \n            2.rechercher un mot. \n            3.retourner au menu precedent. \n            4.quitter. \nVotre choix:  ");
    scanf("%d",&k);
    system("cls");
    return k ;
}
int login(){
char ch_mdp[10];
char MDP[10],NDC[10],ch;
int i,v;
strcpy(ch_mdp,"telecomm");
printf("Saisir le nom d'utilisateur: ");
fflush(stdin);
gets(NDC);
printf("\nSaisir le mot de passe: ");
for(i=0;i<8;i++){

    ch=getch();
    MDP[i]=ch;
    ch='*';
    printf("%c",ch);
}
MDP[i]='\0';

if(strncmp(MDP,ch_mdp,8)==0){
    v=1;
}
else {printf("\nle mot de passe est incorrecte!!! ");
printf("\nMerci d'appuyer sur une touche pour ressayer...");
getch();
v=0;
}

system("cls");
return v;
}

int main(){
    struct Index *t;
    struct Index *t_aux;
    char nom_supp[20];
    int access,a,g,i,choix;
    a=nbre_fichier();
    t=(Index *)malloc(a*sizeof(Index));
    g=1;
    i=1;
    choix=menu();
    while (g!=8 && i!=4)
    {
        if (choix==1)
        {
            access=0;
            while (access==0){
            access=login();}
            while (g!=7){
            g=gerant();
            switch (g) {
            case 8:  exit(1); break ;
            case 7: choix=menu(); break ;
            case 1:{
                saisir(t,a);


                }break;
            case 2:
                {
                    modifier(t,a);
                }break;
            case 3:
                {
                    consulter(t,a);

                }break;
            case 4:
                {
                    printf("***************************************************\n");
                    printf("Entrer le nom du fichier a supprimer : ");
                    scanf("%s",nom_supp);
                    printf("\n***************************************************\n");
                    t_aux=(Index *)malloc((a-1)*sizeof(Index));
                    supprimer(t,t_aux,&a,nom_supp);

                }break;
            case 5:
                {
                    consulter_tab(t,a);
                }break;
            case 6:
                {
                    recherche(t,a);
                }break;
            }
        }
        }
        else {i=internaute();
               switch (i) {
               case 4: {system("exit");} break;
               case 3 : {choix=menu();} break;
               case 2: {recherche(t,a);} break;
               case 1:{consulter(t,a);}
              }
        }
    }
    return 0;
    }



