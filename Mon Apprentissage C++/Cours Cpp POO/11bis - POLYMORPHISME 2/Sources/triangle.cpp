#include "..\Headers\triangle.hpp"

using namespace std;

Triangle::Triangle() : m_base(0), m_hauteur(0)    {}

Triangle::Triangle(double Base, double Hauteur) : m_base(Base), m_hauteur(Hauteur)    {}

Triangle::~Triangle()   {}

void Triangle::afficher() const
{
    cout << fixed << setprecision(2);
    cout << "Type : Triangle   | Base     : " << m_base << " cm  | Hauteur : " << m_hauteur << " cm" << endl;
}

double Triangle::perimetre() const
{
    return (3*m_base);                  //SIMPLIFICATION : Triangle équilateral
}

double Triangle::aire() const
{
    return ((m_base*m_hauteur)/2);
}