#include <iostream>

#include "..\Headers\RPG.hpp"

using namespace std;

//NE PAS EXECUTER : ATTRIBUT NON INITIALISÉ
int main()
{
    //CREATION DE 2 OBJETS DE TYPE PERSONNAGE ET INITIALISATION VIA LE CONSTRUCTEUR
    Personnage Spectateur;                                                                //Aucun parametre renseigné : constructeur par défaut
    Personnage Protagoniste("Harry", "Oppugno", 35);                                        //Paramètre renseigné : constructeur surchargé
    Personnage Antagoniste("Voldemort", "Bombarda", 45), doublonAntagoniste(Antagoniste);   //Il est également possible de copier les paramètres d'un objet vers un autre objet 
                                                                                            //==> (Constructeur de copie)

    //MENU PRINCIPAL
    cout << "--------------------------------------------------" << endl;
    cout << "|              AFFRONTEMENT FINAL !              |" << endl;
    cout << "--------------------------------------------------" << endl;

    cout << "Debut du combat :" << endl
         << "-----------------" << endl;

    //AFFICHAGE DES ATTRIBUTS
    Protagoniste.infoPersonnage();
    Antagoniste.infoPersonnage();

    //Utilisation de notre METHODE "attaquer"
    cout << endl << "Tour 1 : Harry et Voldemort s'attaque mutuellement !" << endl
         << "-----------------" << endl;
    Antagoniste.attaquer(Protagoniste);
    Protagoniste.attaquer(Antagoniste);
    Protagoniste.infoPersonnage();
    Antagoniste.infoPersonnage();

    
    cout << endl << "Tour 2 : Voldemort change d'arme tandis que Harry decide de se soigner !" << endl
         << "-----------------" << endl;
    
    //Utilisation de notre METHODE "changeArme"
    Antagoniste.changeArme("Avada Kedavra", 100);

    //Utilisation de notre METHODE "boirePotionDeVie"
    Protagoniste.boirePotionDeVie(100);

    Protagoniste.infoPersonnage();
    Antagoniste.infoPersonnage();
    
    cout << endl << "Tour 3 : Les deux adversaire decide de reculer, pret a finir ce combat !" << endl;

    //FIN DU PROGRAMME
    cout << "--------------------------------------------------" << endl;
    cout << "|            MAIS QUI VA DONC GAGNER ?           |" << endl;
    cout << "--------------------------------------------------" << endl;

    return 0;
}