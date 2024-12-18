#ifndef GARAGE_HPP_INCLUDED
#define GARAGE_HPP_INCLUDED

#include <iostream>
#include <vector>

#include "Vehicule.hpp"                                     //On inclut la classe "Vehicule" pour permettre l'héritage

class Garage
{
    public:

        Garage();

        virtual ~Garage();                                  //Remarquez le 'virtual' ici

        virtual void afficherTous() const;                  //Affiche les informations de tous les véhicules
        virtual void ajouterVehicule(Vehicule* vehicule);   //Ajoute un véhicule au garage
        virtual void supprimerVehicule(size_t index);       //Supprime un véhicule du garage à un index donné

    private:

        std::vector<Vehicule*> m_listeVehicules;            // Liste des véhicules

};

#endif // GARAGE_HPP_INCLUDED