#include "..\Headers\Vehicule.hpp"

using namespace std;

Vehicule::Vehicule() : m_prix(0)    {}

Vehicule::Vehicule(int prixVehicule) : m_prix(prixVehicule)     {}

void Vehicule::affiche() const
{
    cout << "L'objet choisi est un vehicule" << endl;
}