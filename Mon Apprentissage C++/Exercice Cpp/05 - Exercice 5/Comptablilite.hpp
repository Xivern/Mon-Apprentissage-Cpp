#ifndef COMPTABILITE_HPP_INCLUDED
#define COMPTABILITE_HPP_INCLUDED
/*
Un fichier d'en-tête dont l'extension est .hpp  : il contient uniquement la description de la fonction, ce qu'on appelle le prototype de la fonction.
*/

/*
 * Fonction qui prend en paramètre 2 type double qui correspond au prix au kilo du légume à peser et son poids.
  On renvoie ensuite le total que l'utilisateur devra payer.
 * - _prixDuKilo : double correspondant au prix à payer par l'utilisateur pour 1 kilo.
 * - _poidsEnKilo : double correspondant au nombre de kilo que l'utilisateur souhaite acheter.
 * - _tva : double correspondant à la valeur actuelle de la TVA lors de l'achat.
 * Valeur retournée : La fonction renvoie le total que l'utilisateur devra payer.
 */
double balanceLegume(double _prixDuKilo, double _poidsEnKilo, double _tva);            //On initialise notre fonction dans le fichier d'entête

#endif // COMPTABILITE_HPP_INCLUDED