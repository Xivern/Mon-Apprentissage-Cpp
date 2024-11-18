#ifndef MAIN_HPP_INCLUDED
#define MAIN_HPP_INCLUDED

#include <string>

/*
Un fichier d'en-tête dont l'extension est .hpp  : il contient uniquement la description de la fonction, ce qu'on appelle le prototype de la fonction.
*/

class Personnage
{
    //METHODES (Fonctions membre de la classe)
    void recevoirDegat(int nbDegat)
    {
        
    }

    void attaquer(Personnage &cible)
    {

    }

    void boirePotionDeVie(int quantiteSoin)
    {

    }

    void changeArme(std::string nomNouvelleArme, int degatNouvelleArme)
    {

    }

    bool joueurVivant()
    {

    }

    //ATTRIBUTS (Variable membre de la classe)
    std::string m_nomPersonnage;
    int m_pointDeVie;
    int m_Mana;
    int m_degatJoueur;
    std::string m_nomArme;

};

#endif // MAIN_HPP_INCLUDED