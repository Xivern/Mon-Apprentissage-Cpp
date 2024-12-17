#include "..\Headers\Moto.hpp"

using namespace std;

Moto::Moto() : Vehicule(), m_vitesse(200)    {}

Moto::Moto(string referenceVehicule, string marqueVehicule, int prixVehicule, double vitesseMax) : 
            Vehicule(referenceVehicule,marqueVehicule,prixVehicule), m_vitesse(vitesseMax)     {}

Moto::~Moto()   {}

void Moto::affiche() const
{
    cout << "Type : Moto       | Modele : \"" << m_reference << "\"    | Marque : " << m_marque << "    | Vitesse maximum : " << m_vitesse << " km/h    | Prix : " << m_prix << " euros" << endl;
}