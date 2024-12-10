#include <iostream>
#include <string>

#include "..\Headers\FctVehicule.hpp"
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

    cout << "Type des objets via sa propre classe :" << endl;
    cout << "BATMOBILE : ";
    batmobile.affiche();
    cout << "BMW M3 COMPETITION : ";
    bmwM3.affiche();
    cout << "KAWASAKI NINJA ZX 10RR PERFORMANCE : ";
    kawasakiNinjaZX.affiche();

    cout << "--------------------------------------------------" << endl;

    cout << "Type des objets via une fonction polymorphique :" << endl;
    cout << "BATMOBILE : ";
    infoVehicule(batmobile);
    cout << "BMW M3 COMPETITION : ";
    infoVehicule(bmwM3);
    cout << "KAWASAKI NINJA ZX 10RR PERFORMANCE : ";
    infoVehicule(kawasakiNinjaZX);

    /*
    REGLE 1 EN POLYMORPHISME :
    Un même morceau de code a eu deux comportements différents suivant le type passé en argument. C'est donc du polymorphisme.
    On dit aussi que les méthodes affiche()  ont un comportement polymorphique.
    */

    cout << "--------------------------------------------------" << endl;

    cout << "Utilisation d'un pointeur pour creer notre objet :" << endl;

    //On crée une Voiture et on met son adresse dans un pointeur de Vehicule
    Vehicule *protoVoiture(0);
    protoVoiture = new Voiture;

    cout << "protoVoiture : ";
    protoVoiture->affiche();    //On affiche "L'objet choisi est une voiture."

    delete protoVoiture;        //On supprime manuellement l'objet voiture

    /*
    REGLE 2 EN POLYMORPHISME :
    un destructeur doit toujours être virtuel si on utilise le polymorphisme (Même si le destructeur ne fait rien).
    */

    /*-----------------------------------------------------------*/
    cout << "--------------------------------------------------" << endl;
    cout << "|                FIN DU PROGRAMME                |" << endl;
    cout << "--------------------------------------------------" << endl;
    //FIN DU PROGRAMME

    return 0;
}
