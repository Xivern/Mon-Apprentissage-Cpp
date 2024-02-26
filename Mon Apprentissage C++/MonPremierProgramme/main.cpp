// Directive de préprocesseur (Input Output Stream | affichage de texte)
#include <iostream>

// Espace de noms permettant de spécifier que l'on utilise la bibliothèque standard pour notre programme
using namespace std;

// Fonction principale (Celle qui va être lancé quand on exécute notre code)
int main () 
{
    // cout : permet d'afficher un message à l'écran (printf en C) | endl : permet un retour à la ligne à la fin du message
    cout << "Hello World !" << endl;
    cout << "\"Test des guillemets\"" << endl;
    cout << "\\Un Backslash" << endl;

    cout << "------------------" << endl;

    //Autres moyen d'écrire le code :
    cout << "Hello 2!" << endl << "\" Guillemets 2\"" << endl << "\\Backslash 2" << endl;

    //Important à renseigner : indique la fin de notre fonction main sans erreur
    return 0;
}