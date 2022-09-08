#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Date.h"
#include "index.h"
#include "ajouter_fichier.c"
#include "consulter_fichier.c"
#include "consulter_index.c"
#include "recherche_mot.c"
#include "modifier_fichier.c"
#include "supprimrer_fichier.c"
#include "intialiser_liste.c"
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
    printf("====================Menu====================\n                  1.ajouter un fichier \n                  2.modifier le fichier \n                  3.consulter le fichier \n                  4.supprimer un fichier  \n                  5.consulter l'index \n                  6.rechercher un mot \n                  7.retourner au menu precedent \n                  8.quitter \nVotre choix:  ");
    scanf("%d",&k);
    system("cls");
    return k ;
}
int internaute()
{
    int k;
    printf("==Menu==\n                  1.consulter le fichier. \n                  2.retourner au menu precedent. \n                  3.rechercher un mot.\n                  4.quitter \nVotre choix:  ");
    scanf("%d",&k);
    system("cls");
    return k ;
}
int main(){

    int a,g,i,choix;
    char nom_fichier[20],mot[20],nom_fichier_mod[20],contenu_fichier_mod[200],nom_supp[20];
    Liste L;
    initialiser(&L);
    a=nbre_fichier();
    g=1;
    i=1;
    choix=menu();
    while (g!=8 && i!=4)
    {
        if (choix==1)
        {
            g=gerant();
            switch (g) {
            case 8:  exit(1); break ;
            case 7: choix=menu(); break ;
            case 1:{
                saisir(&L);


                }break;
            case 2:
                {
                    printf("**************************************\n");
                    printf("Entrer le nom de fichier a modifier: \n");
                    scanf("%s",nom_fichier_mod);
                    printf("**************************************\n");
                    printf("Entrer le contenu:\n ");
                    scanf("%s" ,contenu_fichier_mod);
                    printf("**************************************\n");
                    modifier(&L,nom_fichier_mod,contenu_fichier_mod);
                }break;
            case 3:
                {
                   printf("**************************************\n");
                   printf("Entrer le nom du fichier a consulter: \n");
                   scanf("%s",nom_fichier);
                   printf("**************************************\n");
                   consulter(L,nom_fichier);

                }break;
            case 4:
                {
                    printf("****************************************\n");
                    printf("Entrer le nom du fichier a supprimer :\n ");
                    scanf("%s",nom_supp);
                    printf("\n****************************************\n");
                    supprimer(&L,nom_supp);

                }break;
            case 5:
                {
                    consulter_tab(L);
                }break;
            case 6:
                {
                    printf("\n****************************************\n");
                    printf("Entrer le mot a rchercher:\n");
                    scanf("%s",mot);
                    printf("****************************************\n");
                    recherche(L,mot);
                }break;
            }
        }
        else {i=internaute();
               switch (i) {
               case 4 : {system("exit");} break;
               case 3 : {choix=menu();} break;
               case 2:{printf("Entrer le mot a rchercher:");
                    scanf("%s",mot);
                    recherche(L,mot);
                }break;
               case1:{
                   printf("**************************************\n");
                   printf("Entrer le nom du fichier a consulter: \n");
                   scanf("%s",nom_fichier);
                   printf("**************************************\n");
                   consulter(L,nom_fichier);
                  }break;
              }
        }
    }
    return 0;
    }



