#include "..\Headers\Mage.hpp"
 
using namespace std;
 
Mage::Mage() : Personnage(), m_mana(100) {}

Mage::Mage(string nomMage) : Personnage(nomMage), m_mana(100) {}

void Mage::bouleDeFeu(Personnage &cible)
{
    cible.recevoirDegats(15);

    m_mana -= 20;

    if (m_mana < 0)                         //On borne à 0 les points de mana minimum
    {
        m_mana = 0;
    }
}

void Mage::eclarDeGlace(Personnage &cible)
{
    cible.recevoirDegats(10);

    m_mana -= 15;

    if (m_mana < 0)                         //On borne à 0 les points de mana minimum
    {
        m_mana = 0;
    }
}

void Mage::concentrationDeMana()
{
    m_mana = 100;
}

void Mage::afficherSpecialisation() const
{
    cout << getNomPersonnage() << " est un humain Magicien !" << endl;
}