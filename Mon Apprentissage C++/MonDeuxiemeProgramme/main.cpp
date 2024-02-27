#include <iostream>

// Permet l'ajout du type "STRING" dans notre programme
#include <string>

using namespace std;

int main ()
{
    // Afin de déclarer une variable, on l'initialise de la manière suivante : Type Nom(Valeur)

    // int : nombre entier supérieur à 0 | unsigned int : nombre entier négatif ou positif
    int ageUtilisateur(23);
    int nombreAmis(10);

    // double : nombre décimal
    double pi(3.1415);

    // bool : Vrai ou faux
    bool estMonAmi(false);

    // char : Un caractère ASCII
    char lettre('g');

    // String : Une chaine de caractère
    string nomUtilisateur("Guillaume Zéphir");

    // Création d'une référence, permet d'acceder à la même variable via 2 nom différents (ageUtilisateur et monAge)
    int& monAge(ageUtilisateur);

    // On peut maintenant affiché notre texte et notre variable via les 2 manières suivantes (chevrons ou concaténation) :
    cout << "Votre nom est " << nomUtilisateur + " !" << endl;
    cout << "L'utilisateur a " << ageUtilisateur << " ans !" << endl;
    cout << ("J'ai ") << monAge << " ans !" << endl;

    return 0;
}