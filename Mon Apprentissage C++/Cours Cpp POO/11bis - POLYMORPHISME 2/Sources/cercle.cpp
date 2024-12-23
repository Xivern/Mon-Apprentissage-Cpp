#include "..\Headers\Cercle.hpp"

using namespace std;

Cercle::Cercle() : m_rayon(0), m_pi(3.1415)    {}

Cercle::Cercle(double Rayon) : m_rayon(Rayon), m_pi(3.1415)     {}

Cercle::~Cercle()   {}

void Cercle::afficher() const
{
    cout << fixed << setprecision(2);
    cout << "Type : Cercle     | Rayon    : " << m_rayon << " cm  |" << endl;
}

double Cercle::perimetre() const
{
    return (2*m_rayon*m_pi);
}

double Cercle::aire() const
{
    return (m_pi*(m_rayon*m_rayon));
}