#include "..\Headers\Vehicule.hpp"

using namespace std;

Vehicule::Vehicule() : m_reference("NoReference"), m_marque("NoBrand"), m_prix(0)    {}

Vehicule::Vehicule(string referenceVehicule, string marqueVehicule, int prixVehicule) : m_reference(referenceVehicule), m_marque(marqueVehicule) ,m_prix(prixVehicule)     {}

Vehicule::~Vehicule()   {}

void Vehicule::affiche() const
{
    cout << "Type : Vehicule    | Modele : \"" << m_reference << "\"    | Marque : " << m_marque  << "    | Prix : " << m_prix << " euros" << endl;
}