#ifndef GEOMETRIE_HPP_INCLUDED
#define GEOMETRIE_HPP_INCLUDED
/*
Un fichier d'en-tête dont l'extension est .hpp  : il contient uniquement la description de la fonction, ce qu'on appelle le prototype de la fonction.
*/

/*
 * Fonction qui prend en paramètre 2 type double qui correspond à la longueur et largeur d'un quadrilatère et indique le perimetre
 * - longueur : double correspondant à la longueur de la forme que l'on souhaite calculer
 * - largeur : double correspondant à la largeur de la forme que l'on souhaite calculer
 * Valeur retournée : RIEN
 */
void perimetre(double _longueur, double _largeur);            //On initialise notre fonction dans le fichier d'entête

/*
 * Fonction qui prend en paramètre 2 type double qui correspond à la longueur et largeur d'un quadrilatère et indique la surface
 * - longueur : double correspondant à la longueur de la forme que l'on souhaite calculer
 * - largeur : double correspondant à la largeur de la forme que l'on souhaite calculer
 * Valeur retournée : RIEN
 */
void surface(double _longueur, double _largeur);            //On initialise notre fonction dans le fichier d'entête

#endif // GEOMETRIE_HPP_INCLUDED