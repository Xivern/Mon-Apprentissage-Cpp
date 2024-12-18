#include <iostream>
#include <string>
#include <vector>

#include "..\Headers\FctVehicule.hpp"
#include "..\Headers\Vehicule.hpp"
#include "..\Headers\Garage.hpp"
#include "..\Headers\Voiture.hpp"
#include "..\Headers\Camion.hpp"
#include "..\Headers\Moto.hpp"

using namespace std;

int main()
{
    //MENU PRINCIPAL
    cout << "--------------------------------------------------" << endl;
    cout << "|               DEBUT DU PROGRAMME               |" << endl;
    cout << "--------------------------------------------------" << endl;
    /*-----------------------------------------------------------*/
    Garage garageMrDupont;                                                              //Création d'une liste contenant les véhiculte de monsieur Dupont

    garageMrDupont.ajouterVehicule(new Voiture("M3", "BMW", 120000, 2009, 4));          //Voiture BMW M3 sortie en 2009 valant 120.000 euros et avec 4 portes
    garageMrDupont.ajouterVehicule(new Voiture("A110", "ALPINE", 15000, 2018, 4));      //Voiture Alpine A110 sortie en 2018 valant 65.000 euros et avec 2 portes
    //----
    garageMrDupont.ajouterVehicule(new Moto("R1", "YAMAHA", 205000, 2024, 300.0));      //Moto Yamaha R1 sortie en 2024 valant 20.500 euros et avec une vitesse maximum de 300 km/h
    //----
    garageMrDupont.ajouterVehicule(new Camion("TGS", "MAN", 40000, 2010, 32.0));        //Camion MAN TGS sortie en 2010 valant 40.000 euros et avec un poids maximum transportable de 32 tonnes

    cout << "--------------------------------------------------" << endl;
    /*-----------------------------------------------------------*/
    garageMrDupont.afficherTous();                                                      //Affiche les informations de tous les véhicules de monsieur Dupont

    cout << "--------------------------------------------------" << endl;
    /*-----------------------------------------------------------*/
    garageMrDupont.supprimerVehicule(0);

    cout << "--------------------------------------------------" << endl;
    /*-----------------------------------------------------------*/
    garageMrDupont.afficherTous();                                                      //Affiche les informations de tous les véhicules de monsieur Dupont

    /*-----------------------------------------------------------*/
    cout << "--------------------------------------------------" << endl;
    cout << "|                FIN DU PROGRAMME                |" << endl;
    cout << "--------------------------------------------------" << endl;
    //FIN DU PROGRAMME

    return 0;
}