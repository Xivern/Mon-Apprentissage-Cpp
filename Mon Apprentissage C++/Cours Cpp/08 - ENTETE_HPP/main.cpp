#include <iostream>
#include <string>
#include <cmath>

#include "math.hpp"
#include "InfoUtilisateur.hpp"

using namespace std;

int main()
{
    string prenomUtilisateur;
    int deuxPlusDeux(0);
    int reponseQuizzSeconde(0);

    prenomUtilisateur = demandePrenom();
    cout << "Votre prenom est donc : " << prenomUtilisateur << " !" << endl;

    cout << "Petite question, quel est le résultat de 2+2 ?" << endl;
    deuxPlusDeux = ajouteDeux(2);
    cout << "La réponse était : " << deuxPlusDeux << " !" << endl;

    cout << "Maintenant, Combien y a t'il de secondes dans 1 heures et 30 minutes" << endl;
    reponseQuizzSeconde = conversionSeconde(1,30);
    cout << "La réponse était : " << reponseQuizzSeconde << " secondes !" << endl;

    return 0;
}