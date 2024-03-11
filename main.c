#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//6- creer un tableau de 7 entiers, générés aléatoirement entre 0 et 9, Tri ce tableau avec la methode du tri par selection
/*
void triSelection(int *tab, int taille) {
    int i, j, minIndex, temp;
    for (i = 0; i < taille - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < taille; j++) {
            if (tab[j] < tab[minIndex]) {
                minIndex = j;
            }
        }
        temp = tab[i];
        tab[i] = tab[minIndex];
        tab[minIndex] = temp;
    }
}
void afficherTableau(int *tab, int taille) {
    for (int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}
int main() {
    int tableau[7];
    srand(time(NULL));

    for (int i = 0; i < 7; i++) {
        tableau[i] = rand() % 10;
    }
    printf("Tableau initial : ");
    afficherTableau(tableau, 7);
    triSelection(tableau, 7);
    printf("Tableau trie par selection : ");
    afficherTableau(tableau, 7);

    return 0;
}
*/

// Créer un tableau de 10 entiers, le remplir aléatoirement, supprimer les nombres pairs et afficher juste les nombres impairs.


/*void supprimerPairs(int *tab, int taille) {
    int j = 0;
    for (int i = 0; i < taille; i++) {
        if (tab[i] % 2 != 0) {
            tab[j] = tab[i];
            j++;
        }
    }
    for (int i = j; i < taille; i++) {
        tab[i] = 0;
    }
}
void afficherImpairs(int *tab, int taille) {
    for (int i = 0; i < taille; i++) {
        if (tab[i] != 0) {
            printf("%d ", tab[i]);
        }
    }
}

int main() {
    int tableau[10];
    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        tableau[i] = rand() % 100;
    }

    printf("Tableau initial : ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", tableau[i]);
    }
    supprimerPairs(tableau, 10);
    printf("\nNombres impairs : ");
    afficherImpairs(tableau, 10);

    return 0;
}*/
//Ecrire une fonction qui calcule la taille d'une chaine de caractères en utilisant les pointeurs, Attention, vous ne pouvez pas utiliser string.h

/*int SizeChain(char *chain) {
    char *ptr = chain;
    while (*ptr != '\0') {
        ptr++;
    }
    return ptr - chain;
}

int main() {
    char chaine[] = "Hello";

    int taille = SizeChain(chaine);

    printf("La taille de la chaine est : %d\n", taille);

    return 0;
}
*/
//Utiliser la fonction ToUpperCase() pour mettre en majuscules une chaîne de caractères (en utilisant les pointeurs)

void ToUpperCase(char *chaine) {
    while (*chaine != '\0') {
        if (*chaine >= 'a' && *chaine <= 'z') {
            *chaine = *chaine - ('a' - 'A');
        }
        chaine++;
    }
}
int main() {
    char chaine[] = "i'm joshua";
    printf("String before conversion to uppercase : %s\n", chaine);
    ToUpperCase(chaine);
    printf("String in uppercase : %s\n", chaine);

    return 0;
}
