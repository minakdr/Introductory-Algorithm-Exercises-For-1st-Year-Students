#include <stdio.h> // Inclusion de la bibliothèque standard d'entrée/sortie / Include the standard input/output library

int main()  {
    int nombre; // Déclaration de la variable pour stocker le nombre saisi par l'utilisateur /
                //Declare a variable to store the user's input number
  

    // Demande à l'utilisateur de saisir un nombre
    //Prompt the user to enter a number
    printf("Entrez un nombre pour afficher sa table de multiplication : ");
    scanf("%d", &nombre); 
    printf("Table de multiplication de %d :\n", nombre); 

    // Boucle for pour générer et afficher la table de multiplication 
    // For loop to generate and display the multiplication table
    for (int i = 1; i <= 10; i++) { 
        // Affichage de la multiplication actuelle 
        // Display the current multiplication
  
        printf("%d x %d = %d\n", nombre, i, nombre * i); 
        
    }

    return 0; // Fin du programme
              // End of the program
}
