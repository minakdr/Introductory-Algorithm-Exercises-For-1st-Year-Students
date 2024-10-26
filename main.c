#include <stdio.h>

int main()
{
    // Declare variables for Celsius and Fahrenheit temperatures
    // D�clarer des variables pour les temp�ratures en Celsius et en Fahrenheit
    float C, F;

    // Prompt the user to enter the temperature in Celsius
    // Demander � l'utilisateur de saisir la temp�rature en Celsius
    printf("Donnez la temp�rature en Celsius: ");

    // Read the Celsius temperature entered by the user
    // Lire la temp�rature en Celsius saisie par l'utilisateur
    scanf("%f", &C);

    // Convert Celsius temperature to Fahrenheit
    // Convertir la temp�rature de Celsius en Fahrenheit
    F = C * 9 / 5 + 32;

    // Display the temperature in Fahrenheit
    // Afficher la temp�rature en Fahrenheit
    printf("Voici la temp�rature en Fahrenheit: %f\n", F);

    // End of the program
    // Fin du programme
    return 0;
}
