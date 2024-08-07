#include <iostream>
#include <string>

using namespace std;

/*
Voilà donc le sujet de notre premier exercice :

>    Demander deux nombres à l'utilisateur.
>    Calculer la somme de ces deux nombres.
>    Et afficher le résultat.

*/

int main()
{
    double valeurA(0), valeurB(0);

    //Récupération information utilisateur
    cout << "Bonjour !" << endl << "Le programme permet l'addition de deux valeurs de votre choix." << endl;
    cout << "Merci de renseigner votre première valeur entière : ";
    cin >> valeurA;
    cout << "Renseigner maintenant votre deuxieme nombre entier : ";
    cin >> valeurB;

    //Processing
    const double resultat = valeurA + valeurB;

    //Affichage résultat
    cout << "Le résultat est " << resultat << " !" << endl; 

    return 0;
}
