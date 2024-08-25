#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int nombrePersonnes;

    cout << "Veuillez nous indiquer combien de personnes souhaite prendre l'ascenseur : ";
    cin >> nombrePersonnes;

    /*
    Découverte des structures conditionelles :
    LA CONDITION IF (si ... alors faire ça)
    */
    if (nombrePersonnes == 5)
    {
        cout << "Tout juste ! Vous pouvez rentrer..." << endl;
    }
    else if (nombrePersonnes > 5)
    {
        cout << "Vous dépasser le seuil de 5 personnes, je ne peux pas vous laisser rentrer !" << endl;
    }
    else
    {
        cout << "Bienvenue !" << endl;
    }
    
    /*------------------------------------------------------------------------------- */
    cout << "--------------------------------------------------------------------" << endl;
    /*------------------------------------------------------------------------------- */

    /*
    LA CONDITION SWITCH (pareils que if mais en plus lisible lorsque qu'il y a beaucoup de condition)
    Il reste cependant beaucoup plus limité que la condition IF
    */
    switch (nombrePersonnes)
    {
    case 0:
        cout << "Qui me parle ?" << endl;
        break;
    
    case 1:
        cout << "Bonjour, je vois que vous êtes seul(e)..." << endl;
        break;

    default:
        cout << "Bonjour à vous tous !" << endl;
        break;
    }

    /*------------------------------------------------------------------------------- */
    cout << "--------------------------------------------------------------------" << endl;
    /*------------------------------------------------------------------------------- */

    /*
    Faire des structures conditionelles avec des valeurs booléennes
    */
    bool handicap(1);

    if (handicap = true)
    {
        cout << "Une hotesse va venir vous aider à prendre l'ascenseur..." << endl;
    }

    /*------------------------------------------------------------------------------- */
    cout << "--------------------------------------------------------------------" << endl;
    /*------------------------------------------------------------------------------- */

    /*
    Combinons désormais les conditions :
    */
    cout << "Je m'excuse, j'ai tout oublié..." << endl << "Pouvez-vous me répeter ce que vous m'avez dit." << endl;
    cout << "Combien êtes-vous ? : ";
    cin  >> nombrePersonnes;
    cout << "Êtes vous en situation de handicap ? (true or false) :";
    cin >> handicap; 

    if (nombrePersonnes <= 5 && !handicap)
    {
        cout << "Veuillez prendre l'ascenseur 1 !" << endl;
    }
    else if (nombrePersonnes <= 5 && handicap)
    {
        cout << "Veuillez prendre l'ascenseur 2 ! Une hotesse vous attend..." << endl;
    }
    else
    {
        cout << "Nous sommes désolé, nous ne pouvons vous recevoir..." << endl;
    }

    cout << "FIN" << endl;

    return 0;
}


