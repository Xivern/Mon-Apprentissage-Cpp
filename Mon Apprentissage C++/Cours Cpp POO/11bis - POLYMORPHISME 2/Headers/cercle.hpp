#ifndef CERCLE_HPP_INCLUDED
#define CERCLE_HPP_INCLUDED

#include "..\Headers\figure.hpp"

class Cercle : public Figure
{
    public:

        //Constructeur
        Cercle();
        Cercle(double Rayon);

        //Destructeur
        virtual ~Cercle();
        
        //Methode
        virtual void afficher() const;          //Affiche le type de la figure et ses caracteristiques
        virtual double perimetre() const;       //Renvoie le perimetre de la figure
        virtual double aire() const;            //Renvoie l'aire de la figure

    private:

        double m_rayon;                         //rayon du cercle
        double m_pi;                            //Valeur de pi

};

#endif // CERCLE_HPP_INCLUDED