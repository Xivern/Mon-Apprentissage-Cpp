#ifndef MAGE_HPP_INCLUDED
#define MAGE_HPP_INCLUDED

#include <iostream>
#include <string>

#include "..\Headers\Personnage.hpp"        //On inclut la classe "Personnage" pour permettre l'héritage

class Mage : public Personnage              //Signifie que l'on créer une classe "Mage" qui hérite de la classe "Personnage"
{
    public :

        Mage();
        Mage(std::string nomMage);

        void bouleDeFeu(Personnage &cible);
        void eclarDeGlace(Personnage &cible);
        void concentrationDeMana();

        void afficherSpecialisation() const;

    private :
        int m_mana;
};

#endif // MAGE_HPP_INCLUDED