#ifndef PERSONNAGE_HPP_INCLUDED
#define PERSONNAGE_HPP_INCLUDED

#include <iostream>
#include <string>

class Personnage
{
    public:

    //METHODES
        Personnage();
        Personnage(std::string nomPersonnage);

        void recevoirDegats(int nbDegat);
        std::string getNomPersonnage() const;

        void coupDePoing(Personnage &cible) const;
        void afficherSpecialisation() const;
        void presentationPersonnage() const;

//LES CLASSES FILLE ONT DESORMAIS ACCES AUX ATTRIBUTS DE LA CLASSE MERE PERSONNAGE
protected:

    //ATTRIBUTS
        std::string m_nomPersonnage;
        int m_pointDeVie;
};

#endif // PERSONNAGE_HPP_INCLUDED