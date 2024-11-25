#include <iostream>
#include <string>

#include "..\Headers\Duree.hpp"

using namespace std;

int main()
{
    //INITIALISATION DES OBJETS
    Duration tpsConvoyeur(45,8000,15);
    Duration tpsConcasseur(32,56,45);
    Duration tpsTrieuse(37,45,2);
    Duration tpsTotal = tpsConvoyeur + tpsConcasseur + tpsTrieuse;

    //MENU PRINCIPAL
    cout << "--------------------------------------------------" << endl;
    cout << "|               DEBUT DU PROGRAMME               |" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "- Convoyeur : " << tpsConvoyeur << endl;
    cout << "- Concasseur : " << tpsConcasseur << endl;
    cout << "- Trieuse : " << tpsTrieuse << endl;
    cout << ">>> TOTAL : " << tpsTotal << endl;

    /*-----------------------------------------------------------*/
    //FIN DU PROGRAMME
    cout << "--------------------------------------------------" << endl;
    cout << "|                FIN DU PROGRAMME                |" << endl;
    cout << "--------------------------------------------------" << endl;

    return 0;
}