/*
Écrire un programme qui demande à l'utilisateur de taper la largeur et la longueur d'un champ et qui en affiche le périmètre et la surface.

Cet exercice a pour but de vérifier le point technique suivant :
- l'utilisation de cin.
*/
#include <iostream>
/*----------------*/
#include "Geometrie.hpp"

int main()
{
    double longueur(0.0), largeur(0.0);

    std::cout << "Bienvenue !" << std::endl;
    std::cout << "Ce programme a pour but de calculer un perimetre et une surface" << std::endl;
    std::cout << "Je vous demanderai donc de me renseigner les donnees suivantes :" << std::endl;

    std::cout << "Longueur (cm) : ";
    std::cin >> longueur;

    std::cout << "Largeur (cm) : ";
    std::cin >> largeur;

    perimetre(longueur, largeur);
    surface(longueur, largeur);

    std::cout << "Bonne journee...";

    return 0;
}
