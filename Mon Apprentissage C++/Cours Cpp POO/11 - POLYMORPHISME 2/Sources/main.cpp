#include <iostream>
#include <string>
#include <vector>

#include "..\Headers\FctVehicule.hpp"
#include "..\Headers\Vehicule.hpp"
#include "..\Headers\Voiture.hpp"
#include "..\Headers\Camion.hpp"
#include "..\Headers\Moto.hpp"

using namespace std;

int main()
{
    vector<Vehicule*> listeVehicule;                                        //Collection hétérogène car elle contient des type différents

    //MENU PRINCIPAL
    cout << "--------------------------------------------------" << endl;
    cout << "|               DEBUT DU PROGRAMME               |" << endl;
    cout << "--------------------------------------------------" << endl;
    /*-----------------------------------------------------------*/
    listeVehicule.push_back(new Voiture("M3", "BMW", 120000, 2009, 4));             //Voiture BMW M3 sortie en 2009 valant 120.000 euros et avec 4 portes
    listeVehicule.push_back(new Voiture("A110", "ALPINE", 15000, 2018, 4));         //Voiture Alpine A110 sortie en 2018 valant 65.000 euros et avec 2 portes
    //----
    listeVehicule.push_back(new Moto("R1", "YAMAHA", 205000, 2024, 300.0));         //Moto Yamaha R1 sortie en 2024 valant 20.500 euros et avec une vitesse maximum de 300 km/h
    //----
    listeVehicule.push_back(new Camion("TGS", "MAN", 40000, 2010, 32.0));           //Camion MAN TGS sortie en 2010 valant 40.000 euros et avec un poids maximum transportable de 32 tonnes

    /*-----------------------------------------------------------*/
    cout << "VEHICULE DISPONIBLE DANS LE GARAGE :" << endl;
    for (size_t i = 0; i < listeVehicule.size(); i++)
    {
        cout << ">> ";
        listeVehicule[i]->affiche();                                                        //On affiche la description de tous les véhicule du garage
        cout << "Le vehicule a " << listeVehicule[i]->nbrRoues() << " roues !" << endl;     //Nombre de roue du véhicule
    }

    /*-----------------------------------------------------------*/
    for (size_t i = 0; i < listeVehicule.size(); i++)
    {
        delete listeVehicule[i];                                            //On supprime l'espace alloué aux pointeurs.
        listeVehicule[i] = 0;                                               //On ré-initialise le pointeur à 0.
    }
    
    /*-----------------------------------------------------------*/
    cout << "--------------------------------------------------" << endl;
    cout << "|                FIN DU PROGRAMME                |" << endl;
    cout << "--------------------------------------------------" << endl;
    //FIN DU PROGRAMME

    return 0;
}