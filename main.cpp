/* ---------------------------
Laboratoire : 02
Auteur(s) : Maxime Schmidhauser
Date : 23.09.2026
But : Calcul du temps de trajet 
Remarque(s) : 
--------------------------- */
#include <cmath>
#include <iostream>
#include <cstdlib>
using namespace std;

int main () {

 //Definition des constantes
 const double s1 = 5.;// vitesse sur la route en KM/h
 const double s2 = 2.;// vitesse sur le sable en KM/h
 const double dy = 10.;//longueur total de la route
 const double dx = 3.;//longueur entre le point et la route, coté a du triangle
 // La valeure 8.7 a été trouvée en faisant la dérivée de la fonction total du temps
 //Nous posons L1 comme valeure inconnue dans notre équation
 //f(x) = x/5 + sqr(dx^2 + (10-x)^2)/2
 const double L1 = 8.7;//Longueur du trajet sur route en km
 //Calcul du cote b
 const double cote_b = dy-L1; // en KM
 //Calcul de l'hypothenus
 const double L2 = sqrt(pow(dx,2) + pow(cote_b,2)); //en KM

 //Calcul des temps par partie
 const double temps_route = L1/s1; // en heures
 const double temps_sable = L2/s2; //en heures

 //Calcul du temps total
 const double temps_total = temps_route + temps_sable; //en heures

 //Affichage du temps total
 cout<<"Le temps total du parcours est "<< temps_total<<" heures"<<endl;

 return EXIT_SUCCESS;
}

