/*
Écrire un programme qui demande à l'utilisateur de taper un entier et qui affiche GAGNE si l'entier est entre 56 et 78 bornes incluses PERDU sinon.

Cet exercice a pour but de vérifier les points techniques suivants :

    la notion de variables et leur déclaration ;
    l'utilisation de cin et de cout ;
    le choix d'une structure de contrôle adaptée au problème !
*/

#include <iostream>
#include <string>
/*---------------*/
int main()
{    

    std::cout << "------------------------------------------------------------------------------------------------" << std::endl;
    std::cout << "                                 Bienvenue dans le programme !!" << std::endl;
    std::cout << "L'objectif de ce programme est de vous faire deviner un nombre parmi ceux situé entre 1 et 100." << std::endl;
    std::cout << "         Vous devrez renseigner un nombre et nous vous dirons si vous avez gagné ou non." << std::endl;
    std::cout << "          Vous pourrez ensuite continuer jusqu'à avoir trouvé l'un des nombres gagnants." << std::endl;
    std::cout << "                                       BONNE CHANCE !!!!!" << std::endl;
    std::cout << "------------------------------------------------------------------------------------------------" << std::endl;

    /*---------------------------------------------------------------------------------*/
    bool continuer(0);              //Variable représentant la volonté de l'utilisateur à continuer
    bool victoireUtilisateur(0);    //Variable nous indiquant si l'utilisateur à gagné ou non
    int tentative (0);              //Variable permettant de suivre le nombre de tentative de l'utilisateur
    int nombreUtilisateur(0);       //Nombre renseigné par l'utilisateur
    std::string choix;

    do
    {
        std::cout << "[Essai numéro " << tentative << "] : Veuillez me renseigner votre nombre (1 - 100) :" << std::endl << ">> ";
        std::cin >> nombreUtilisateur;

        if ( nombreUtilisateur >= 56 && nombreUtilisateur <= 78)    //Si l'utilisateur est entre 56 et 78 : il a gagné
        {
            std::cout << "Vous avez GAGNEEEE !!!!!!!!!" << std::endl;
            victoireUtilisateur = 1;
            continuer = 0;
        }
        else
        {
            std::cout << "PERDU, ce n'est pas cela...";
            if (nombreUtilisateur > 78)
            {
                std::cout << " (Indice : Trop haut !)" << std::endl;
            }
            else if (nombreUtilisateur < 56)
            {
                std::cout << " (Indice : Trop bas !)" << std::endl;
            }
            victoireUtilisateur = 0;
        }

        if (victoireUtilisateur == 0)
        {
            /*  On vérifie que l'utilisateur souhaite continuer   */

            std::cout << "Souhaitez-vous continuer ? (y/n)" << std::endl << ">> ";
            std::cin >> choix;

            if (choix == "y" || choix == "yes" || choix == "oui")
            {
                continuer = 1;
            }
            else
            {
                continuer = 0;
            }
        }
        
        tentative++;    //On compte le nombre de tentative

    } while (continuer);
    
    std::cout << "BYE BYE !!" << std::endl;

    return 0;
}