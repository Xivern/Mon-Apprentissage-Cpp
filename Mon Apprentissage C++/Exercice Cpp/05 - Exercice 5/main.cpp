/*
Écrire un programme qui demande à l'utilisateur de taper le prix HT d'un kilo de tomates, le nombre de kilos de tomates achetés, le taux de TVA (Exemple 10 %,20 %…). 
Le programme affiche alors le prix TTC des marchandises.

Cet exercice a pour but de vérifier les points techniques suivants :

    la notion de variables et leur déclaration ;
    le choix d'identificateurs pertinents et explicites ;
    l'utilisation de cin et de cout ;
    l'affectation ;
    modélisation d'un problème "économique".
*/
#include <iostream>
/*---------------*/
#include "Comptablilite.hpp"
#include "VerifyInput.hpp"

int main()
{
    double prixKG(0.0), poidsKG(0.0), tva(0.0); 

    std::cout << "Bienvenue dans le programme !!" << std::endl;
    std::cout << "Je m'occupe de calculer le prix de vos tomates..." << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;

    /*---------------------------------------------------------------------------------*/

    do
    {
        std::cout << "Veuillez m'indiquer le prix HT d'un kilo de tomate (Euros) : ";
        std::cin >> prixKG;

        if (verifyInputDouble(prixKG) == 0)
        {
            prixKG = -1;    //On relance la boucle
        }
        else if (prixKG < 0)
        {
        std::cout << "!!! [ERREUR] Le prix ne peut pas etre negatif !!!" << std::endl;
        }
    } while (prixKG < 0);
    
    do
    {
        std::cout << "Veuillez m'indiquer le poids de vos tomates (KG) : ";
        std::cin >> poidsKG;

        if (verifyInputDouble(poidsKG) == 0)
        {
            poidsKG = -1;    //On relance la boucle
        }
        else if (poidsKG < 0)
        {
        std::cout << "!!! [ERREUR] Le prix ne peut pas etre negatif !!!" << std::endl;
        }
    } while (poidsKG < 0);
    
    do
    {
        std::cout << "Veuillez m'indiquer la valeur actuelle de la TVA (%) : ";
        std::cin >> tva;

        if (verifyInputDouble(tva) == 0)
        {
            tva = -1;    //On relance la boucle
        }
        else if (tva < 0)
        {
        std::cout << "!!! [ERREUR] Le prix ne peut pas etre negatif !!!" << std::endl;
        }
    } while (tva < 0);

    /*---------------------------------------------------------------------------------*/

    double Total = balanceLegume(prixKG, tva, tva);

    std::cout << "-------------------------------------------------" << std::endl;
    std::cout << "Pour l'achat de " << poidsKG << " Kg de tomate, le prix TTC est :" << std::endl;
    std::cout << ">> " << Total << " Euros !" << std::endl;

    return 0;
}
