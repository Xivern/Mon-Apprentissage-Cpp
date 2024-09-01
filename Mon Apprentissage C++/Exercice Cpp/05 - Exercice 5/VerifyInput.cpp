#include <iostream>
#include <limits> 
/*---------------*/
#include "VerifyInput.hpp"

bool verifyInputDouble(double _input)
{
    if (std::cin.fail())
    {
        std::cin.clear(); // Clear l'état d'erreur
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignorer le reste de la ligne
        std::cout << "!!! [ERREUR] Veuillez entrer un nombre valide !!!" << std::endl;
        return 0;
    }
    else
    {
        return 1;
    }
}