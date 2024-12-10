#include "..\Headers\Moto.hpp"

using namespace std;

Moto::Moto() : Vehicule(), m_vitesse(200)    {}

Moto::Moto(int prixVehicule, double vitesseMax) : Vehicule(prixVehicule), m_vitesse(vitesseMax)     {}

Moto::~Moto()   {}

void Moto::affiche() const
{
    cout << "L'objet choisi est une moto" << endl;
}