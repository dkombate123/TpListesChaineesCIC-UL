#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include"nombre.h"
/* meMBRES DU GROUPE
KOMBATE Dandiégou
KPEDA Benjamin Wiyao
MALE Serge Komlan
SAHMOU Rasac Abdou
KUDITE jacques Atsu Komivi
*/
/* SVP Madame les fonctions misent en commentaires comporte des erreurs dont nous n'avons pas trouver de solution veuillez nous aider */
// attention cette fonction c'est juste pour la couleur de la console et du texte
void color(int t,int f)
{
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(H,f*16+t);
}


// fonctions de construction de la liste chainée
//nombre*liste=NULL;
Liste *initialisation()
{
          Liste*liste=malloc(sizeof(*liste));

          nombre *element = malloc(sizeof(*element));

    if (liste == NULL || element == NULL)
    {
        exit(EXIT_FAILURE);
    }

    element->nombre_valeur=20 ;
    element->suivant = NULL;
    liste->premier = element;

    return liste;
}
void insertion(Liste *liste, int nvNombre)
{
    /* Création du nouvel élément */
    nombre *nouveau = malloc(sizeof(*nouveau));
    if (liste == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }
    nouveau->nombre_valeur = nvNombre;

    /* Insertion de l'élément au début de la liste */
    nouveau->suivant = liste->premier;
    liste->premier = nouveau;
}
void afficherListe(Liste *liste)
{
    if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

    nombre *courant = liste->premier;

    while (courant != NULL)
    {
        printf("%d -> ", courant->nombre_valeur);
        courant = courant->suivant;// passer a l'element suivant
    }
    printf("NULL\n");
}
// calcul du longueur de la liste construite
int LongueurListe(Liste*liste)
{
           nombre *li = liste->premier;
          int compteur=0;
          while(li!=NULL)
          {
                    compteur++;
                    li=li->suivant;
          }
          return compteur;

}
// Ajout d'un nombre en tete de liste
void insertListeDebut(Liste*tete,int data)
{
          nombre*nouveau=malloc(sizeof(*nouveau));
          nouveau->nombre_valeur = data;

    /* Insertion de l'élément au début de la liste */
    nouveau->suivant = tete->premier;
    tete->premier = nouveau;

}
// supression du premier element de la liste restante

void suppression(Liste *liste)

{

    if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }
//supression du premier element
    if (liste->premier != NULL )
    {
        nombre *aSupprimer = liste->premier;
        liste->premier = liste->premier->suivant;
        free(aSupprimer);
    }
}
// ajout d'un nombre à une position k
void AjouterPositionK(Liste *tete, int donnee,int position)

{

          int k=1;
          nombre*nouveauNoeuds=malloc(sizeof(nouveauNoeuds));

          nombre (*p)=malloc(sizeof(p));
          p=tete->premier;

          nombre*q=malloc(sizeof(q));
           nouveauNoeuds->nombre_valeur=donnee;
           ;


          if(nouveauNoeuds==NULL)
          {
                    exit(-1);
          }
          else{
                    while(p!=NULL && k<position)
                    {
                              k++;
                              q=p;
                              p=p->suivant;
                    }
                    q->suivant=nouveauNoeuds;
                    nouveauNoeuds->suivant=p;
          }
}
int RechercheElement(Liste*tete,int position)
{
          int i;
          nombre*p=malloc(sizeof(p));
          p=tete->premier;
          for(i=0;i<position && p!=NULL;i++)
          {
                    p=p->suivant;
          }
          if(p == NULL)
              {
                  return -1;
              }
               else
              {


                  return p->nombre_valeur;
              }

}
void TrierOrdreCroissant(Liste*tete)
{
          nombre*i=malloc(sizeof(i));
          nombre*j=malloc(sizeof(j));
          nombre*min=malloc(sizeof(min));
          int temp;
          for (i=tete->premier; i->suivant != NULL; i=i->suivant)
          {
          min=i;
          for (j=i->suivant; j != NULL; j=j->suivant)
          {


                    if (j->nombre_valeur < min->nombre_valeur)
                    min=j;
                    }
                    if (min != i)
                    {
                    temp=min->nombre_valeur;
                    min->nombre_valeur = i->nombre_valeur;
                    i->nombre_valeur = temp;
                    }
          }
}
void ModifierElement(Liste*tete,int donnee,int position)
{
          int i;
          nombre*p=malloc(sizeof(p));
          nombre*temp=malloc(sizeof(temp));
          p=tete->premier;
          for(i=0;i<position && p!=NULL;i++)
          {
                    temp->nombre_valeur=donnee;
                    temp=temp->suivant;
          }


}
void AjouterNombreListesTrier(Liste*tete,int position,int donnee)
{
           int k=1;
          nombre*nouveauNoeuds=malloc(sizeof(nouveauNoeuds));

          nombre (*p)=malloc(sizeof(p));
          p=tete->premier;

          nombre*q=malloc(sizeof(q));
           nouveauNoeuds->nombre_valeur=donnee;



          if(nouveauNoeuds==NULL)
          {
                    exit(-1);
          }
          else{
                    while(p!=NULL && k<position)
                    {
                              k++;
                              q=p;
                              p=p->suivant;
                    }
                    q->suivant=nouveauNoeuds;
                    nouveauNoeuds->suivant=p;
          }

}








int main()
{

          //int nombre, pos;

          Liste *notreListe = initialisation();
//construction de la liste chainée de plusieurs entiers
    insertion(notreListe, 40);
    insertion(notreListe, 70);
   insertion(notreListe, 580);
   insertion(notreListe, 47);
   insertion(notreListe, 2);
   insertion(notreListe, 56);
   insertion(notreListe, 101);
   insertion(notreListe, 20);
   insertion(notreListe, 80);
   insertion(notreListe, 60);
   insertion(notreListe, 5);
   insertion(notreListe, 7);
   insertion(notreListe, 9);
   insertion(notreListe, 8);
   insertion(notreListe, 10);
   insertion(notreListe, 45);
   insertion(notreListe, 49);
   insertion(notreListe, 24);
   insertion(notreListe, 0);
   insertion(notreListe, 450);
   insertion(notreListe, 480);
   insertion(notreListe, 410);
   insertion(notreListe, 300);
   int position,data;




   color(14,0);
   printf ("||--------------------------------------||\n") ;
        printf ("||--------------------------------------||\n") ;
        printf ("||---BIENVENUE DANS LE MENU PRINCIPAL---||\n") ;
        printf ("||--------------------------------------||\n") ;
        printf ("||--------------------------------------||\n") ;
        printf ("||------Veuillez choisir une action-----||\n") ;
        printf ("||--------------------------------------||\n") ;
        printf ("||   1. Afficher la liste chainee    ||\n") ;
        printf("\n");
         printf("||   2.Afficher la longueur de votre liste actuelle\n");
          printf("\n");
        printf ("||   3. Afficher a liste chainee apres ajout en tete \n") ;
         printf("\n");

        printf ("||   4.Afficher la liste apres suppression en tete\n") ;
         printf("\n");

        printf ("||   5. Inserer un nombre à une position k        \n") ;
         printf("\n");
          printf ("||   6. Rechercher un nombre à une position k        \n") ;
         printf("\n");
         printf ("||   7. Trier la liste actuelle par ordre croissant       \n") ;
         printf("\n");
         printf ("||   8. Modifier la valeur d'un nombre de la liste actuelle       \n") ;
         printf("\n");
          printf ("||   9. Ajouter un nombre dans notre liste triee      \n") ;
         printf("\n");









        printf ("||--------------------------------------||\n") ;
        printf ("||--------------------------------------||\n") ;
        int choix;

        printf("Entrer votre choix\n");
        scanf ("%d", &choix);
        while(choix<1 || choix>4)
        {
                  break;
        }
        switch(choix)
        {
        case 1:
                  color(14,0);
                  printf("Voici notre Liste chainee initiale\n");
           color(1,0);

    afficherListe(notreListe);
    printf("\n");
    color(12,0);

    printf("-----------------------------------------------------------------------\n");
    break;
    case 2:
               color(14,0);
              printf("Voici notre  liste actuelle en memoire est\n");
              color(1,0);
              afficherListe(notreListe);
              color(2,0);
    printf(" Il ya %d elements dans la liste",LongueurListe(notreListe));
    printf("\n");
    color(12,0);
    printf("------------------------------------------------------------------------\n");
    break;
    case 3:
               color(14,0);
              printf("Voici notre  liste actuelle en memoire est\n");
              color(1,0);
              afficherListe(notreListe);
              color(3,0);
              printf("Saisir la valeur que vous voulez inserer au debut de notre liste actuelle\n");
              scanf("%d",&position);
               insertListeDebut(notreListe,position);
    color(14,0);
    printf("Voici notre nouvelle liste apres ajout en premiere position\n");
    color(1,0);
    afficherListe(notreListe);
    color(12,0);
    printf("-----------------------------------------------------------------------\n");
     color(2,0);
    printf(" Il ya %d elements dans la liste\n",LongueurListe(notreListe));
    break;
    case 4:
               color(14,0);
              printf("Voici notre  liste actuelle en memoire est\n");
              color(1,0);
              afficherListe(notreListe);
               suppression(notreListe);

    color(14,0);
    printf("Voici notre nouvelle liste apres supression\n");
    color(1,0);
    afficherListe(notreListe);
    color(12,0);
    printf("-----------------------------------------------------------------------\n");
    color(2,0);
    printf(" Il ya %d elements dans la liste",LongueurListe(notreListe));
    break;
    case 5:
               color(14,0);
              printf("Voici notre  liste actuelle en memoire est\n");
              color(1,0);
              afficherListe(notreListe);
              printf("Saisir le nombre a inserer\n");
              scanf("%d",&data);
              printf("Saisir la position a inserer \n");
              scanf("%d",&position);
              AjouterPositionK(notreListe,data,position);

    color(14,0);
    printf("Voici notre nouvelle liste apres insertion\n");
    color(1,0);
    afficherListe(notreListe);
    color(12,0);
    printf("-----------------------------------------------------------------------\n");
    color(2,0);
    printf(" Il ya %d elements dans la liste",LongueurListe(notreListe));
    break;

    case 6:
              color(14,0);
              printf("Voici notre  liste actuelle en memoire est\n");
              color(1,0);
              afficherListe(notreListe);
              color(3,0);

              printf("Saisir la position du nombre a rechercher \n");
              scanf("%d",&position);

    color(14,0);
    printf("Vous Avez Rechercher le nombre %d de notre liste actuelle \n",RechercheElement(notreListe,position));

    break;
     case 7:
               color(14,0);
              printf("Voici notre  liste actuelle en memoire est\n");
              color(1,0);
              afficherListe(notreListe);
              TrierOrdreCroissant(notreListe);
    color(14,0);
    printf("Voici notre  liste trier par ordre croissant \n");
    color(1,0);
    afficherListe(notreListe);

    break;


case 8:


              TrierOrdreCroissant(notreListe);
    color(14,0);
    printf("Voici notre  liste trier par ordre croissant \n");
    color(1,0);
    afficherListe(notreListe);
    printf("Enter la position du nombtre a modifier\n");
    scanf("%d",&position);
    printf("Entrer la valeur du nouveau nombre\n");
    scanf("%d",&data);
    ModifierElement(notreListe,position,data);
     color(14,0);
    printf("Voici notre  liste  apres modification de votre element \n");
    color(1,0);
    afficherListe(notreListe);

    break;
    case 9:


              TrierOrdreCroissant(notreListe);
    color(14,0);
    printf("Voici notre  liste trier par ordre croissant \n");
    color(1,0);
    afficherListe(notreListe);
    printf("Enter la position du nombtre a modifier\n");
    scanf("%d",&position);
    printf("Entrer la valeur du nouveau nombre\n");
    scanf("%d",&data);
    AjouterNombreListesTrier(notreListe,position,data);
     color(14,0);
    printf("Voici notre  liste  apres modification de votre element \n");
    color(1,0);
    afficherListe(notreListe);

    break;


}


color(0,0);


   return 0;
}
