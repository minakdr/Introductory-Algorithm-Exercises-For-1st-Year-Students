#include <stdio.h>
#include <math.h>  // Pour les fonctions mathématiques / For mathematical functions

#define PI 3.14  // Définition de la constante PI avec la valeur 3.14 / Defining the PI constant with the value 3.14

int main() {
    // Déclaration des variables / Declaring variables
    double longueur, largeur, rayon;
    double aire_rectangle, diametre_cercle, aire_cercle;

    // Demande à l'utilisateur la longueur et la largeur du rectangle / Asking the user for the length and width of the rectangle
    printf("Entrez la longueur du rectangle: ");  // Prompt en français / Prompt in French
    scanf("%lf", &longueur);  // Lecture de la longueur en double / Reading the length as a double
    
    printf("Entrez la largeur du rectangle: ");  // Prompt en français / Prompt in French
    scanf("%lf", &largeur);  // Lecture de la largeur en double / Reading the width as a double
    
    // Calcul de l'aire du rectangle (Longueur * Largeur) / Calculating the area of the rectangle (Length * Width)
    aire_rectangle = longueur * largeur;  // Aire du rectangle / Rectangle area
    printf("L'aire du rectangle est: %.2f\n", aire_rectangle);  // Affichage de l'aire du rectangle / Displaying the rectangle's area

    // Demande à l'utilisateur le rayon du cercle / Asking the user for the radius of the circle
    printf("Entrez le rayon du cercle: ");  // Prompt en français / Prompt in French
    scanf("%lf", &rayon);  // Lecture du rayon en double / Reading the radius as a double
    
    // Calcul du diamètre du cercle (2 * rayon) / Calculating the diameter of the circle (2 * radius)
    diametre_cercle = 2 * rayon;  // Diamètre du cercle / Circle diameter
    // Calcul de l'aire du cercle (π * rayon^2) / Calculating the area of the circle (π * radius^2)
    aire_cercle = PI * rayon * rayon;  // Aire du cercle / Circle area
    
    // Affichage des résultats pour le cercle / Displaying the results for the circle
    printf("Le diamètre du cercle est: %.2f\n", diametre_cercle);  // Affichage du diamètre du cercle / Displaying the circle's diameter
    printf("L'aire du cercle est: %.2f\n", aire_cercle);  // Affichage de l'aire du cercle / Displaying the circle's area
    
    return 0;  // Fin du programme / End of the program
}
