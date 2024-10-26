#include <stdio.h>

int main()
{
    // Declare variables for Celsius and Fahrenheit temperatures
    // Déclarer des variables pour les températures en Celsius et en Fahrenheit
    float C, F;

    // Prompt the user to enter the temperature in Celsius
    // Demander à l'utilisateur de saisir la température en Celsius
    printf("Donnez la température en Celsius: ");

    // Read the Celsius temperature entered by the user
    // Lire la température en Celsius saisie par l'utilisateur
    scanf("%f", &C);

    // Convert Celsius temperature to Fahrenheit
    // Convertir la température de Celsius en Fahrenheit
    F = C * 9 / 5 + 32;

    // Display the temperature in Fahrenheit
    // Afficher la température en Fahrenheit
    printf("Voici la température en Fahrenheit: %f\n", F);

    // End of the program
    // Fin du programme
    return 0;
}
