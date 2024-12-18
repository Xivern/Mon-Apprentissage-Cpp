#include "..\Headers\Voiture.hpp"

using namespace std;

Voiture::Voiture() : Vehicule(), m_portes(5)    {}

Voiture::Voiture(string referenceVehicule, string marqueVehicule, int prixVehicule, int anneeFabrication, int nombrePorte) : 
            Vehicule(referenceVehicule,marqueVehicule,prixVehicule,anneeFabrication), m_portes(nombrePorte)    {}

Voiture::~Voiture()     {}

void Voiture::affiche() const
{
    cout << "Type : Voiture  | Modele : \"" << m_reference << "\"  | Marque : " << m_marque <<  "  | Annee : " << m_anneeFab << "  | Nombre portes : " << m_portes << "  | Prix : " << m_prix << " euros" << endl;
}

int Voiture::nbrRoues() const
{
    return 4;
}