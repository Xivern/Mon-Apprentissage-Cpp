#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/*
Découverte des fonction :
Les fonctions permettre de simplifier le code, la lecture de celui-ci ou encore de gagner du temps
lorsque l'on effectue une action plusieurs fois
*/
int ajouteDeux(int valeurRecupere) // Dans un premier temps, on défini le type de la valeur de retour, puis on défini le type des arguments que notre fonction va récupérer
{
    int resultat = valeurRecupere+2;

    return resultat;
}

//On créer cette fois-ci une fonction qui ne prend pas de paramètre mais renvoie tout de même uen valeur
int demandeAge()
{
    int age(0);

    cout << "Bonjour !" << endl << "Pouvez-vous me donner votre âge : ";
    cin >> age;

    return age;
}

//On créer une fonction qui ne prend et ne renvoie rien
void Presentation()
{
    cout << "Bonjour, je m'appelle BOT !" << endl;
}

int main()
{
    int A(0),B(0);

    cout << "Valeur de A : " << A << endl;
    cout << "Valeur de B : " << B << endl;

    A = ajouteDeux(A);
    B = ajouteDeux(B);

    cout << "Nouvelle valeur de A : " << A << endl;
    cout << "Nouvelle valeur de B : " << B << endl;

    /*------------------------------------------------------------------------------- */
    cout << "--------------------------------------------------------------------" << endl;
    /*------------------------------------------------------------------------------- */

    int ageUtilisateur = demandeAge();

    cout << "Vous avez : " << ageUtilisateur << " ans !" << endl;

    /*------------------------------------------------------------------------------- */
    cout << "--------------------------------------------------------------------" << endl;
    /*------------------------------------------------------------------------------- */

    Presentation();

    return 0;
}