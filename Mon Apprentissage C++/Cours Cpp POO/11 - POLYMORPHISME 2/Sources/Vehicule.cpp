#include "..\Headers\Vehicule.hpp"

using namespace std;

Vehicule::Vehicule() : m_reference("NoReference"), m_marque("NoBrand"), m_prix(0), m_anneeFab(1900)    {}

Vehicule::Vehicule(string referenceVehicule, string marqueVehicule, int prixVehicule, int anneeFabrication) : 
            m_reference(referenceVehicule), m_marque(marqueVehicule) ,m_prix(prixVehicule), m_anneeFab(anneeFabrication)     {}

Vehicule::~Vehicule()   {}

void Vehicule::affiche() const
{
    cout << "Type : Vehicule  | Modele : \"" << m_reference << "\"  | Marque : " << m_marque  << "  | Annee : " << m_anneeFab << "  | Prix : " << m_prix << " euros" << endl;
}