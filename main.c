#include <stdio.h>

// On commance toujours un programme avec int main ()
int main () {
   //on commence par declarer les constantes
   const float pi = 3.14 ;
   //ensuite les variables
   float rayon, surface;

  // Traitement
   printf("Entrez le rayon du cercle : ");
   scanf("%f", &rayon);
   //calcul du resultat
   surface = rayon*rayon*pi;
   //affichage du resultat
   printf("voici la surface %f " , surface);



   // On termine toujours le programme par return 0

   return 0;

}
