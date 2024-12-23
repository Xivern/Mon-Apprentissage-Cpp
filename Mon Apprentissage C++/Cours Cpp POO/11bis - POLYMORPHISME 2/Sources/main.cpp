#include <iostream>
#include <string>
#include <vector>

#include "..\Headers\figure.hpp"
#include "..\Headers\boitefigure.hpp"
#include "..\Headers\triangle.hpp"
#include "..\Headers\carre.hpp"
#include "..\Headers\rectangle.hpp"
#include "..\Headers\cercle.hpp"

using namespace std;

int main()
{
    //MENU PRINCIPAL
    cout << "--------------------------------------------------" << endl;
    cout << "|               DEBUT DU PROGRAMME               |" << endl;
    cout << "--------------------------------------------------" << endl;
    /*-----------------------------------------------------------*/
    BoiteFigure FeuilleAlpha;

    FeuilleAlpha.ajouterFigure(new Triangle(6.2, 9.8));             //Création d'un triangle  -> Base     : 6,2 cm | Hauteur : 9,8 cm
    FeuilleAlpha.ajouterFigure(new Carre(4.5));                     //Création d'un carré     -> coté     : 4,5 cm |
    FeuilleAlpha.ajouterFigure(new Rectangle(8.3, 4.6));            //Création d'un rectangle -> Longueur : 8,3 cm | Largeur : 4,6 cm
    FeuilleAlpha.ajouterFigure(new Cercle(9.2));                    //Création d'un cercle    -> rayon    : 9,2 cm |
    
    cout << "-----------------------" << endl;
    /*-----------------------------------------------------------*/
    cout << "[!] AFFICHAGE ET INFOS DES FIGURES [!]" << endl;
    FeuilleAlpha.afficherComplet();
    
    cout << "-----------------------" << endl;
    /*-----------------------------------------------------------*/
    cout << "[!] SUPPRESSION MANUELLE DES FIGURES [!]" << endl;
    FeuilleAlpha.supprimerTous();
    
    /*-----------------------------------------------------------*/
    cout << "--------------------------------------------------" << endl;
    cout << "|                FIN DU PROGRAMME                |" << endl;
    cout << "--------------------------------------------------" << endl;
    //FIN DU PROGRAMME
 
    return 0;
}
