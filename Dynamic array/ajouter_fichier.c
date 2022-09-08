#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<dirent.h>
#include "Date.h"
#include "index.h"
#include<sys/stat.h>
#include<time.h>
#include <sys/types.h>
void saisir(Index *t,int n)
{
    int j,i=0,x,length;
    char Buffer[128],nom_dossier[20],contenu_dossier[200],nom_nouv[20],contenu_nouv[200];
    char *tmod[32];
    DIR *p;
    struct dirent *pp;
    printf("vous voulez ajouter: \n 1.Les fichiers du repertoires. \n 2.Un nouveau fichier.\n Votre choix :  ");
    scanf("%d",&x);
    if(x==1){
        p = opendir ("./");
        if (p != NULL){
                while ((pp = readdir (p))!=NULL) {
                    length = strlen(pp->d_name);
                    if (strncmp(pp->d_name + length - 4, ".txt", 4) == 0) {
                            strcpy(nom_dossier,pp->d_name);
                            strcpy(t[i].nom,nom_dossier);
                            FILE* Fichier; // tu créer un pointeur pour un flux
                            Fichier = fopen(pp->d_name,"r");
                            while( fgets(Buffer,128,Fichier)){
                                    strcpy(contenu_dossier,Buffer);
                                    strcpy(t[i].contenu,contenu_dossier);

                            }
                            struct stat st;
                            stat (pp->d_name, &st);{

                                /*Modified time */
                                time_t t = st.st_mtime;
                                struct tm tm = *localtime (&t);
                                char s[32];
                                strftime (s, sizeof s, "%d/%m/%Y %H:%M:%S", &tm);
                                strcpy(tmod,s);

                                }


                            strcpy(t[i].temp,tmod);

                            i++;

                            close(Fichier);
                    }
                }
        (void) closedir (p);
        }printf("\nLes fichiers du repertoires sont importer a la base de donnes avec succes!!!\n");
         printf("Si vous voulez les consulter veuillez choisir l'option numero 5 dans le menu\n!!! ");

    }
    else if(x==2){
    /*printf("Donner le nom de votre fichier");
    scanf("%s",nom_nouv);
    printf("Donner le contenu de votre fichier \n ");
    gets(contenu_nouv);*/
    /*t=(Index *)realloc(t,(4)*sizeof(Index));
    /*strcpy(t[3].nom,nom_nouv);
    strcpy(t[3].contenu,contenu_nouv);
    FILE *fptr;
    fptr=fopen(t[3].nom,"w+");
    fprintf(fptr,t[3].contenu);
    fclose(fptr);*/




    }
    else{ printf("\nCe choix n'existe pas. \n");}


printf("\nMerci d'appuyez sur une touche pour continuer.....");
getch();
system("cls");
}
/*void saisir_date(DATE *d)
{
    printf("saisir jour,mois,annee \n");
    scanf("%d-%s-%d",&(d->jour),d->mois,&(d->annee));
}
void AjouterAuTab(INDEX *t,INDEX f)
{
    t[0]=f;
    printf("%s",t[0].index);
    printf("%s",t[0].contenu);
}*/

int nbre_fichier(){
    int cpt=0,length;
    DIR *p;
    struct dirent *pp;
p = opendir ("./");
        if (p != NULL){
                while ((pp = readdir (p))!=NULL) {
                    length = strlen(pp->d_name);
                    if (strncmp(pp->d_name + length - 4, ".txt", 4) == 0) {
                            cpt++;}

}
        }
return cpt ;
}
