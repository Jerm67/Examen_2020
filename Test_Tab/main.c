#include <stdio.h>
#include <stdlib.h>
#define Ligne   14
#define Colonne   29
#define MAXPISTEUR 10




int LIGNE= Ligne;
int COLONNE= Colonne;
int Map1 [Colonne][Ligne];
int Pisteur;
int str_map[MAXPISTEUR];


//Map2[14][24];

 typedef struct Ppisteur
{
int x;
int y;

}positionP;

void afficheTab(int Map1[Colonne][Ligne]);
//void placePist (int Map1 [Colonne][Ligne]);
void placage_Pisteur(int Pisteur, int Map1[Colonne][Ligne],positionP str_map[MAXPISTEUR]);


void main() {

    afficheTab(Map1[Colonne][Ligne]);
    //placePist (Map1[Colonne][Ligne]);
    placage_Pisteur( Pisteur,   Map1[Colonne][Ligne], str_map[MAXPISTEUR]);

  return 0;
}

void afficheTab(int Map1[Colonne][Ligne]){

    int i, j;

  for (i=1; i <= Ligne; i++){ // On dessine le tableau de haut en bas
    for (j=1; j<= Colonne; j++){ // Pour chaque ligne on dessine le tableau de gauche à droite

        if (i==1 || i==Ligne || j==1 || j==Colonne)
            //Si on est à la première ou dernière ligne on dessine
            //Si on est tout à gauche ou tout à droite on dessine
        {
          printf("*");
        }
        else //Sinon on met une case vide
        {
            printf(" ");
        }
    }//Fin de la deuxième boucle for (de gauche à droite)

    //On passe à la ligne suivante
    printf("\n");
  }

} //Fin des instructions de la fonction



/*void placePist (int Map1[Colonne][Ligne]){

    int row=0, col=0, i, j;

    for (i=1; i <=Ligne; i++){// On dessine le tableau de haut en bas
        for (j=1; i<=Colonne; i++){// Pour chaque ligne on dessine le tableau de gauche à droite
            printf(" Entrez le nombre de Pisteur (max 10): ");
            scanf("%d",&Pisteur);
            printf("Vous avez choisi %d pisteurs \n", Pisteur);


                 if (Pisteur <= 10)
                    {

                    while (Pisteur >= 1) //Tant qu'il reste des pisteurs a placer
                        {
                        printf(" En qu'elle ligne voulez vous placez les pisteur ? ");
                        scanf("%d", &row);
                        printf("Ligne %d", row);
                        if (row <= 14)
                            {
                            printf(" \n En qu'elle Colonne voulez vous placez le premier pisteur ? ");
                            scanf("%d", &col);
                            if (col <=29)
                                {
                                printf("Les pisteurs ce placent aux colonnes %d\n", col);
                                }
                            else
                                {
                                printf("Veuillez saisir des valeurs correspondante au tableau\n");
                                return 0 ;
                                }
                            }
                        else
                            {
                            printf("Veuillez saisir une Colonne compris entre 1 et 29.\n");
                            return 0;
                            }
                            Pisteur--;
                            printf("Il reste %d Pisteurs \n", Pisteur);
                        }
                        Pisteur--;
                    }
                else
                    {
                    printf("\n Veuillez entrer un entier correct.\n");
                    }
                return 0;
            }
           }
}*/
void placage_Pisteur(int Pisteur, int Map1[Colonne][Ligne], positionP str_map[MAXPISTEUR])
{
    int i, hori, verti;
            printf(" Entrez le nombre de Pisteur (max 10): ");
            scanf("%d",&Pisteur);
    for(i=1;i<=Pisteur;i++)
    {
        printf("\nEntrez la position de l'axe X du pisteur numero %d (Compris 1 et 29): \n",i);
        scanf("%d",&LIGNE);
            while(hori<1 || hori> Colonne){
                hori=0;
                printf("La position de l'axe X du pisteur %d est incorrecte, veuillez en saisir une nouvelle (Compris entre 1 et 29): \n",i);
                scanf("%d",&hori);
            }
            printf("\nEntrez la position de l'axe Y du pisteur numero %d (Compris entre 1 et 14): \n",i);
            scanf("%d",&verti);//On récupère la position en Y
            while (verti<1 || verti > Ligne){
                verti=0;
                printf("La position de l'axe Y du pisteur %d est incorrecte, veuillez en saisir une nouvelle (Compris entre 1 et 14): \n",i);
                scanf("%d",&verti);
            }

        Map1[verti][hori]='P';
        str_map->x=Ligne;
        str_map->y=Colonne;

        //system("cls");
        afficheTab(Map1);
    }
}

