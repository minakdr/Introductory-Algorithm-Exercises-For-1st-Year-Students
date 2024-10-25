// We need this library to be able to use the printf and scanf functions
// Nous avons besoin de cette bibliothèque pour utiliser les fonctions printf et scanf
#include <stdio.h>

// The program always starts with int main()
// On commence toujours un programme avec int main()
int main() {

    // Declare integer variables to store user inputs and results
    // Déclaration de variables entières pour stocker les entrées utilisateur et les résultats
    int num1, num2, somme, produit, diff;
    printf("Donnez les 2 numeros: ");

    // Read the two integers entered by the user
    // Lit les deux nombres entiers saisis par l'utilisateur
    scanf("%d %d", &num1, &num2);

    // Calculate the sum,the product and the difference of the two numbers
    // Calcule la somme, le produit et la différencedes deux nombres
    somme = num1 + num2;
    produit = num1 * num2;
    diff = num1 - num2;

    // Display the results
    // Afficher les resultats
    printf("Voici la somme : %d\n", somme);
    printf("Voici le produit : %d\n", produit);
    printf("Voici la difference : %d\n", diff);

    // End of the program
    // Fin du programme
    return 0;
}
