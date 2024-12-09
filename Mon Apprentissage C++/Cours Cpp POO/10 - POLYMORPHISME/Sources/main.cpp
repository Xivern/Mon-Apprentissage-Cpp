#include <iostream>
#include <string>

#include "..\Headers\Vehicule.hpp"
#include "..\Headers\Voiture.hpp"
#include "..\Headers\Moto.hpp"

using namespace std;

int main()
{
    Vehicule batmobile(50000000);
    Voiture bmwM3(120000, 4);
    Moto kawasakiNinjaZX(9000, 310.0);

    //MENU PRINCIPAL
    cout << "--------------------------------------------------" << endl;
    cout << "|               DEBUT DU PROGRAMME               |" << endl;
    cout << "--------------------------------------------------" << endl;
    /*-----------------------------------------------------------*/

    cout << "BATMOBILE : ";
    batmobile.affiche();
    cout << "BMW M3 COMPETITION : ";
    bmwM3.affiche();
    cout << "KAWASAKI NINJA ZX 10RR PERFORMANCE : ";
    kawasakiNinjaZX.affiche();

    /*-----------------------------------------------------------*/
    cout << "--------------------------------------------------" << endl;
    cout << "|                FIN DU PROGRAMME                |" << endl;
    cout << "--------------------------------------------------" << endl;
    //FIN DU PROGRAMME

    return 0;
}
