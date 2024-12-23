#ifndef TRIANGLE_HPP_INCLUDED
#define TRIANGLE_HPP_INCLUDED

#include "..\Headers\figure.hpp"

class Triangle : public Figure
{
    public:

        //Constructeur
        Triangle();
        Triangle(double Base, double Hauteur);        

        //Destructeur
        virtual ~Triangle();
        
        //Methode
        virtual void afficher() const;          //Affiche le type de la figure et ses caracteristiques
        virtual double perimetre() const;       //Renvoie le perimetre de la figure
        virtual double aire() const;            //Renvoie l'aire de la figure

    private:

        double m_base;                          //Base du triangle
        double m_hauteur;                       //Hauteur du triangle

};

#endif // TRIANGLE_HPP_INCLUDED