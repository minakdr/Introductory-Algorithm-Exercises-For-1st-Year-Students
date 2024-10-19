#include <stdio.h>

// The program always starts with int main ()
// On commence toujours un programme avec int main ()

int main () {
   // First, we declare constants
   // On commence par declarer les constantes
   const float pi = 3.14 ;
   // Then we declare the variables
   // Ensuite les variables
   float rayon, surface;
   
   // Processing
   // Traitement
   
   printf("Entrez le rayon du cercle : ");
   scanf("%f", &rayon);
   
   // Calculation of the result
   // Calcul du resultat
   
   surface = rayon*rayon*pi;
   
   //affichage du resultat
   // Display the result
   
   printf("voici la surface %f " , surface);

   // On termine toujours le programme par return 0
   // We always end the program with return 0

   return 0;

}
