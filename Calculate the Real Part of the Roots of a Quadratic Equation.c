#include <stdio.h>

int main() {
    double a, b, c; // ENG: Coefficients of the quadratic equation | FR: Coefficients de l'équation quadratique
    double discriminant, realPart; // ENG: Discriminant and real part of the roots | FR: Discriminant et partie réelle des racines

    // ENG: Prompt the user to enter coefficients a, b, and c
    // FR: Demander à l'utilisateur de saisir les coefficients a, b et c
    printf("Enter coefficients a, b, and c (a != 0):\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    // ENG: Check if a is zero
    // FR: Vérifier si a est égal à zéro
    if (a == 0) {
        printf("This is not a quadratic equation (a cannot be 0).\n"); // ENG: Inform the user it's not a quadratic equation | FR: Informer l'utilisateur que ce n'est pas une équation quadratique
        return 1; // ENG: Exit the program with an error code | FR: Quitter le programme avec un code d'erreur
    }

    // ENG: Calculate the discriminant
    // FR: Calculer le discriminant
    discriminant = b * b - 4 * a * c;

    // ENG: Calculate the real part of the roots
    // FR: Calculer la partie réelle des racines
    realPart = -b / (2 * a);

    // ENG: Display the real part based on the discriminant
    // FR: Afficher la partie réelle en fonction du discriminant
    if (discriminant >= 0) {
        printf("The real part of the roots is: %.2lf\n", realPart); // ENG: Display the real part of the roots | FR: Afficher la partie réelle des racines
    } else {
        printf("The roots are complex. The real part is: %.2lf\n", realPart); // ENG: Indicate the roots are complex and show the real part | FR: Indiquer que les racines sont complexes et afficher la partie réelle
    }

    return 0; // ENG: End the program successfully | FR: Terminer le programme avec succès
}
