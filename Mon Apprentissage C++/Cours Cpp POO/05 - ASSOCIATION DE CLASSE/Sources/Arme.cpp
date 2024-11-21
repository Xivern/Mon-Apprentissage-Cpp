#include "..\Headers\Arme.hpp"

using namespace std;

//DEFINITION DES METHODES
 
Arme::Arme() : m_nom("Mains nues"), m_degats(10)
{
 
}
 
Arme::Arme(string nomArme, int degatArme) : m_nom(nomArme), m_degats(degatArme)
{
 
}
 
void Arme::changer(string nomArme, int degatArme)
{
    m_nom = nomArme;
    m_degats = degatArme;
}

int Arme::getDegats() const
{
    return m_degats;
}

void Arme::afficher() const
{
    cout << "Arme: " << m_nom << " (" << m_degats << " degats)" << endl;
}