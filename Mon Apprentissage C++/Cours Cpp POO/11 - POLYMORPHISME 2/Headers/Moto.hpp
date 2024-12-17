#ifndef MOTO_HPP_INCLUDED
#define MOTO_HPP_INCLUDED

#include <iostream>

#include "Vehicule.hpp"                      //On inclut la classe "Vehicule" pour permettre l'héritage

class Moto : public Vehicule                //Signifie que l'on créer une classe "Moto" qui hérite de la classe "Vehicule"
{
    public:

        Moto();
        Moto(std::string referenceVehicule, std::string marqueVehicule, int prixVehicule, double vitesseMax);

        virtual ~Moto();                    //Remarquez le 'virtual' ici

        virtual void affiche() const;       //Ingrédient n° 1 : virtual permet de déclarer une méthode virtuelle
    private:

        double m_vitesse;                   //La vitesse maximale de la moto

};

#endif // MOTO_HPP_INCLUDED