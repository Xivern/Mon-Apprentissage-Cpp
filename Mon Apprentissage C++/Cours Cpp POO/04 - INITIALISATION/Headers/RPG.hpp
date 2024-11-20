#ifndef RPG_HPP_INCLUDED
#define RPG_HPP_INCLUDED

#include <iostream>
#include <string>

class Personnage
{
    //PUBLIC : accessible depuis l'extérieur de la METHODE 
    public :

    //METHODES (Fonctions membre de la classe)

        //CONSTRUCTEUR (Initialisation des attributs)
        Personnage();                                                                       //Constructeur par défaut
        Personnage(std::string nomPersonnage, std::string nomArme, int degatArme);          //Constructeur que l'on a surchargé

        void recevoirDegat(int nbDegat);
        void attaquer(Personnage &cible);
        void boirePotionDeVie(int quantiteSoin);
        void changeArme(std::string nomNouvelleArme, int degatNouvelleArme);
        
        //On utilise const pour faire de la lecture seule d'attribut
        bool joueurVivant() const;
        void infoPersonnage() const;

    //PRIVATE : accessible UNIQUEMENT depuis l'intérieur de la METHODE
    private :

    //ATTRIBUTS (Variable membre de la classe)
        std::string m_nomPersonnage;
        int m_pointDeVie;
        int m_Mana;
        int m_degatJoueur;
        std::string m_nomArme;

    //IMPORTANT : REGLE EN POO : Tous les attributs d'une classe doivent toujours être privés !!!!!
};

#endif // RPG_HPP_INCLUDED