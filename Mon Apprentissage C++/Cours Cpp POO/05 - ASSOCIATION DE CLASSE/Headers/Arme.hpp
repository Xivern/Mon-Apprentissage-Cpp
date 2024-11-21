#ifndef ARME_HPP_INCLUDED
#define ARME_HPP_INCLUDED

#include <iostream>
#include <string>

class Arme
{
    public :

        Arme();
        Arme(std::string nomArme, int degatArme);

        void changer(std::string nomArme, int degatArme);
        
        int getDegats() const;
        void afficher() const;

    private :

        std::string m_nom;
        int m_degats;

    //IMPORTANT : REGLE EN POO : Tous les attributs d'une classe doivent toujours être privés !!!!!
};

#endif // ARME_HPP_INCLUDED