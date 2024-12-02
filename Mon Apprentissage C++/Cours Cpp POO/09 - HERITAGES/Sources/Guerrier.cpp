#include "..\Headers\Guerrier.hpp"
 
using namespace std;
 
Guerrier::Guerrier() : Personnage(), m_rage(0) {}

Guerrier::Guerrier(string nomGuerrier) : Personnage(nomGuerrier), m_rage(0) {}

void Guerrier::frapperAvecMarteau(Personnage &cible)
{
    cible.recevoirDegats(10);

    m_rage += 5;

    if (m_rage > 100)                         //On borne à 100 les points de vie maximum
    {
        m_rage = 100;
    }
}

void Guerrier::afficherSpecialisation() const
{
    cout << getNomPersonnage() << " est un humain guerrier !" << endl;
}