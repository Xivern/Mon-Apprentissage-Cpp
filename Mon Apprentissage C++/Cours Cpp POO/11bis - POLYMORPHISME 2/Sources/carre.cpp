#include "..\Headers\Carre.hpp"

using namespace std;

Carre::Carre() : m_longueur(0)  {}

Carre::Carre(double Longueur) : m_longueur(Longueur)    {}

Carre::~Carre()   {}

void Carre::afficher() const
{
    cout << fixed << setprecision(2);
    cout << "Type : Carre      | Longueur : " << m_longueur << " cm  |" << endl;
}

double Carre::perimetre() const
{
    return (4*m_longueur);
}

double Carre::aire() const
{
    return (m_longueur*m_longueur);
}