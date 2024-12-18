#include "..\Headers\FctVehicule.hpp"

void infoVehicule(Vehicule const& vehicule)                     // Ingrédient n° 2 : une référence pour permettre d'utiliser notre classe et ses classes filles
{
    vehicule.affiche();
}

int nombreRoueVehicule(Vehicule const& vehicule)
{
    return vehicule.nbrRoues();
}