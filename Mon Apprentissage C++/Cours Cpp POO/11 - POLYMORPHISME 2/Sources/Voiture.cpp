#include "..\Headers\Voiture.hpp"

using namespace std;

Voiture::Voiture() : Vehicule(), m_portes(5)    {}

Voiture::Voiture(string referenceVehicule, string marqueVehicule, int prixVehicule, int nombrePorte) : 
            Vehicule(referenceVehicule,marqueVehicule,prixVehicule), m_portes(nombrePorte)    {}

Voiture::~Voiture()     {}

void Voiture::affiche() const
{
    cout << "Type : Voiture    | Modele : \"" << m_reference << "\"    | Marque : " << m_marque << "    | Nombre portes : " << m_portes << "    | Prix : " << m_prix << " euros" << endl;
}