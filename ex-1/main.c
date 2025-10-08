#include <stdio.h>
#include <stdlib.h>

int main() {
    int nombre;  // variable pour stocker le nombre choisi

    // Demande à l'utilisateur un nombre entier
    printf("Choisissez un nombre entier : ");
    scanf("%d", &nombre);

    // Comparaison avec 42
    if (nombre > 42) {
        printf("Le nombre %d est supérieur à 42.\n", nombre);
    } 
    else if (nombre < 42) {
        printf("Le nombre %d est inférieur à 42.\n", nombre);
    } 
    else {
        printf("Le nombre est égal à 42.\n");
    }

    // Code de fin du programme
    exit(0);
}

#