#ifndef VEHICULE_HPP_INCLUDED
#define VEHICULE_HPP_INCLUDED

#include <iostream>

class Vehicule                              //Signifie que l'on créer la classe "Vehicule"
{
    public:

        Vehicule();
        Vehicule(int prixVehicule);

        virtual ~Vehicule();                //Remarquez le 'virtual' ici

        virtual void affiche() const;       //virtual permet de déclarer une méthode virtuelle
                                            //Ingrédient n° 1 : Permet d'utiliser des fonctions lorsque des classes filles sont placé en paramètre        
    protected:

        int m_prix;                         //Prix du vehicule
};

#endif // VEHICULE_HPP_INCLUDED