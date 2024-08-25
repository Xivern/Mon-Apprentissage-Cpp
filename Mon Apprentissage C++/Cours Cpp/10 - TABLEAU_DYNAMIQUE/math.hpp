#ifndef MATH_HPP_INCLUDED
#define MATH_HPP_INCLUDED

#include <vector>

/*
Un fichier d'en-tête dont l'extension est .hpp  : il contient uniquement la description de la fonction, ce qu'on appelle le prototype de la fonction.
*/

/*
 * Fonction qui permet de calculer la moyenne des entiers présent dans le tableau
 * - tableau : tableau de variable entière
 * Valeur retournée : Moyenne calculée parmis les valeurs présent dans le tableau
 */
double calculMoyenne(std::vector<int> tableau);

#endif // MATH_HPP_INCLUDED