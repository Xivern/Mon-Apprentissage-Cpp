#include <iostream>
#include <string>

#include "..\Headers\Personnage.hpp"
#include "..\Headers\Guerrier.hpp"
#include "..\Headers\Mage.hpp"

using namespace std;

int main()
{
    Personnage nouveauJoueur("Petit Tomy");
    Guerrier combattantExperimente("Des3yeur");
    Mage mageTalentueux("Harry Potter");
    
    //MENU PRINCIPAL
    cout << "--------------------------------------------------" << endl;
    cout << "|               DEBUT DU PROGRAMME               |" << endl;
    cout << "--------------------------------------------------" << endl;
    /*-----------------------------------------------------------*/

    cout << "PRESENTATION DES PERSONNAGES :" << endl;
    cout << "- "; nouveauJoueur.afficherSpecialisation();
    cout << "- "; combattantExperimente.afficherSpecialisation();
    cout << "- "; mageTalentueux.afficherSpecialisation();

    /*-----------------------------------------------------------*/
    //FIN DU PROGRAMME
    cout << "--------------------------------------------------" << endl;
    cout << "|                FIN DU PROGRAMME                |" << endl;
    cout << "--------------------------------------------------" << endl;

    return 0;
}
