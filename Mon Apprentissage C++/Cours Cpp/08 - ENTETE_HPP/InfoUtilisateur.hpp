#ifndef INFOUTILISATEUR_HPP_INCLUDED
#define INFOUTILISATEUR_HPP_INCLUDED

/*
Un fichier d'en-tête dont l'extension est .hpp  : il contient uniquement la description de la fonction, ce qu'on appelle le prototype de la fonction.
*/

#include <string>

/*
 * Fonction qui demande le prenom de l'utilisateur et renvoie le résultat au format string
 * Valeur retournée : Prenom de l'utilisateur (STRING)
 */
std::string demandePrenom();            //On ajoute std:: pour définir notre string sans utiliser "using namespace"

#endif // INFOUTILISATEUR_HPP_INCLUDED