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
    nouveauJoueur.presentationPersonnage();
    cout << "- "; combattantExperimente.afficherSpecialisation();
    combattantExperimente.presentationPersonnage();
    cout << "- "; mageTalentueux.afficherSpecialisation();
    mageTalentueux.presentationPersonnage();
    
    cout << "--------------------------------------------------" << endl;
    /*-----------------------------------------------------------*/

    //POSSIBILITE D'UTILISER UN GUERRIER OU MAGE MALGRE LE PARAMETRE PERSONNAGE ATTENDU (HERITAGE)
    nouveauJoueur.coupDePoing(combattantExperimente);
    combattantExperimente.coupDePoing(nouveauJoueur);

    cout << "FIN DU COMBAT :" << endl;
    cout << "> "; nouveauJoueur.presentationPersonnage();
    cout << "> "; combattantExperimente.presentationPersonnage();
    cout << "> "; mageTalentueux.presentationPersonnage();

    //POSSIBILITE EGALEMENT DE DONNER A UN POINTEUR PERSONNAGE, UN POINTEUR GUERRIER
    Personnage *personnagePointe(0);
    Guerrier *guerrierPointe = new Guerrier();
 
    personnagePointe = guerrierPointe;
    delete guerrierPointe;

    /*   REGLE A CONNAITRE : ON PEUT AFFECTER UN ELEMENT ENFANT A UN ELEMENT PARENT !   */

    /*-----------------------------------------------------------*/
    //FIN DU PROGRAMME
    cout << "--------------------------------------------------" << endl;
    cout << "|                FIN DU PROGRAMME                |" << endl;
    cout << "--------------------------------------------------" << endl;

    return 0;
}
