#ifndef FCTVEHICULE_HPP_INCLUDED
#define FCTVEHICULE_HPP_INCLUDED

#include <iostream>

#include "Vehicule.hpp"

/*
 * Fonction qui renvoie le type d'objet renseigné en paramètre
 * - vehicule : Objet de la classe voiture ou ses classes filles
 * Valeur retournée : Texte permettant a l'utilisateur de connaitre le type de l'objet
 */
void infoVehicule(Vehicule const& vehicule);

/*
 * Fonction qui renvoie le nombre de roue concernant le véhicule renseigné en paramètre
 * - vehicule : Objet de la classe voiture ou ses classes filles
 * Valeur retournée : entier positif concernant le nombre de roue du vehicule
 */
int nombreRoueVehicule(Vehicule const& vehicule);

#endif // FCTVEHICULE_HPP_INCLUDED