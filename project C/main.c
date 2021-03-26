#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "afficher_mot_de_passe.h"

char type_de_mot_de_passe;

int longueur_du_mot_de_pass = 0;

int main() {

    //On initialise la fonction srand par le temps ecoule entre le lancement du programme et 1970 ce qui permet de generer de differents nombres avec la fonction rand a chaque lancement du programme , ce qui ne sera pas le cas si on s'abstient a utiliser srand(time())

    srand(time(NULL));

    //Une breve introduction

    printf("Bienvenue au mot de passe generateur\n\n");

    printf("Tu peux generer de forts mots de passe impossible a pirater \n\n");

    printf("Choisir les types a utiliser dans votre mots de passe , tu peux choisir un seul type ou les combiner selon votre besoin \n\n");

    printf("voici une liste exhaustives des types que tu peux utiliser \n\n");

    printf("a) les lettres en minuscule: de a jusque z \nb) les lettres en majuscule de A jusque Z \nc) les chiffres de 0 jusque 9 \nd) les  caracteres speciaux \ne) une combinaison de tout les types cites avant \nf) une combinaison des lettres majuscules et minuscules \ng) une combinaisons des lettres minuscules et des chiffres\n"
                   "h) une combinaison des lettres minuscules et des caracteres speciaux \ni)  une combinaison des lettres majuscules et des chiffres \nj) une combinaison des lettres majuscules et des caracteres speciaux \nk) une combinaison des chiffres et des caracteres speciaux \nl) tout les types sans les caracteres speciaux \nm) tout les types sans les lettres minuscules \nn) tout les types sans les lettres majuscules "
                   "\no) tout les types sauf les chiffres\n");

    printf("entrer quel type vous voulez \n");

    //on demande a l'utilisateur les types a utiliser dans son mot de passe en se basant sur la liste affichée ..

    scanf(" %c",&type_de_mot_de_passe);

    printf("Entrer la longueur du mot de passe\n");

    //on demande la longueur souhaité du mot de passe

    scanf("%d",&longueur_du_mot_de_pass);

    // on demande le nombre de mot de passe souhaité

    printf("combien de mot de passe voulez-vouz??\n");

    int nombre_de_mots_de_passe;

    scanf("%d",&nombre_de_mots_de_passe);

    printf("%d",nombre_de_mots_de_passe);

    // on utilise une boucle while pour afficher (nombre_de_mots_de_passe) fois un mot de passe different en utilisant la fonction afficher_mot_de_passe

    while (nombre_de_mots_de_passe>0){

        afficher_mot_de_passe();

        nombre_de_mots_de_passe--;

        _sleep(1000);

    }

    int de_nouveau;

    printf("Voulez-vous generer un autre mot de passe (1/0)\n");

    //on demande a l'utilisateur s'il veut generer un autre mot de passe 1 affirme et refait le processus de nouveau et 0 le sort du programme on affichant un message de remerciement

    scanf("%d",&de_nouveau);

    if (de_nouveau == 1){

        main();

    } else if (de_nouveau == 0){

        printf("C'etait un plaisir de vous servir\n");

    } else{

        printf("choix invalide\n");

    }


    return 0;

}



