#include <stdio.h>
#include <stdlib.h>
#include "fichier.h"
void saisir(int*a)
{
    printf("donner un entier : \n");
    scanf("%d",a);
}
void saisir_matiere(MATIERE *m)
{
    printf("*************************saisir************************");
    printf("\ndonner code matiere : \n");
    scanf("%d",&m->cm);
    printf("donner note de DS : \n");
    scanf("%f",&m->DS);
    printf("donner note d'examen : \n");
    scanf("%f",&m->examen);
    m->moyenne = (m->examen*2 + m->DS)/3;
}
void afficher_matiere(MATIERE mat)
{
    printf("***************************affichage********************");
    printf("\ncode de matiere : %d",mat.cm);
    printf("\nnote de DS : %f",mat.DS);
    printf("\nnote d'examen : %f",mat.examen);
    printf("\nmoyenne : %f",mat.moyenne);
}
void allocationmatieres(MATIERE**t,int n)
{
    *t = (MATIERE *) malloc (n * sizeof(MATIERE));
    if (!*t) exit(-1);
}
void remplirtabmatieres (MATIERE *m , int n )
{
    for (int i=0;i<n;i++)
        saisir_matiere(m+i);
}
void main()
{
    MATIERE mat;
    saisir_matiere(&mat);
    afficher_matiere(mat);
}
