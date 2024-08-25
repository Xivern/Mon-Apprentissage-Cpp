#ifndef MATH_HPP_INCLUDED
#define MATH_HPP_INCLUDED

/*
Un fichier d'en-tête dont l'extension est .hpp  : il contient uniquement la description de la fonction, ce qu'on appelle le prototype de la fonction.
*/

/*
 * Fonction qui ajoute 2 au nombre reçu en argument
 * - nombreRecu : Le nombre auquel la fonction ajoute 2
 * Valeur retournée : nombreRecu + 2
 */
int ajouteDeux(int valeurRecupere);     //On ajoute notre prototype "ajouteDeux" dans notre fichier d'en-tête

/*
 * Fonction qui convertit et renvoie le nombre de secondes des arguments renseigné au format (Heures/Minutes/Secondes)
 * - heures : Le nombre d'heures que l'on souhaite convertir
 * - minutes : Le nombre de minutes que l'on souhaite convertir
 * - secondes : Le nombre de secondes que l'on souhaite convertir
 * Valeur retournée : (heures*3600) + (minutes*60) + secondes
 */
int conversionSeconde(int heures = 0, int minutes = 0, int secondes = 0); //En initialisant certains paramètre, alors ceux ci deviennent optionel lors de l'appel de la fonction

#endif // MATH_HPP_INCLUDED