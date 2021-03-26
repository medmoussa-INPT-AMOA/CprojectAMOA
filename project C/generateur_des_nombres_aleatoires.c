#include "generateur_des_nombres_aleatoires.h"

int generateur_des_nombres_aleatoires(){

    static int aleatoire;

    static int r;

    /* la fonction rand permet de generer a chaque instant un nombre different qu'on calcule son modulo le nombre de caractere
    de ce type dans le tableau ASCII plus le nombre ou debute ce type afin d'avoir un nombre qui correspond a une caractere du
    type demande */

    switch (type_de_mot_de_passe){

        case 'a':

            /* par exemple pour les lettres minuscules (type a) correspondent dans le tableau ASCII aux nombres 97 à 122 ce
            qui donne 122-97+1 lettre minuscule */

            aleatoire = (rand() % (122 + 1 - 97)) + 97;

            break;

        case 'b':

            aleatoire = (rand() % (90 + 1 - 65)) + 65;

            break;

        case 'c':

            aleatoire = (rand() % (57 + 1 - 48)) + 48;

            break;

        case 'd':

            while (1){

                r = (rand() % (256 + 1 - 0)) + 0;

                if (((r<=47) && (r>=33)) || ((r<=64) && (r>=58)) || ((r<=96) && (r>=91)) || ((r<=175) && (r>=123)) || ((r<=254) && (r>=178))){

                    aleatoire = r;

                    break;

                }

            }

            break;

        case 'e':

            aleatoire = (rand() % (126 + 1 - 33)) + 33;

            break;

        case 'f':

            while (1){

                r = (rand() % (256 + 1 - 0)) + 0;

                if (((r<=90) && (r>=65)) || ((r<=122) && (r>=97))){

                    aleatoire = r;

                    break;

                }

            }

            break;

        case 'g':

            while (1){

                r = (rand() % (256 + 1 - 0)) + 0;

                if (((r<=57) && (r>=48)) || ((r<=122) && (r>=97))){

                    aleatoire = r;

                    break;

                }

            }

            break;

        case 'h':

            while (1){

                r = (rand() % (256 + 1 - 0)) + 0;

                if (((r<=122) && (r>=97)) ||((r<=47) && (r>=33)) || ((r<=64) && (r>=58)) || ((r<=96) && (r>=91)) || ((r<=175) && (r>=123)) || ((r<=254) && (r>=178))){

                    aleatoire = r;

                    break;

                }

            }

            break;

        case 'i':

            while (1){

                r = (rand() % (256 + 1 - 0)) + 0;

                if (((r<=90) && (r>=65)) || ((r<=57) && (r>=48))){

                    aleatoire = r;

                    break;

                }

            }

            break;

        case 'j':

            while (1){

                r = (rand() % (256 + 1 - 0)) + 0;

                if (((r<=90) && (r>=65)) ||((r<=47) && (r>=33)) || ((r<=64) && (r>=58)) || ((r<=96) && (r>=91)) || ((r<=175) && (r>=123)) || ((r<=254) && (r>=178))){

                    aleatoire = r;

                    break;

                }

            }

            break;

        case 'k':

            while (1){

                r = (rand() % (256 + 1 - 0)) + 0;

                if (((r<=57) && (r>=48)) || ((r<=47) && (r>=33)) || ((r<=64) && (r>=58)) || ((r<=96) && (r>=91)) || ((r<=175) && (r>=123)) || ((r<=254) && (r>=178))){

                    aleatoire = r;

                    break;

                }

            }

            break;

        case 'l':

            while (1){

                r = (rand() % (256 + 1 - 0)) + 0;

                if(((r<=122) && (r>=97)) || ((r<=90) && (r>=65)) || ((r<=57) && (r>=48))){

                    aleatoire = r;

                    break;

                }

            }

            break;

        case 'm':

            while (1){

                r = (rand() % (256 + 1 - 0)) + 0;

                if(((r<=90) && (r>=65)) || ((r<=57) && (r>=48)) || ((r<=47) && (r>=33)) || ((r<=64) && (r>=58)) || ((r<=96) && (r>=91)) || ((r<=175) && (r>=123)) || ((r<=254) && (r>=178))){

                    aleatoire = r;

                    break;

                }

            }

            break;

        case 'n':

            while (1){

                r = (rand() % (256 + 1 - 0)) + 0;

                if(((r<=122) && (r>=97)) || ((r<=57) && (r>=48)) || ((r<=47) && (r>=33)) || ((r<=64) && (r>=58)) || ((r<=96) && (r>=91)) || ((r<=175) && (r>=123)) || ((r<=254) && (r>=178))){

                    aleatoire = r;

                    break;

                }

            }

            break;

        case 'o':

            while (1){

                r = (rand() % (256 + 1 - 0)) + 0;

                if(((r<=122) && (r>=97)) || ((r<=90) && (r>=65)) || ((r<=47) && (r>=33)) || ((r<=64) && (r>=58)) || ((r<=96) && (r>=91)) || ((r<=175) && (r>=123)) || ((r<=254) && (r>=178))){

                    aleatoire = r;

                    break;

                }

            }

            break;

        default:

            printf("Vous avez inserer un caractere qui ne correspond à aucun type du liste , le programme va redemarer de nouveau priere d'inserer un caractere valide \n");

            main();

    }

    return aleatoire;

}
