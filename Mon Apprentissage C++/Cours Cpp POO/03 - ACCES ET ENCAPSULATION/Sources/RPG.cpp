#include "..\Headers\RPG.hpp"

using namespace std;

#define PDV_MIN 0
#define PDV_MAX 100

//DEFINITION DES METHODES

void Personnage::recevoirDegat(int nbDegat)
{
    m_pointDeVie -= nbDegat;                            //On réduit les points de vie du joueur en fonction du nombre de dégat subit

    if (m_pointDeVie < PDV_MIN)                         //On borne à 0 les points de vie minimum
    {
        m_pointDeVie = PDV_MIN;
    }
}

void Personnage::attaquer(Personnage &cible)
{
    cible.recevoirDegat(m_degatJoueur);                 //La cible recoit les dégats
}

void Personnage::boirePotionDeVie(int quantiteSoin)
{
    m_pointDeVie += quantiteSoin;                       //On augmente les points de vie en fonction du soin reçu

    if (m_pointDeVie > PDV_MAX)                         //On borne à 0 les points de vie maximum
    {
        m_pointDeVie = PDV_MAX;
    }
}

void Personnage::changeArme(string nomNouvelleArme, int degatNouvelleArme)
{
    m_nomArme = nomNouvelleArme;                        //On change le nom de l'arme de l'attribut nomNouvelleArme
    m_degatJoueur = degatNouvelleArme;                  //On change les dégats du joueur de l'attribut m_degatJoueur
}

bool Personnage::joueurVivant()
{
    return m_pointDeVie > 0;                            //Retourne vrai si les points de vie sont supérieur à 0
}