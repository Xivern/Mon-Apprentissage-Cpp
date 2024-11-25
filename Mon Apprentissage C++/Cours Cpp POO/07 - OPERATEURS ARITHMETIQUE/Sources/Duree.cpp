#include "..\Headers\Duree.hpp"

using namespace std;

/*--------------------------CONSTRUCTEUR--------------------------*/

Duration::Duration(int hours, int minutes, int secondes)
{    
    // Transformation en secondes
    int total_seconds = secondes + (minutes * 60) + (hours * 3600);

    m_hours = total_seconds/3600;
    total_seconds = total_seconds%3600;

    m_minutes = total_seconds/60;
    m_secondes = total_seconds%60;
}

/*--------------------------METHODE VOID--------------------------*/

bool Duration::estEgal(Duration const& b) const
{
    //Vérifie l'égalité a.m_hours == b.m_hours
    if (m_hours == b.m_hours && m_minutes == b.m_minutes && m_secondes == b.m_secondes)
        return true;
    else
        return false;
}

bool Duration::nonEgal(Duration const& b) const
{
    //Vérifie l'égalité a.m_hours == b.m_hours
    if (m_hours == b.m_hours && m_minutes == b.m_minutes && m_secondes == b.m_secondes)
        return false;
    else
        return true;
}

bool Duration::estPlusPetitQue(Duration const& b) const
{
    //Vérifie que a.m_hours est inférieur à b.m_hours
    if (m_hours < b.m_hours)
    {
        return true;
    }
    else if((m_hours == b.m_hours) && (m_minutes < b.m_minutes))
    {
        return true;
    }
    else if((m_hours == b.m_hours) && (m_minutes == b.m_minutes) && (m_secondes < b.m_secondes))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Duration::estPlusGrandQue(Duration const& b) const
{
    //Vérifie que a.m_hours est inférieur à b.m_hours
    if (m_hours > b.m_hours)
    {
        return true;
    }
    else if((m_hours == b.m_hours) && (m_minutes > b.m_minutes))
    {
        return true;
    }
    else if((m_hours == b.m_hours) && (m_minutes == b.m_minutes) && (m_secondes > b.m_secondes))
    {
        return true;
    }
    else
    {
        return false;
    }
}
        
/*------------------------------NEW-------------------------------*/

Duration& Duration::operator+=(Duration const& a)       //A utiliser pour les opérateurs raccourcis *=, *-, */,...
{
    // Transformation en secondes
    int total_seconds = (a.m_secondes + m_secondes) + ((a.m_minutes + m_minutes) * 60) + ((a.m_hours + m_hours) * 3600);

    m_hours = total_seconds/3600;
    total_seconds = total_seconds%3600;

    m_minutes = total_seconds/60;
    m_secondes = total_seconds%60;

    return *this;                                       //return *this  va avec Duration&
}

Duration& Duration::operator-=(Duration const& a)       //A utiliser pour les opérateurs raccourcis *=, *-, */,...
{
    // Transformation en secondes
    int total_seconds = (m_secondes - a.m_secondes) + ((m_minutes - a.m_minutes) * 60) + ((m_hours - a.m_hours) * 3600);

    m_hours = total_seconds/3600;
    total_seconds = total_seconds%3600;

    m_minutes = total_seconds/60;
    m_secondes = total_seconds%60;

    return *this;                                       //return *this  va avec Duration&
}

void Duration::afficher(ostream &flux) const
{
    flux << m_hours << "h " << setfill('0') << setw(2) << m_minutes << "m " << setfill('0') << setw(2) << m_secondes << "s";
}

/*-------------------------FONCTION BOOL--------------------------*/

bool operator==(Duration const& a, Duration const& b)
{
    return a.estEgal(b);
}

bool operator!=(Duration const& a, Duration const& b)
{
    return a.nonEgal(b);
}

bool operator<(Duration const& a, Duration const& b)
{
    return a.estPlusPetitQue(b);
}

bool operator>(Duration const& a, Duration const& b)
{
    return a.estPlusGrandQue(b);
}

bool operator<=(Duration const& a, Duration const& b)
{
    if (a.estPlusPetitQue(b) || a.estEgal(b))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator>=(Duration const& a, Duration const& b)
{
    if (a.estPlusGrandQue(b) || a.estEgal(b))
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*------------------------------NEW-------------------------------*/

Duration operator+(Duration const& a, Duration const& b)
{
    Duration resultat(a);    //On copie les valeurs de a en mémoire

    resultat += b;           //Désormais le doublon possède le résultat de a et b
    
    return resultat;
}

Duration operator-(Duration const& a, Duration const& b)
{
    Duration resultat(a);    //On copie les valeurs de a en mémoire

    resultat -= b;           //Désormais le doublon possède le résultat de a et b
    
    return resultat;
}

ostream& operator<<( ostream &flux, Duration const& duree )
{
    duree.afficher(flux);
    
    return flux;
}