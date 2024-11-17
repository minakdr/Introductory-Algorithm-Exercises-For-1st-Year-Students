#include <stdio.h>

int main() {
    int a, b, somme = 0;

    // Demander à l'utilisateur de saisir deux entiers
    // Prompt the user to enter two integers
    printf("Entrez le premier entier (a) : ");
    scanf("%d", &a);
    printf("Entrez le deuxième entier (b) : ");
    scanf("%d", &b);

    // Vérification des bornes pour s'assurer que a <= b
    // Swap the values if a > b to ensure a is less than or equal to b
    if (a > b) {
        printf("Les bornes sont inversées. Les valeurs seront échangées.\n");
        int temp = a;
        a = b;
        b = temp;
    }

    // Calcul de la somme des entiers successifs
    // Calculate the sum of all integers between a and b (inclusive)
    for (int i = a; i <= b; i++) {
        somme += i;
    }

    // Affichage du résultat
    // Display the result
    printf("La somme des entiers de %d à %d est : %d\n", a, b, somme);

    return 0;
}
