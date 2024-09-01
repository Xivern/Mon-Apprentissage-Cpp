#ifndef VERIFYINPUT_HPP_INCLUDED
#define VERIFYINPUT_HPP_INCLUDED
/*
Un fichier d'en-tête dont l'extension est .hpp  : il contient uniquement la description de la fonction, ce qu'on appelle le prototype de la fonction.
*/

/*
 * Fonction qui prend en paramètre 1 type double qui correspond à une variable quelquonque renseigné par l'utilisateur.
  La fonction renvoie ensuite 0 ou 1 en fonction de si la variable retourné par l'utilisateur est correcte
 * - _input : double correspondant à une variable.
 * Valeur retournée : 0 : La variable n'est pas de type double
 *                    1 : Aucune erreur, la variable est de type double.
 */
bool verifyInputDouble(double _input);            //On initialise notre fonction dans le fichier d'entête

#endif // VERIFYINPUT_HPP_INCLUDED