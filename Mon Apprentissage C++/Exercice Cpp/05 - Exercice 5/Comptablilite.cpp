#include <iostream>
/*---------------*/
#include "Comptablilite.hpp"

double balanceLegume(double _prixDuKilo, double _poidsEnKilo, double _tva)
{
    double prixTotal(0.0);

    prixTotal = ((_prixDuKilo*_poidsEnKilo) * (1+(_tva/100)));
    
    return prixTotal;
}