#include <iostream>
/*----------------*/
#include "Geometrie.hpp"

void perimetre(double _longueur, double _largeur)
{
    double _perimetre(0.0);

    _perimetre = (_longueur + _largeur)*2;

    std::cout << "Le perimetre de votre quadrilatere est de : " << _perimetre << " cm !" << std::endl;
}

void surface(double _longueur, double _largeur)
{
    double _surface(0.0);

    _surface = (_longueur * _largeur);

    std::cout << "La surface de votre quadrilatere est de : " << _surface << " cm2 !" << std::endl;
}