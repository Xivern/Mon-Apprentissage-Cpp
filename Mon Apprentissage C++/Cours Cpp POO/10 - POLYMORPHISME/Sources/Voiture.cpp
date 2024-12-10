#include "..\Headers\Voiture.hpp"

using namespace std;

Voiture::Voiture() : Vehicule(), m_portes(5)    {}

Voiture::Voiture(int prixVehicule, int nombrePorte) : Vehicule(prixVehicule), m_portes(nombrePorte)    {}

Voiture::~Voiture()     {}

void Voiture::affiche() const
{
    cout << "L'objet choisi est une voiture" << endl;
}