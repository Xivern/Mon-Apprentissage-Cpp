#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int compteRebours(0);

    //Découverte de la boucle WHILE
    // Le code est executé tant que la condition est rempli ! ( Utile pour  vérifier que l'utilisateur ne rentre pas des données incohérente)
    while (compteRebours < 10)
    {
        compteRebours++;
        cout << compteRebours << " !" << endl;
    }
    
    cout << "Fin du compte à rebours !" << endl;

    /*------------------------------------------------------------------------------- */
    cout << "--------------------------------------------------------------------" << endl;
    /*------------------------------------------------------------------------------- */

    int age;

    //Découverte de la boucle DO...WHILE
    // Identique à la boucle while, cependant, le code est executer une première fois avant de vérifeir la condition
    do
    {
        cout << "Merci de renseigner votre age : ";
        cin >> age;
    } while ( age < 0 || age > 200 );

    cout << "Bonne journée" << endl;

    /*------------------------------------------------------------------------------- */
    cout << "--------------------------------------------------------------------" << endl;
    /*------------------------------------------------------------------------------- */

    int bombeAtomique;

    //Découverte de la boucle FOR
    //Boucle signifiant "pour", elle permet principalement de condenser une initialisation, une condition et une incrémentation.
    cout << "Veuillez rentrer le code à deux chiffres de la bombe atomique : ";
    cin >> bombeAtomique;

    if (bombeAtomique != 27)
    {
        for (int i = 5; i > 0; i--)
        {
            cout << "BOOOM dans : " << i << " secondes" << endl;
        }
        cout << "Vous êtes mort..." << endl;
    }
    else 
    {
        cout << "BRAVO, vous avez survécu !" << endl;
    }
    
    return 0;
}
