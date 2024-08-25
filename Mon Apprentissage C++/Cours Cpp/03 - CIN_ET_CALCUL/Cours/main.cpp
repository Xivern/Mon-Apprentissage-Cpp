#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int const Maconst(500);
    int age(0);
    string prenom("GW");

    cout << "hello Individu numéro " << Maconst << endl;
    cout << "quel est ton age ?" << endl;

    //cin permet de demander à l'utilisateur de rentrer une valeur pour pouvoir par la suite l'insérer dans notre variable "sentiment"
    //ATTENTION, cin ne prend que les caractères conntinu et s'arrête au premier espace
    cin >> age;
    cout << "Tu as donc : " << age << " ans !" << endl;

    age++;
    cout << "Dans 1 an, tu auras : " << age << endl;

    //A utiliser lorsque l'on mélange getline et cin. Permet d'informer que nous avons bien fini d'utilier cin.
    //Si l'on ne met pas de cin.ignore, alors toutes les autres écritures seront passées.
    cin.ignore();

    cout << "Sinon, comment vous appelez-vous ?" << endl;
    
    //getline agit de la même manière que cin, cependant, cette fonction permet de prendre toutes la lignes écrit par l'utilisateur (y compris les espaces)
    getline(cin, prenom);
    cout << "Bonjour " << prenom << endl;

    //Espace de calcul facile à comprendre :

    //Addition :
    int Addition(0);
    Addition = 1+1;
    cout << "Addition ! " << Addition << endl;

    //Soustraction : 
    int Soustraction(0);
    Soustraction = 1-1;
    cout << "Soustraction ! " << Soustraction << endl;

    //Multiplication : 
    int Multiplication(0);
    Multiplication = 1*1;
    cout << "Multiplication ! " << Multiplication << endl;

    //Division :
    int Division(0);
    Division = 11/3;
    cout << "Division ! " << Division << endl;

    //Modulo : (En bref, le reste apès une vision mais uniquement réserver aux nombres entier) > 11 / 3 = 3 x 3 + 2
    int Modulo(0);
    Modulo = 11%3;
    cout << "Modulo ! " << Modulo << endl;

    return 0;
}