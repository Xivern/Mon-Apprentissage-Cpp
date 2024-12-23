#ifndef RECTANGLE_HPP_INCLUDED
#define RECTANGLE_HPP_INCLUDED

#include "..\Headers\figure.hpp"

class Rectangle : public Figure
{
    public:

        //Constructeur
        Rectangle();
        Rectangle(double Longueur, double Largeur);

        //Destructeur
        virtual ~Rectangle();
        
        //Methode
        virtual void afficher() const;          //Affiche le type de la figure et ses caracteristiques
        virtual double perimetre() const;       //Renvoie le perimetre de la figure
        virtual double aire() const;            //Renvoie l'aire de la figure

    private:

        double m_longueur;                      //Longueur du rectangle
        double m_largeur;                       //Largeur du rectangle

};

#endif // RECTANGLE_HPP_INCLUDED