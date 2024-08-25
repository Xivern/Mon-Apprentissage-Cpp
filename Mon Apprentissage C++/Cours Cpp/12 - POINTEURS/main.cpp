#include <iostream>
#include <string>

using namespace std;

/*
Découverte et initiation aux pointeurs :
Un pointeur est une variable qui contient l'adresse d'une autre variable.
En cpp, on l'identifie avec le symbole & (Attention, il s'agit du même symbole que pour les références)
*/

int main()
{
    //Déclaration des pointeurs : ATTENTION :  Il ne faut donc jamais déclarer un pointeur sans lui donner d'adresse.
    //Autrement dit, il faut donc TOUJOURS déclarer un pointeur en lui donnant la valeur 0 (Signifie qu'il n'est rataché à aucune adresse).
    int *monPremierPointeurINT(0);
    double *monPremierPointeurDOUBLE(0);

    int ageUtilisateur(24);

    monPremierPointeurINT = &ageUtilisateur; //Cela signifie que notre pointeur prend la valeur de l'adresse mémoire de notre ageUtilisateur

    cout << "l'adresse memoire de ma variable \"ageUtilisateur\" est : " << monPremierPointeurINT << endl;

    //Il est également possible de récupérer la valeur situé à l'adresse mémoire
    cout << "L'utilisateur est age de " << *monPremierPointeurINT << " ans" << endl;

    cout << "----------------------------------------------" << endl;

    //Allouer de la mémoire manuellement via les pointeurs
    double *pointeurAllocationMem(0);

    cout << "Valeur de pointeur avant la fonction \"new\" : " << pointeurAllocationMem << endl;
    cout << "----------" << endl;

    pointeurAllocationMem = new double; // new demande une case à l'ordinateur, et renvoie un pointeur pointant vers cette case 

    if (pointeurAllocationMem)  //On vérifie que l'allocation mémoire s'est bien déroule
    {
        cout << "Valeur de pointeur apres la fonction \"new\" : " << pointeurAllocationMem << endl;     //Pointe vers la nouvelle case
        cout << "----------" << endl;

        //ATTENTION ! lorsque l'on demande une case dans la mémoire manuellement, il faut la fermer manuellement si l'on ne l'utilisa plus
        //Si cela n'est pas fait, alors cela creer une FUITE MEMOIRE !
        delete pointeurAllocationMem;   //Libération de la case mémoire
        pointeurAllocationMem = 0;      //On supprime ensuite le lien entre notre pointeur et la case qui ne nous appartient plus (TRES IMPORTANT A FAIRE)
    }
    else
    {
        cout << "ERREUR : la demande d'une case mémoire sur notre pointeur ne s'est pas déroule comme prevue... " << endl;
    }

    cout << "Valeur de pointeur apres la suppresion de l'allocation mémoire manuelle : " << pointeurAllocationMem << endl;     //Pointe vers la nouvelle case

    cout << "----------------------------------------------" << endl;

    //Exemple : Création d'un programme qui demade l'age de l'utilisateur via des pointeurs et une allocation manuel (Contrôle complet de la mémoire du programme)
    
    int *ptrAgeUtilisateur(0);
    ptrAgeUtilisateur = new int;

    if (ptrAgeUtilisateur)
    {
        cout << "Veuillez renseigner votre age : ";
        cin >> *ptrAgeUtilisateur;                      //On écrit dans la case mémoire pointée par le pointeur 'pointeur'

        cout << "Notre pointeur s'occupe de tout..." << endl;
        cout << "Vous avez donc " << *ptrAgeUtilisateur << " ans !" << endl;

        delete ptrAgeUtilisateur;
        ptrAgeUtilisateur = 0;
    }
    else cout << "Erreur lors de la récupération d'une case mémoire : FIN DU PROGRAMME..." << endl;

    return 0;
}

/*
AVANTAGE DE L'UTILISATION DE POINTEURS :
    1. Gérer soi-même le moment de la création et de la destruction des cases mémoire.
    2. Partager une variable dans plusieurs morceaux du code.
    3. Sélectionner une valeur parmi plusieurs options.
*/