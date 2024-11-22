#ifndef DEF_DUREE
#define DEF_DUREE

#include <iostream>

class Duration 
{
    public:

        Duration(int hours = 0, int minutes = 0, int secondes = 0);             //CONSTRUCTEUR

        bool estEgal(Duration const& b) const;
        bool nonEgal(Duration const& b) const;
        bool estPlusPetitQue(Duration const& b) const;
        bool estPlusGrandQue(Duration const& b) const;

        void afficher() const;

    private:
 
        int m_hours;
        int m_minutes;
        int m_secondes;
};

bool operator==(Duration const& a, Duration const& b);
bool operator!=(Duration const& a, Duration const& b);
bool operator<(Duration const& a, Duration const& b);
bool operator>(Duration const& a, Duration const& b);
bool operator<=(Duration const& a, Duration const& b);
bool operator>=(Duration const& a, Duration const& b);

#endif