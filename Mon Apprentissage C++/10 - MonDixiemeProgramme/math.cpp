#include <iostream>
#include <cmath>
#include <vector>   //On ajoute la bibliothèque "vector" pour permettre la création de tableau dynamique

#include "math.hpp"

using namespace std;

double calculMoyenne(vector<int> const tableau)    //En utilisant const, On n'empêche la possibilité de pouvoir altérer notre tableau
{
    int const tailleTab(tableau.size());
    int valeurTotale(0);

    for (int i = 0; i < tailleTab; i++)
    {
        valeurTotale += tableau[i];
    }

    double moyenne = static_cast<double>(valeurTotale) / tailleTab;

    return moyenne;
}