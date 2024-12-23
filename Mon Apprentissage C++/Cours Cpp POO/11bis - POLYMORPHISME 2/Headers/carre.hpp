#ifndef CARRE_HPP_INCLUDED
#define CARRE_HPP_INCLUDED

#include "..\Headers\figure.hpp"

class Carre : public Figure
{
    public:

        //Constructeur
        Carre();
        Carre(double Longueur);

        //Destructeur
        virtual ~Carre();
        
        //Methode
        virtual void afficher() const;          //Affiche le type de la figure et ses caracteristiques
        virtual double perimetre() const;       //Renvoie le perimetre de la figure
        virtual double aire() const;            //Renvoie l'aire de la figure

    private:

        double m_longueur;                      //Longueur des cotés du carré

};

#endif // CARRE_HPP_INCLUDED