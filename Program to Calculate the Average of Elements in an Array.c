#include <stdio.h>

int main() {
    int vecteur[10]; // Déclaration d'un tableau pour stocker 10 entiers // Declaration of an array to store 10 integers
    int somme = 0;   // Variable pour stocker la somme des éléments  // Variable to store the sum of the elements
    float moyenne;   // Variable pour stocker la moyenne    // Variable to store the average   

    // Demander à l'utilisateur de saisir 10 entiers
    // Prompt the user to enter 10 integers
    printf("Entrez 10 entiers :\n");
    for (int i = 0; i < 10; i++) {
        printf("Entier %d: ", i + 1);
        scanf("%d", &vecteur[i]);
    }

    // Calculer la somme des éléments du vecteur
    // Calculate the sum of the elements in the array
    for (int i = 0; i < 10; i++) {
        somme += vecteur[i];
    }

    // Calculer la moyenne
    // Calculate the average
    moyenne = somme / 10.0; // Utilisation de 10.0 pour obtenir un résultat en flottant

    // Afficher la somme et la moyenne
    // Display the sum and the average
    printf("La somme des éléments du vecteur est : %d\n", somme);
    printf("La moyenne des éléments du vecteur est : %.2f\n", moyenne);

    return 0;
}
