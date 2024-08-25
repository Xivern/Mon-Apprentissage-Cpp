#include <iostream>
#include <string>

// Nouvelle directive permettant l'ajout de nouvelles fonctions mathématiques en cpp
#include <cmath> 

using namespace std;

int main(int argc, char const *argv[])
{
    int valeurIncrementable (5);

    cout << "INCREMENTATION : Valeur initiale : " << valeurIncrementable << endl;

    //On cherche à incrémenter notre variable de différentes manières : 
    valeurIncrementable = valeurIncrementable + 1;
    cout << "Méthode 1 : " << valeurIncrementable << endl;

    valeurIncrementable++; // post-incrémentation ( Dans le cas où on effectue un calcul b = a++, l'incrémentation est effectué APRES l'ajout de la valeur a vers b)
    cout << "Méthode 2 : " << valeurIncrementable << endl;

    ++valeurIncrementable; // pré-incrémentation ( Dans le cas où on effectue un calcul b = a++, l'incrémentation est effectué AVANT l'ajout de la valeur a vers b)
    cout << "Méthode 3 : " << valeurIncrementable << endl;
    
    //Démonstration différence post et pré-incrémentation
    int a(5),b;

    b=a++;
    cout << "POST : a = " << a << " || " << "b = " << b << endl;

    a = 5;
    b=++a;
    cout << "PRÉ : a = " << a << " || " << "b = " << b << endl;

    /*------------------------------------------------------------------------------- */
    cout << "--------------------------------------------------------------------" << endl;
    /*------------------------------------------------------------------------------- */
    int valeurDecrementable (5);

    cout << "DECREMENTATION : Valeur initiale : " << valeurDecrementable << endl;

    //On cherche à décrémenter notre variable de différentes manières : 
    valeurDecrementable = valeurDecrementable - 1;
    cout << "Méthode 1 : " << valeurDecrementable << endl;

    valeurDecrementable--; // post-décrémentation
    cout << "Méthode 2 : " << valeurDecrementable << endl;

    --valeurDecrementable; // pré-décrémentation
    cout << "Méthode 3 : " << valeurDecrementable << endl;

    /*------------------------------------------------------------------------------- */
    cout << "--------------------------------------------------------------------" << endl;
    /*------------------------------------------------------------------------------- */
    int nombres(500);

    //Présentation des autres méthodes de calcul raccourcis :
    nombres += 400;  //ADDITION
    cout << "Addition : " << nombres << endl;
    nombres -= 400;  //SOUSTRACTION
    cout << "Soustraction : " << nombres << endl;
    nombres *= 200;   //MULTIPLICATION
    cout << "Multiplication : " << nombres << endl;
    nombres /= 200;   //DIVISION
    cout << "Division : " << nombres << endl;

    /*------------------------------------------------------------------------------- */
    cout << "--------------------------------------------------------------------" << endl;
    /*------------------------------------------------------------------------------- */
    double const deuxiemeNombres(25);

    //Présentation de la fonction racine carré de la directive cmath
    double racineCarre = sqrt(deuxiemeNombres);
    cout << "La racine carré de " << deuxiemeNombres << " est : " << racineCarre << endl;

    //Présentation de la fonction puissance de la directive cmath
    double resultPuissance = pow(deuxiemeNombres,2);
    cout << "Le calcul " << deuxiemeNombres << " à la puissance de 2 est égal à : " << resultPuissance << endl;

    return 0;
}
