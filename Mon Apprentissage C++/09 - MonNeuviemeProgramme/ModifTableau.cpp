#include <iostream>
#include <string>
#include <cmath>

#include "ModifTableau.hpp"

using namespace std;

void intRAZTableau(int tableau[], int taille)
{
    cout << "-----------------------------------" << endl;
    cout << "Debut de la mise a 0 du tableau... " << endl;

    for (int i = 0; i < taille; i++)
    {
        tableau[i] = 0;
    }
    
    cout << "Tableau mis a 0 !" << endl;
    cout << "-----------------------------------" << endl;

}