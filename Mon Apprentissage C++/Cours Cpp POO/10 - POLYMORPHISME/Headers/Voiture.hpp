#ifndef VOITURE_HPP_INCLUDED
#define VOITURE_HPP_INCLUDED

#include <iostream>

#include "Vehicule.hpp"                      //On inclut la classe "Vehicule" pour permettre l'héritage

class Voiture : public Vehicule              //Signifie que l'on créer une classe "Voiture" qui hérite de la classe "Vehicule"
{
    public:

        Voiture();
        Voiture(int prixVehicule, int nombrePorte);

        virtual ~Voiture();                 //Remarquez le 'virtual' ici

        virtual void affiche() const;       //Ingrédient n° 1 : virtual permet de déclarer une méthode virtuelle

    private:

        int m_portes;                       //Le nombre de portes de la voiture

};

#endif // VOITURE_HPP_INCLUDED