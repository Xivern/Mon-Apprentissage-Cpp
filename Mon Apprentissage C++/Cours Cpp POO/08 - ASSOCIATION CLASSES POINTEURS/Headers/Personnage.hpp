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

        /*----------NEW----------*/
        Personnage(Personnage const& personnageACopier);            //Constructeur de copie
        ~Personnage();                                              //Destructeur

        Personnage& operator=(Personnage const& personnageACopier); //On construit la méthode de comparaison arithmetique =

        void recevoirDegat(int nbDegat);
        void attaquer(Personnage &cible);
        void boirePotionDeVie(int quantiteSoin);
        void changeArme(std::string nomNouvelleArme, int degatNouvelleArme);
        
        bool joueurVivant() const;
        void infoPersonnage() const;
        void infoAdressePersonnage() const;

    private :
    
        std::string m_nomPersonnage;
        int m_pointDeVie;
        int m_Mana;
        /*----------NEW----------*/
        Arme *m_arme;                    //On ajoute désormais un pointeur arme (Ajout d'un *)
        
};

#endif // PERSONNAGE_HPP_INCLUDED