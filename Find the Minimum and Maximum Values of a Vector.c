#include <stdio.h>

int main() {
    int vecteur[10]; // Array to hold 10 values | Tableau pour contenir 10 valeurs
    int taille = 10; // Size of the array | Taille du tableau
    int min, max;     // Variables to store the minimum and maximum values | Variables pour stocker le minimum et le maximum

    // Prompt the user to enter values for the array
    // Demander à l'utilisateur de saisir les valeurs du tableau
    printf("Please enter the %d values for the vector:\n", taille);
    for (int i = 0; i < taille; i++) {
        printf("Value %d: ", i + 1); // Indicate the position of the value |Indiquer la position de la valeur
        scanf("%d", &vecteur[i]);   //Read the value entered by the user |Lire la valeur saisie par l'utilisateur
    }

    // Initialize the minimum and maximum with the first value of the array
    // Initialiser le minimum et le maximum avec la première valeur du tableau
    min = vecteur[0];
    max = vecteur[0];

    // Loop through the array to find the minimum and maximum values
    // Parcourir le tableau pour trouver les valeurs minimale et maximale
    for (int i = 1; i < taille; i++) {
        if (vecteur[i] < min) { // ENG: Check if the current value is smaller than the current minimum
                                // FR: Vérifier si la valeur actuelle est plus petite que le minimum actuel
            min = vecteur[i];  // ENG: Update the minimum | FR: Mettre à jour le minimum
        }
        if (vecteur[i] > max) { // Check if the current value is larger than the current maximum
                                // Vérifier si la valeur actuelle est plus grande que le maximum actuel
            max = vecteur[i];  // Update the maximum | Mettre à jour le maximum
        }
    }

    // Display the results |Afficher les résultats
    printf("The minimum value is: %d\n", min); // Print the minimum value |Afficher la valeur minimale
    printf("The maximum value is: %d\n", max); //Print the maximum value | Afficher la valeur maximale

    return 0; //  Indicate that the program executed successfully |Indiquer que le programme s'est exécuté avec succès
}
