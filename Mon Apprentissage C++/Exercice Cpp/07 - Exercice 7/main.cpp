/*
Écrire un programme qui affiche tous les entiers de 8 jusqu'à 23 (bornes incluses) en utilisant un for.

Cet exercice a pour but de vérifier le point technique suivant :

    utilisation rudimentaire d'un for.
*/

#include <iostream>
/*---------------*/

int main()
{

    std::cout << "------------------------------------------------------------------------------------------------" << std::endl;
    std::cout << "                                 Bienvenue dans le programme !!" << std::endl;
    std::cout << "            L'objectif de ce programme est de vous afficher les nombres de 8 à 23." << std::endl;
    std::cout << "                                          C'est parti !!" << std::endl;
    std::cout << "------------------------------------------------------------------------------------------------" << std::endl;

    // Boucle for pour afficher les entiers de 8 à 23
    for (int i = 8; i <= 23; i++)
    {
        std::cout << "Nombre : " << i << std::endl;
    }
    
    std::cout << ">> Fin du programme..." << std::endl;

    return 0;
}