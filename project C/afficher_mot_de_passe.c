#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "generateur_des_nombres_aleatoires.h"
#include "afficher_mot_de_passe.h"

void afficher_mot_de_passe(){

    static char mot_de_passe[512];

    static int nombre_aleatoire;

    static int k;

    // on utilise une boucle for pour rassembler les caracteres aleatoire genere par la fonction generateur_des_nombres_aleatoires dans une chaine de caractere (mot_de_passe)

    for (k = 0; k < longueur_du_mot_de_pass; k++) {

        nombre_aleatoire = generateur_des_nombres_aleatoires();

        mot_de_passe[k] = nombre_aleatoire;

    }

    for (int j = 0; j < longueur_du_mot_de_pass+19; j++) {

        printf("=");

    }

    printf("\n");

    printf("votre mot de passe est:  %s", mot_de_passe);

    printf("\n");

    for (int a = 0; a < longueur_du_mot_de_pass+19; a++) {

        printf("=");

    }

    printf("\n");
}


