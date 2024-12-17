#ifndef VEHICULE_HPP_INCLUDED
#define VEHICULE_HPP_INCLUDED

#include <iostream>

class Vehicule                              //Signifie que l'on créer la classe "Vehicule"
{
    public:

        Vehicule();
        Vehicule(std::string m_referenceVehicule, std::string m_marqueVehicule, int prixVehicule);

        virtual ~Vehicule();                //Remarquez le 'virtual' ici

        virtual void affiche() const;       //virtual permet de déclarer une méthode virtuelle
                                            //Ingrédient n° 1 : Permet d'utiliser des fonctions lorsque des classes filles sont placé en paramètre        
    protected:

        std::string m_reference;            //rérérence du véhicule
        std::string m_marque;               //Marque du véhicule
        int m_prix;                         //Prix du vehicule
};

#endif // VEHICULE_HPP_INCLUDED