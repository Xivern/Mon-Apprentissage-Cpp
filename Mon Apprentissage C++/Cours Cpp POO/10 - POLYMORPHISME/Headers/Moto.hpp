#ifndef MOTO_HPP_INCLUDED
#define MOTO_HPP_INCLUDED

#include <iostream>

#include "Vehicule.hpp"                      //On inclut la classe "Vehicule" pour permettre l'héritage

class Moto : public Vehicule                //Signifie que l'on créer une classe "Moto" qui hérite de la classe "Vehicule"
{
    public:

        Moto();
        Moto(int prixVehicule, double vitesseMax);

        void affiche() const;               //Affiche une description de la voiture

    private:

        double m_vitesse;                   //La vitesse maximale de la moto

};

#endif // MOTO_HPP_INCLUDED