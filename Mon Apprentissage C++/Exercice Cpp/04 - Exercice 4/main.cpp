/*
Écrire un programme qui demande à l'utilisateur de saisir deux entiers A et B, qui échange le contenu des variables A et B puis qui affiche A et B.

Cet exercice a pour but de vérifier les points techniques suivants :

    la notion de variables et leur déclaration ;
    l'utilisation de cin et de cout ;
    l'affectation ;
    un "algorithme" rudimentaire : échanger le contenu de deux variables.
*/

#include <iostream>
/*---------------*/
int main()
{
    int A(0), B(0);
    int *entierTemporaire(0);       //Difficulté supplémentaire : Utiliser un pointeur dynamique pour que la notion devienne naturelle.

    std::cout << "Bienvenue dans le programme !!" << std::endl;
    std::cout << "Veuillez renseigner 2 nombres entier et je vous les inverserai : " << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;
    std::cout << ">> Entier A : ";
    std::cin >> A;
    std::cout << ">> Entier B : ";
    std::cin >> B;

    entierTemporaire = new int(A);  //On créée une variable temporaire

    *entierTemporaire = A;          //On stocke la valeur de A
    A = B;                          //On échange la valeur de A avec celle de B
    B = *entierTemporaire;          //On échange la valeur de B avec celle de A

    delete entierTemporaire;        //Fin de la variable temporaire
    entierTemporaire = 0;           //On n'oublie pas de reinitialiser le pointeur

    std::cout << "-------------------------------------------------" << std::endl;
    std::cout << "Resultat après inversion des valeurs :" << std::endl;
    std::cout << ">> Valeur de A : " << A << std::endl;
    std::cout << ">> Valeur de B : " << B << std::endl;

    return 0;
}
