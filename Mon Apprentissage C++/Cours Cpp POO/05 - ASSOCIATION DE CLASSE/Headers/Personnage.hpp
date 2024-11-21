#ifndef PERSONNAGE_HPP_INCLUDED
#define PERSONNAGE_HPP_INCLUDED

#include <iostream>
#include <string>

#include "..\Headers\Arme.hpp"          //On ajoute le fichier d'entête de la classe arme

class Personnage
{
    
    public :
    
        Personnage();
        Personnage(std::string nomPersonnage, std::string nomArme, int degatArme);

        void recevoirDegat(int nbDegat);
        void attaquer(Personnage &cible);
        void boirePotionDeVie(int quantiteSoin);
        void changeArme(std::string nomNouvelleArme, int degatNouvelleArme);
        
        bool joueurVivant() const;
        void infoPersonnage() const;

    private :
    
        std::string m_nomPersonnage;
        int m_pointDeVie;
        int m_Mana;
        Arme m_arme;                    //On ajoute un ATTRIBUTS arme
        
};

#endif // PERSONNAGE_HPP_INCLUDED