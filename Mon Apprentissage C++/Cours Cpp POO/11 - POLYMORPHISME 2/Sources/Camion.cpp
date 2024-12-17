#include "..\Headers\Camion.hpp"

using namespace std;

Camion::Camion() : Vehicule(), m_poids(1.0)     {}

Camion::Camion(std::string referenceVehicule, std::string marqueVehicule, int prixVehicule, double poidsTransport) : 
            Vehicule(referenceVehicule,marqueVehicule,prixVehicule), m_poids(poidsTransport)    {}

Camion::~Camion()   {}

void Camion::affiche() const
{
    cout << "Type : Camion     | Modele : \"" << m_reference << "\"    | Marque : " << m_marque << "    | Poids maximum : " << m_poids << " t    | Prix : " << m_prix << " euros" << endl;
}