# Pseudo code de votre programme
1 : Definition des constantes
    double speed_route = 5.;
    double speed_sable = 2.;
    double dy = 10.; longueur total de la route(en KM)
    double dx = 3.; longueur entre la route et le point dans le sable (en KM)
    double L1 = 6. longueur du trajet sur la route du robot
2: Demander la saisie de L1 par utilisateur
    Stocker la valeur de L1 dans int L1 = saisie utilisateur
2 : calcul de la distance dans le sable
    Definition du cote du triangle
        cote_triangle = dy - L1 //en KM
    Definition de l'hypothénus (distance dans le sable)
        hyopotenuse = (dx)au carré + (cote_triangle) au carré le tout à la racine //en Km
4 : Calcul du temps par segement 
    Calcul du temps segement route 
        L1.(mettre en décimal)/Speed 1
    Calcul du segement sable
    double temps_sable = hyopotenuse.(mettre en decimal)/speed_sable.(mettre en decimal)
5 : Calcul du temps total