/*
Même exercice que l'exercice 7 mais en utilisant un while.

> Écrire un programme qui affiche tous les entiers de 8 jusqu'à 23 (bornes incluses) en utilisant un while.

Cet exercice a pour but de vérifier le point technique suivant :

    utilisation rudimentaire d'un while.
*/

#include <iostream>
/*---------------*/

int main()
{
    int a(8);   // Initialisation de la variable à 8

    std::cout << "------------------------------------------------------------------------------------------------" << std::endl;
    std::cout << "                                 Bienvenue dans le programme !!" << std::endl;
    std::cout << "            L'objectif de ce programme est de vous afficher les nombres de 8 à 23." << std::endl;
    std::cout << "                                          C'est parti !!" << std::endl;
    std::cout << "------------------------------------------------------------------------------------------------" << std::endl;
    
    // Boucle while pour afficher les entiers de 8 à 23
    while (a <=23)
    {
        std::cout << "Nombre : " << a << std::endl;
        a++;
    }
    
    std::cout << ">> Fin du programme..." << std::endl;

    return 0;
}
