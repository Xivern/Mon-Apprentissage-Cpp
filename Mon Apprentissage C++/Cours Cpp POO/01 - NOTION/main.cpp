#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
    IMPORTANT :
    VOCABULAIRE DES OBJETS EN POO
    > Les variables contenues à l'intérieur des objets sont appelées "attributs".
    > Les fonctions sont appelées "méthodes". 
    */

    //MENU PRINCIPAL
    cout << "--------------------------------------------------" << endl;
    cout << "|                   NOTION POO                   |" << endl;
    cout << "--------------------------------------------------" << endl;

    //Création d'un objet 'monTexte' de type string + initialisation
    string monTexte = "Je suis une chaine de caractere";

    //Affichage du string comme si c'était une chaîne de caractères
    cout << monTexte << endl;

    monTexte = "Réaffectation du message de ma chaine de caractere";
    cout << monTexte << endl;

    //L'utilisation d'objets simplifie également la concaténation de chaînes de caractères
    string concatenation1 = "Chaine 1";
    string concatenation2 = "Chaine 2";

    monTexte = concatenation1 + " | " + concatenation2;
    cout << monTexte << endl;

    //Utilisation de la METHODE size
    cout << "Longueur de la chaine : " << monTexte.size() << endl;

    //Suppression de la chaine de caractère via la méthode erase
    monTexte.erase();
    cout << "Contenu de la chaîne de caractères : " << monTexte << endl;

    //Possibilité également de comparer des chaines de caractère entre eux
    if (concatenation1 == concatenation2)
    {
        cout << "Les chaines sont identiques." << endl;
    }
    else
    {
        cout << "Les chaines sont differentes." << endl;
    }

    //Utilisation de la méthode substr pour récupérer une partie d'une chaîne de caractères.
    string chaine("BLABLABLA Au revoir !");
    cout << chaine.substr(10) << endl;

    //FIN DU PROGRAMME
    cout << "--------------------------------------------------" << endl;
    cout << "|                       END                      |" << endl;
    cout << "--------------------------------------------------" << endl;
}