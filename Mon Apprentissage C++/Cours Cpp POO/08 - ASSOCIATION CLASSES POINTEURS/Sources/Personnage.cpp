#include "..\Headers\Personnage.hpp"

using namespace std;

#define PDV_MIN 0
#define PDV_MAX 100

//DEFINITION DES CONSTRUCTEURS

Personnage::Personnage() : m_nomPersonnage("NoName"), m_pointDeVie(100), m_Mana(100)
{
    m_arme = new Arme();                    //Construction du pointeur vers l'objet créé
}

Personnage::Personnage(std::string nomPersonnage, std::string nomArme, int degatArme) : m_nomPersonnage(nomPersonnage), m_pointDeVie(100), m_Mana(100)
{
    m_arme = new Arme(nomArme, degatArme);  //Construction du pointeur vers l'objet créé
}

//CONSTRUCTEUR DE COPIE

Personnage::Personnage(Personnage const& personnageACopier)
    : m_nomPersonnage(personnageACopier.m_nomPersonnage), m_pointDeVie(personnageACopier.m_pointDeVie), m_Mana(personnageACopier.m_Mana), m_arme(0)
{
    m_arme = new Arme(*(personnageACopier.m_arme));     //Ici, on récupère l'objet à partir de l'adresse de m_arme du personnage a copier
}

//OPERATEUR = ENTRE NOS OBJETS

Personnage& Personnage::operator=(Personnage const& personnageACopier)
{
    if(this != &personnageACopier)      //On vérifie que les 2 objets sont différents
    {
        m_nomPersonnage = personnageACopier.m_nomPersonnage;
        m_pointDeVie = personnageACopier.m_pointDeVie;
        m_Mana = personnageACopier.m_Mana;

        delete m_arme;

        m_arme = new Arme(*(personnageACopier.m_arme));
    }
    return *this;   //On renvoie l'objet lui-même
}

//DEFINITION DES DESTRUCTEURS

Personnage::~Personnage()
{
    delete m_arme;
}

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
    cible.recevoirDegat(m_arme->getDegats());                 //La cible recoit les dégats (MODIFICATION CAR UTILISATION D'UN POINTEUR)
}

void Personnage::boirePotionDeVie(int quantiteSoin)
{
    m_pointDeVie += quantiteSoin;                       //On augmente les points de vie en fonction du soin reçu

    if (m_pointDeVie > PDV_MAX)                         //On borne à 0 les points de vie maximum
    {
        m_pointDeVie = PDV_MAX;
    }
}

void Personnage::changeArme(std::string nomNouvelleArme, int degatNouvelleArme)
{
    m_arme->changer(nomNouvelleArme, degatNouvelleArme);
}

bool Personnage::joueurVivant() const
{
    return m_pointDeVie > 0;                            //Retourne vrai si les points de vie sont supérieur à 0
}

void Personnage::infoPersonnage() const
{
    cout <<"Nom: " << m_nomPersonnage << endl;
    cout << "Points de vie: " << m_pointDeVie << endl;
    cout << "Mana: " << m_Mana << endl;
    m_arme->afficher();
    cout << "-----------------" << endl;
}

void Personnage::infoAdressePersonnage() const
{
    cout << m_nomPersonnage << " : " << m_arme << endl;
}