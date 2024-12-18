#include "..\Headers\Camion.hpp"

using namespace std;

Camion::Camion() : Vehicule(), m_poids(1.0)     {}

Camion::Camion(std::string referenceVehicule, std::string marqueVehicule, int prixVehicule, int anneeFabrication, double poidsTransport) : 
            Vehicule(referenceVehicule,marqueVehicule,prixVehicule,anneeFabrication), m_poids(poidsTransport)    {}

Camion::~Camion()   {}

void Camion::affiche() const
{
    cout << "Type : Camion   | Modele : \"" << m_reference << "\"  | Marque : " << m_marque << "  | Annee : " << m_anneeFab << "  | Poids maximum : " << m_poids << " t  | Prix : " << m_prix << " euros" << endl;
}

int Camion::nbrRoues() const
{
    return 6;
}