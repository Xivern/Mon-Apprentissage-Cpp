#ifndef GUERRIER_HPP_INCLUDED
#define GUERRIER_HPP_INCLUDED

#include <iostream>
#include <string>

#include "..\Headers\Personnage.hpp"        //On inclut la classe "Personnage" pour permettre l'héritage

class Guerrier : public Personnage          //Signifie que l'on créer une classe "Guerrier" qui hérite de la classe "Personnage"
{
    public:
    
        Guerrier();
        Guerrier(std::string nomGuerrier);

        void frapperAvecMarteau(Personnage &cible);

        void afficherSpecialisation() const;

    private:
        int m_rage;
};

#endif // GUERRIER_HPP_INCLUDED