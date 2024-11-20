#include "..\Headers\RPG.hpp"

using namespace std;

#define PDV_MIN 0
#define PDV_MAX 100

//DEFINITION DES METHODES

Personnage::Personnage() : m_nomPersonnage("NoName"), m_pointDeVie(100), m_Mana(100), m_degatJoueur(10), m_nomArme("Mains nues")    //LISTE D'INITIALISATION
{

}

Personnage::Personnage(std::string nomPersonnage, std::string nomArme, int degatArme) : m_nomPersonnage(nomPersonnage), m_pointDeVie(100), 
                                                                                        m_Mana(100), m_degatJoueur(degatArme), m_nomArme(nomArme)
{
    
}

/*  ALTERNATIVE POSSIBLE MAIS MOINS PROPRE :
Personnage::Personnage()                            //METHODE CLASSIQUE DU CONSTRUCTEUR
{
    m_nomPersonnage = "NoName";
    m_pointDeVie = 100;
    m_Mana = 100;
    m_degatJoueur = 10;
    m_nomArme = "Mains nues";
}
*/

/* EXEMPLE DE DESTRUCTEUR : On utilise ~
Personnage::~Personnage()
{
    Rien à mettre ici car on ne fait pas d'allocation dynamique
    dans la classe Personnage. Le destructeur est donc inutile mais
    je le mets pour montrer à quoi cela ressemble.
    En temps normal, un destructeur fait souvent des delete et quelques
    autres vérifications si nécessaire avant la destruction de l'objet. 
}
*/

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

bool Personnage::joueurVivant() const
{
    return m_pointDeVie > 0;                            //Retourne vrai si les points de vie sont supérieur à 0
}

void Personnage::infoPersonnage() const
{
    cout <<"Nom: " << m_nomPersonnage << endl
         << "Points de vie: " << m_pointDeVie << endl
         << "Mana: " << m_Mana << endl
         << "Arme: " << m_nomArme << " (" << m_degatJoueur << " degats)" << endl
         << "-----------------" << endl;
}