#include "..\Headers\Duree.hpp"

using namespace std;

Duration::Duration(int hours, int minutes, int secondes)
{    
    // Transformation en secondes
    int total_seconds = secondes + (minutes * 60) + (hours * 3600);

    m_hours = total_seconds/3600;
    total_seconds = total_seconds%3600;

    m_minutes = total_seconds/60;
    m_secondes = total_seconds%60;
}

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

void Duration::afficher() const
{
    cout << m_hours << "h " << m_minutes << "m " << m_secondes << "s" << endl;
}

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
