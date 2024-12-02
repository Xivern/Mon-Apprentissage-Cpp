#include "..\Headers\Personnage.hpp"
 
using namespace std;
 
Personnage::Personnage() : m_nomPersonnage("NoName"), m_pointDeVie(100) {}

Personnage::Personnage(string nomPersonnage) : m_nomPersonnage(nomPersonnage), m_pointDeVie(100) {}

void Personnage::recevoirDegats(int degats)
{
    m_pointDeVie -= degats;
}

string Personnage::getNomPersonnage() const
{
    return m_nomPersonnage;
}
 
void Personnage::attaquer(Personnage &cible) const
{
    cible.recevoirDegats(10);
}

void Personnage::afficherSpecialisation() const
{
    cout << m_nomPersonnage << " est un humain sans classe !" << endl;
}