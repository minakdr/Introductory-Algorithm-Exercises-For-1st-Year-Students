// We need this library to be able to use the printf and scanf functions
// Nous avons besoin de cette biblioth�que pour utiliser les fonctions printf et scanf
#include <stdio.h>

// The program always starts with int main()
// On commence toujours un programme avec int main()
int main() {

    // Declare integer variables to store user inputs and results
    // D�claration de variables enti�res pour stocker les entr�es utilisateur et les r�sultats
    int num1, num2, somme, produit, diff ;

    // Division result as a float to account for decimals
    // La variable division est de type float pour accepter les valeurs d�cimales
    float division;

    printf("Donnez les 2 numeros: ");

    // Read the two integers entered by the user
    // Lire les deux nombres entiers saisis par l'utilisateur
    scanf("%d %d", &num1, &num2);

    // Calculate the sum,the product ,the division and the difference of the two numbers
    // Calculer la somme, le produit, la division et la diff�rence des deux nombres
    somme = num1 + num2;
    produit = num1 * num2;
    diff = num1 - num2;

     // Check if num2 is not zero before performing the division to avoid division by zero
    // V�rifie si num2 n'est pas z�ro avant de faire la division pour �viter la division par z�ro
    if (num2 != 0) {
        // Perform floating-point division by casting num1 to float
        // Effectuer la division en virgule flottante en convertissant num1 en float
        division = (float) num1 / num2;
        printf("Voici la division : %f\n", division);
    } else {
        printf("Erreur : division par z�ro n'est pas permise.\n");
    }



    // Display the results
    // Afficher les resultats
    printf("Voici la somme : %d\n", somme);
    printf("Voici le produit : %d\n", produit);
    printf("Voici la difference : %d\n", diff);



    // End of the program
    // Fin du programme
    return 0;
}
