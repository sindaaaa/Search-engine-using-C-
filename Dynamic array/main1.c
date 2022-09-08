#include <stdio.h>
#include <stdlib.h>

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
    printf("==Menu==\n 1.consulter le fichier \n 2.modifier le fichier \n 3.ajouter un fichier \n 4.supprimer un fichier  \n 5.consulter l'index \n 6.retourner au menu precedent \n 7.quitter \n");
    scanf("%d",&k);
    system("cls");
    return k ;
}
int internaute()
{
    int k;
    printf("==Menu==\n 1.consulter le fichier \n 2.retourner au menu precedent \n 3.quitter \n");
    scanf("%d",&k);
    system("cls");
    return k ;
}
int main(){
    int g,i,choix;
    g=1;
    i=1;
    choix=menu();
    while (g!=7 && i!=3)
    {
        if (choix==1)
        {
            g=gerant();
        }
        else {i=internaute();}
        if (g==6 || i==2)
            {
                choix=menu();
            }
        else if (g==7 || i==2)
        {
            system("exit");
        }
    }
    return 0;
    }



