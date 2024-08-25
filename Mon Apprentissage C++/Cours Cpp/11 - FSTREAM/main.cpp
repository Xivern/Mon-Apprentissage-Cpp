#include <iostream>
#include <string>
#include <fstream>  //NEW !! Bibliothèque qui va nous être utile pour interagir avec des fichiers externe au programme (File stream)
#include <ctime>    //Bibliothèque permettant de renvoyer l'heure sous différentes formes et différents formats

using namespace std;

int main()
{
    string const filename("Fichiers/ListedeCourse.txt");

    ofstream monflux(filename.c_str()); //Déclaration d'un flux permettant d'écrire dans le fichier "Fichiers/ListedeCourse.txt"

    time_t tmm = time(0);   // date / heure actuelle basée sur le système actuel
    char* dt = ctime(&tmm);  // convertir en forme de chaîne

    int six(6);

    if (monflux)
    {
        cout << " >> Acces au fichier reussi à l'emplacement : \"" << filename << "\" <<" << endl;
        monflux << "Ingrédient à acheter lors du prochain passage au supermarché :" << endl;
        monflux << 1 << " - Poulet" << endl;
        monflux << six << " - Oeuf" << endl;    //Fonctionnement identique à un cout
    }
    else
    {
        cout << " >> Echec lors de l'acces au fichier : \"" << filename << "\" <<" << endl;
    }

    monflux.close();    //On ferme le fichier

    /*-------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

    string const logfile("Fichiers/Log.txt");

    ofstream mesLogs(logfile.c_str(), ios::app); //Déclaration d'un flux permettant d'écrire dans le fichier "Fichiers/Log.txt" à la suite de ce qui est déja écrit dedans

    if (mesLogs)
    {
        cout << " >> Acces au fichier reussi à l'emplacement : \"" << logfile << "\" <<" << endl;
        mesLogs << dt << " - L'utilisateur a execute le programme..." << endl;
    }
    else
    {
        cout << " >> Echec lors de l'acces au fichier : \"" << logfile << "\" <<" << endl;
    }

    mesLogs.close();

    cout << "---------------------------------------------" << endl;

    ifstream LectLogs(logfile.c_str()); //Déclaration d'un flux permettant la lecture du document "Fichiers/Log.txt" contenu dans la variable "logfile"

    string ligneEntete;
    string mot;

    char caractere;

    if (LectLogs)
    {
        cout << " >> Lecture du fichier à l'emplacement : \"" << logfile << "\" : <<" << endl;
        // 3 Moyen existe pour lire un fichier :
        getline(LectLogs, ligneEntete); //On lit une ligne complète
        /**/
        LectLogs.ignore();          //On change de mode
        LectLogs >> mot;            //On lit un mot depuis le fichier
        /**/
        LectLogs.ignore();          //On change de mode
        LectLogs.get(caractere);    //On lit un caracère
        //LectLogs.ignore();          //On change de mode

        cout << "Une ligne : " << ligneEntete << endl;
        cout << "Un mot : " << mot << endl;
        cout << "Un caractere : " << caractere << endl;

        /*
        Il faut voir la lecture de document comme un curseur qui se déplace et reste à la ligne où il s'arrête, et ce, même si l'on change de mode de lecture.
        */
    }
    else
    {
        cout << " >> Echec lors de la tentative de lecture du fichier : \"" << logfile << "\" <<" << endl;
    }

    LectLogs.close();

    /*-------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

    ifstream LectCourse; //Déclaration d'un flux permettant la lecture (Le fichier n'est pas encore ouvert)

    LectCourse.open(filename); // Le fichier est désormais ouvert à la lecture (Non indispensable mais permet de contrôler l'ouverture à partir d'un instant t)

    string Ingrédient;

    if (LectCourse)
    {
        cout << " >> Lecture du fichier à l'emplacement : \"" << filename << "\" : <<" << endl;
        while (getline(LectCourse, Ingrédient)) //Getline renvoie également un bool pour définir si il reste du texte à lire dans le document
        {
            cout << Ingrédient << endl;
        }
    }
    else
    {
        cout << " >> Echec lors de la tentative de lecture du fichier : \"" << filename << "\" <<" << endl;
    }

    LectCourse.close();

    cout << "---------------------------------------------" << endl;

    /*
    BONUS :
    Pour la lecture :
    - Monflux.tellg() Permet de savoir à quel caractère du fichier le curseur se situe dans la lecture
    - Monflux.seekg(nombreCaracteres, position) Permet de se déplacer le curseur de X caractère dans le fichier (Position : à partir d'où on veut compter nos caracères : début, pos actuel, fin...)
    Pour l'écriture :
    - Monflux.tellp() Permet de savoir à quel caractère du fichier le curseur se situe dans la lecture
    - Monflux.seekp(nombreCaracteres, position) Permet de se déplacer le curseur de X caractère dans le fichier (Position : à partir d'où on veut compter nos caracères : début, pos actuel, fin...)
    */

   int votreReponse(0);
   int tailleFichier;

    ifstream MonfichierCourse;
    ifstream MonfichierLogs;

   do
   {
    cout << "Merci de m'indiquer par 1 ou 2, le fichier dont vous souhaitez connaitre la taille :" << endl;
    cout << "1 - " << filename << endl << "2 - " << logfile << endl << ">> Votre réponse : ";
    cin >> votreReponse;
   } while ((votreReponse< 1) || (votreReponse>2));  

    switch (votreReponse)
    {
    case 1:
        MonfichierCourse.open(filename);
        break;

    case 2:
        MonfichierCourse.open(logfile);
        break;

    default:
        break;
    }

    MonfichierCourse.seekg(0, ios::end);    //On se déplace à la fin du fichier
    tailleFichier = MonfichierCourse.tellg();               //On récupère la position qui correspond donc à la taille du fichier
    cout << "Le fichier fait exactement : " << tailleFichier << " octets !" << endl;

    return 0;
}