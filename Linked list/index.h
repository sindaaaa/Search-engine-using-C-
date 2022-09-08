#ifndef INDEX_H_INCLUDED
#define INDEX_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>

struct index
{
    char nom[200],contenu[200],temp[32];


} ;
typedef struct index Index;
struct noeud{
    Index info;
    struct noeud *suiv;};
typedef struct noeud Noeud;

struct liste{ Noeud *tete;};
typedef struct liste Liste ;

#endif // INDEX_H_INCLUDED
