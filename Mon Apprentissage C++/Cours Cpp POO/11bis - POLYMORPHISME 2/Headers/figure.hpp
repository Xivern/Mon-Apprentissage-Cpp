#ifndef FIGURE_HPP_INCLUDED
#define FIGURE_HPP_INCLUDED

#include <iostream>
#include <iomanip>

class Figure
{
    public:

        //Constructeur
        Figure();

        //Destructeur
        virtual ~Figure();

        //Methode
        virtual void afficher() const;          //Affiche le type de la figure et ses caracteristiques
        virtual double perimetre() const=0;     //Renvoie le perimetre de la figure
        virtual double aire() const=0;          //Renvoie l'aire de la figure

    private:

};

#endif // FIGURE_HPP_INCLUDED