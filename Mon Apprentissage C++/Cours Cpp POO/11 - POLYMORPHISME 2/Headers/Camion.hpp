#ifndef CAMION_HPP_INCLUDED
#define CAMION_HPP_INCLUDED

#include <iostream>

#include "Vehicule.hpp"                     //On inclut la classe "Vehicule" pour permettre l'héritage

class Camion : public Vehicule              //Signifie que l'on créer une classe "Voiture" qui hérite de la classe "Vehicule"
{
    public:

        Camion();
        Camion(std::string referenceVehicule, std::string marqueVehicule, int prixVehicule, double poidsTransport);

        virtual ~Camion();                 //Remarquez le 'virtual' ici

        virtual void affiche() const;       //Ingrédient n° 1 : virtual permet de déclarer une méthode virtuelle

    private:

        double m_poids;                        //Poids maximum en tonne que le camion peut transporter

};

#endif // CAMION_HPP_INCLUDED