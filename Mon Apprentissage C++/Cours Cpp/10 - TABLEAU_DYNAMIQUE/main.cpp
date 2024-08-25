#include <iostream>
#include <string>
#include <cmath>
#include <vector>   //On ajoute la bibliothèque "vector" pour permettre la création de tableau dynamique

#include "math.hpp"

using namespace std;

int main()
{
    vector<int> tabClassement(5,0);  //Crée un tableau de 5 entiers valant tous 0
    vector<string> tabPseudo(5, "Unknown"); //Crée un tableau de 5 chaine de caractères valant tous "Unknown"

    //On remplie les cinqs premières cases du tableau par les places 1 à 5 du classement
    for (int i = 0; i < 5; i++)
    {
        tabClassement[i] = i+1;
        cout << "Place numero : " << tabClassement[i] << endl;
    }
    cout << "Nombre de case dans mon tableau : " << tabClassement.size() << endl;
    cout << "-----------------------------------------" << endl;

    tabClassement.push_back(6);     //On ajoute une case supplémentaire dans notre tableau qui possède la valeur 6 (6eme place du classement)
    cout << "Valeur de ma nouvelle case ajoute : " << tabClassement[5] << endl;
    cout << "Nombre de case dans mon tableau : " << tabClassement.size() << endl;
    cout << "-----------------------------------------" << endl;

    tabClassement.pop_back();         //On supprime la dernière case du tableau (Dans notre cas, la case contenant la valeur 6)
    cout << "Derniere case du tableau supprimee... " << endl;
    cout << "Nombre de case dans mon tableau : " << tabClassement.size() << endl;
    cout << "-----------------------------------------" << endl;

    double moyenneValTab(0.0);
    moyenneValTab = calculMoyenne(tabClassement);
    cout << "La moyenne des valeurs dans mon tableau est : " << moyenneValTab << " !" << endl;

    cout << "-----------------------------------------" << endl;

    int const xAxis(5), yAxis(5);

    int TableauLiaison[xAxis][yAxis];   //On créée un tableau en 2 dimensions 5x5 statique

    cout << "---- Tableau 2D : ----" << endl;

    for (int i = 0; i < xAxis; i++)
    {
        for (int y = 0; y < yAxis; y++)
        {
            TableauLiaison[i][y] = i+y;
            cout << " | " << i+y;
        }
        cout << " | " << endl;
    }

    cout << "-----------------------------------------" << endl;

    //On peut également voir le type string comme un tableau

    string prenom("Robert"); 
    string nom("De Niro");
    string nomComplet;    //Une chaîne de caractère vide

    nomComplet += prenom; //On ajoute le prénom à la chaîne vide
    nomComplet += " ";    //Puis un espace
    nomComplet += nom;    //Et finalement le nom de famille

   cout << "Votre nom est : " << nomComplet << " !" << endl; 

    return 0;
}
