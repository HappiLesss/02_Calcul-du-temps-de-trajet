# Pseudo code de votre programme
1 : Définition des constantes qui seront utilisées pour les calculs
    1.1 Constantes données
    double s1 = 5.; (Vitesse sur la route en KM/H)
    double s2 = 2.; (Vitesse sur le sable en KM/H)
    double dy = 10.; (longueur total de la route en KM)
    double dx = 3.; (longueur entre la route et le point dans le sable en KM)
    1.2 Constante calculée
    Calcul de la valeur optimale de L1 en définissant notre fonction totale du temps et en faisant sa dérivée
    double L1 = 8.7; (longueur du trajet sur la route du robot.)
2 : Calcul de la distance dans le sable
    2.1 Calcul du côté du triangle manquant
        cote_b = dy - L1 (en KM)
    2.2 Définition de l'hypothénus (distance dans le sable)
        L2 (Hypoténus) = ((dx)au carré + (cote_triangle) au carré) le tout à la racine (en KM)
3 : Calcul du temps par segement 
    3.1 Calcul du temps segement route 
        double temps_route =  L1/s1;
    3.2 Calcul du segement sable
        double temps_sable = L2/s2;
4 : Calcul du temps total en heures
    4.1 : Addition du temps sur la route avec le temps sur le sable
5 : Affichage du résultat à l'utilisateur en heures