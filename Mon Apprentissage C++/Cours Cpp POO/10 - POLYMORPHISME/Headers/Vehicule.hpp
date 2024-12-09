#ifndef VEHICULE_HPP_INCLUDED
#define VEHICULE_HPP_INCLUDED

#include <iostream>

class Vehicule                              //Signifie que l'on créer la classe "Vehicule"
{
    public:

        Vehicule();
        Vehicule(int prixVehicule);

        void affiche() const;               //Affiche une description du Vehicule

    protected:

        int m_prix;                         //Prix du vehicule
};

#endif // VEHICULE_HPP_INCLUDED