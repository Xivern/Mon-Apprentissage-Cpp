#include "..\Headers\Rectangle.hpp"

using namespace std;

Rectangle::Rectangle() : m_longueur(0), m_largeur(0)    {}

Rectangle::Rectangle(double Longueur, double Largeur) : m_longueur(Longueur), m_largeur(Largeur)    {}

Rectangle::~Rectangle()   {}

void Rectangle::afficher() const
{
    cout << fixed << setprecision(2);
    cout << "Type : Rectangle  | Longueur : " << m_longueur << " cm  | Largeur : " << m_largeur << " cm" << endl;
}

double Rectangle::perimetre() const
{
    return 2*(m_largeur + m_longueur);
}

double Rectangle::aire() const
{
    return (m_largeur*m_longueur);
}