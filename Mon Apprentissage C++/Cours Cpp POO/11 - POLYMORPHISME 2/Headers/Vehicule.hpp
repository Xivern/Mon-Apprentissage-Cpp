#ifndef VEHICULE_HPP_INCLUDED
#define VEHICULE_HPP_INCLUDED

#include <iostream>

class Vehicule                              //Signifie que l'on créer la classe "Vehicule"
{
    public:

        Vehicule();
        Vehicule(std::string m_referenceVehicule, std::string m_marqueVehicule, int prixVehicule, int anneeFabrication);

        virtual ~Vehicule();

        virtual void affiche() const;       //virtual permet de déclarer une méthode virtuelle
        virtual int nbrRoues() const = 0;   //On ne peut pas dire combien de roue a un véhicule : On met donc = 0 pour dire que cette fonction n'existe pas ici (METHODE VIRTUELLE PURE)     

        /*
        Vehicule est désormais une classe abstraite !
        Une classe qui possède au moins une méthode virtuelle pure est une classe abstraite.
        On ne peut pas créer d'objet à partir d'une classe abstraite.
        La ligne suivante ne compilera pas :
        >> Vehicule vroomMobile(10000); //Création d'un véhicule valant 10000 euros.
        */

    protected:

        std::string m_reference;            //rérérence du véhicule
        std::string m_marque;               //Marque du véhicule
        int m_prix;                         //Prix du vehicule
        int m_anneeFab;                     //Année de fabrication du vehicule
};

#endif // VEHICULE_HPP_INCLUDED