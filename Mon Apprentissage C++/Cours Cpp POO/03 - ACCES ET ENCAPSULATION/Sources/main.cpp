#include <iostream>

#include "..\Headers\RPG.hpp"

//NE PAS EXECUTER : ATTRIBUT NON INITIALISÉ
int main()
{
    //CREATION DE 2 OBJETS DE TYPE PERSONNAGE
    Personnage Harry;
    Personnage Voldemort;

    //Utilisation de notre METHODE "attaquer"
    Voldemort.attaquer(Harry);
    Harry.attaquer(Voldemort);
    
    //Utilisation de notre METHODE "changeArme"
    Voldemort.changeArme("Avada Kedavra", 100);

    //Utilisation de notre METHODE "boirePotionDeVie"
    Harry.boirePotionDeVie(100);

    return 0;
}