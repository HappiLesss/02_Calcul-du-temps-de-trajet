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
 //Version de base
 const double L1 = 8.7;//Longueur du trajet sur route en km
 //Calcul du cote b
 double cote_b = dy-L1;
 //Calcul de l'hypothenus
 double L2 = sqrt((dx*dx) + (cote_b*cote_b));

 //Calcul des temps par partie
 double temps_route = L1/s1; // en heures
 double temps_sable = L2/s2; //en heures

 //Calcul du temps total
 double temps_total = temps_route + temps_sable;

 //Affichage du temps total
 cout<<"Le temps total du parcours est "<< temps_total<<" heures"<<endl;

 return EXIT_SUCCESS;
}

