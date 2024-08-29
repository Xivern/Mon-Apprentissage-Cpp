/*
Écrire un programme qui demande à l'utilisateur de taper cinq entiers et qui affiche leur moyenne. Le programme ne devra utiliser que deux variables.
- 1 double
- 1 int

Cet exercice a pour but de vérifier les points techniques suivants :

    la notion de variables et leur déclaration ;
    calcul de la moyenne ;
    utilisation des types int et double ;
    l'utilisation de cin et de cout ;
    l'affectation.
*/

#include <iostream>

int main() 
{
    int entier(0);
    double moyenne(0.0);
    double *ptrMoyenneTR = &moyenne;    //Difficulté supplémentaire : Avoir une visibilité sur la variation de la moyenne en temps réel via un pointeur

    std::cout << "Bienvenue dans le programme !!" << std::endl 
              << "Veuillez renseigner cinq nombres entier et je vous donnerai la moyenne mathématique" << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;

    for (int i = 1; i <= 5; i++)
    {
        std::cout << "[Moyenne actuelle : " << *ptrMoyenneTR << "]" << std::endl;

        std::cout << i <<". Votre nombre : ";
        std::cin >> entier;

        // Calcul de la moyenne en temps réel
        *ptrMoyenneTR = (moyenne * (i - 1) + entier) / i;
    }
    
    std::cout << "-------------------------------------------------" << std::endl;
    std::cout << "La moyenne de vos cinq chiffres est donc égale à " << *ptrMoyenneTR << std::endl;

    return 0;
}