#include <iostream>
#include <string>

#include "..\Headers\Duree.hpp"

using namespace std;

int main()
{
    //INITIALISATION DES OBJETS
    Duration tpsConvoyeur(45,8000,15);
    Duration tpsConcasseur(32,56,45);
    Duration tpsTrieuse(37,45,12);

    //MENU PRINCIPAL
    cout << "--------------------------------------------------" << endl;
    cout << "|               DEBUT DU PROGRAMME               |" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "Convoyeur : ";
    tpsConvoyeur.afficher();
    cout << "Concasseur : ";
    tpsConcasseur.afficher();
    cout << "Trieuse : ";
    tpsTrieuse.afficher();

    cout << "--------------------------------------------------" << endl;
    /*----------------------EGALITE--------------------------*/

    cout << "Les durees de fonctionnement du convoyeur et du concasseur sont-elles identiques ?" << endl;

    if (tpsConvoyeur != tpsConcasseur)
        cout << "   > Les durees sont differentes" << endl;
    else
        cout << "   > Les durees sont identiques" << endl;

    cout << "--------------------------------------------------" << endl;
    /*----------------------INFERIEUR------------------------*/

    cout << "Le convoyeur fonctionne-t-il moins longtemps que la trieuse ?" << endl;

    if (tpsConvoyeur < tpsTrieuse)
        cout << "   > Le temps de fonctionnement du convoyeur est inferieur au temps de la trieuse" << endl;
    else    
        cout << "   > Le temps de fonctionnement du convoyeur n'est pas inferieur au temps de la trieuse" << endl;  

    cout << "--------------------------------------------------" << endl;    
    /*----------------------SUPERIEUR------------------------*/

    cout << "La trieuse fonctionne-t-elle plus longtemps que le concasseur ?" << endl;

    if (tpsTrieuse > tpsConcasseur)
        cout << "   > Le temps de fonctionnement de la trieuse est superieur au temps du concasseur" << endl;
    else    
        cout << "   > Le temps de fonctionnement de la trieuse n'est pas superieur au temps du concasseur" << endl;  

    cout << "--------------------------------------------------" << endl;    
    /*-----------------------------------------------------------*/

    cout << "La duree du concasseur fonctionne-t-il autant ou plus que le convoyeur ?" << endl;

    if (tpsConcasseur >= tpsConvoyeur)
        cout << "   > Le temps de fonctionnement du concasseur est superieur ou egale au temps du concasseur" << endl;
    else    
        cout << "   > Le temps de fonctionnement du concasseur n'est pas superieur ou egale au temps du concasseur" << endl;  

    //FIN DU PROGRAMME
    cout << "--------------------------------------------------" << endl;
    cout << "|                FIN DU PROGRAMME                |" << endl;
    cout << "--------------------------------------------------" << endl;

    return 0;
}