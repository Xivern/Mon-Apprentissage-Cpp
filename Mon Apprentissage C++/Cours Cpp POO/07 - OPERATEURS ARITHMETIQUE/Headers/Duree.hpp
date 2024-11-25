#ifndef DEF_DUREE
#define DEF_DUREE

#include <iostream>
#include <iomanip>

class Duration 
{
    public:

        Duration(int hours = 0, int minutes = 0, int secondes = 0);             //CONSTRUCTEUR

        bool estEgal(Duration const& b) const;
        bool nonEgal(Duration const& b) const;
        bool estPlusPetitQue(Duration const& b) const;
        bool estPlusGrandQue(Duration const& b) const;

        /*----------------NEW----------------*/
        Duration& operator+=(Duration const& a);
        Duration& operator-=(Duration const& a);

        void afficher(std::ostream &flux) const;

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
/*----------------NEW----------------*/
Duration operator+(Duration const& a, Duration const& b);
Duration operator-(Duration const& a, Duration const& b);

std::ostream& operator<<(std::ostream &flux, Duration const& duree );

#endif