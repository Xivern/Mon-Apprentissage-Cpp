#include <iostream>
#include <string>

#include "InfoUtilisateur.hpp"

using namespace std;

string demandePrenom()
{
    string prenomUtilisateur;

    cout << "Bonjour !" << endl << "Pouvez-vous me donner votre prenom : ";
    cin >> prenomUtilisateur;

    return prenomUtilisateur;
}