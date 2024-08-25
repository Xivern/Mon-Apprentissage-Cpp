#include <iostream>
#include <string>
#include <cmath>

#include "ModifTableau.hpp"

using namespace std;

//Découverte des tableaux statiques et dynamiques
int main()
{
    int const tailleTableau(5);     //Il est utile de privilégier des valeurs constantes pour définir des valeurs de tableau STATIQUES

    int  tabAge[tailleTableau];      //Tableau contenant des variables de type int et une taille égale à 5 
    string  tabNom[tailleTableau];   //Tableau contenant des variables de type string et une taille égale à 5 

    //Stockage des variables dans les "cases" du tableau
    tabAge[0] = 25;
    tabAge[1] = 41;
    tabAge[2] = 68;
    tabAge[3] = 13;
    tabAge[4] = 23;

    tabNom[0] = "Alexandre Durant";
    tabNom[1] = "Michele Dupont";
    tabNom[2] = "Carlos Blouge";
    tabNom[3] = "Robert Tronchet";
    tabNom[4] = "Charlene Mars";
    
    //On utilise une boucle for pour parcourir les cases du tableau
    for (int i = 0; i <= 4; i++)
    {
        cout << "Le sujet \"" << tabNom[i] << "\" a " << tabAge[i] << " ans." << endl;
    }
        cout << ">> Fin du rapport <<" << endl;
    
    cout << "SUJETS SUPPRIMES, REINITIALISATION DE LEURS AGE..." << endl;

    intRAZTableau(tabAge,tailleTableau);

    //On utilise une boucle for pour parcourir les cases du tableau
    for (int i = 0; i <= 4; i++)
    {
        cout << "RAZ du sujet \"" << tabNom[i] << "\" : " << tabAge[i] << " annees." << endl;
    }
        cout << ">> Fin du rapport <<" << endl;

    return 0;
}
