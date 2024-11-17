#include <stdio.h>

int main() {
    int n;
    unsigned long factorial = 1; // Utilisation de "unsigned long" pour gérer les grandes valeurs
                                      // Using "unsigned long" to handle large factorial values

    // Demander à l'utilisateur de saisir un entier positif
    // Prompt the user to enter a positive integer
    printf("Entrez un nombre entier positif : ");
    scanf("%d", &n);

    // Vérifier si l'entrée est invalide (négative)
    // Check if the input is invalid (negative number)
    if (n < 0) {
        printf("Erreur : La factorielle n'est pas définie pour les nombres négatifs.\n");
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        // Calculer la factorielle
        // Calculate the factorial
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }

        // Afficher le résultat
        // Display the result
        printf("La factorielle de %d est : %llu\n", n, factorial);
        printf("The factorial of %d is: %llu\n", n, factorial);
    }

    return 0;
}
