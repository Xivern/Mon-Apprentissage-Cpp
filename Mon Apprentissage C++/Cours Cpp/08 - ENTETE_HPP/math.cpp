#include <iostream>
#include <cmath>

//Découverte des fichiers d'entête
#include "math.hpp"

//On réutilise notre fonction de notre septieme programme
int ajouteDeux(int valeurRecupere) // Dans un premier temps, on défini le type de la valeur de retour, puis on défini le type des arguments que notre fonction va récupérer
{
    int resultat = valeurRecupere+2;

    return resultat;
}

int conversionSeconde(int heures, int minutes, int secondes)
{
    int totalSecondes = 0;

    totalSecondes = (heures*3600) + (minutes*60) + secondes;

    return totalSecondes;
}