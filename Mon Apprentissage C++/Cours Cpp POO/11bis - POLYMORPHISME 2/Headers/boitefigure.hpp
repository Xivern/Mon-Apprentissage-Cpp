#ifndef BOITEFIGURE_HPP_INCLUDED
#define BOITEFIGURE_HPP_INCLUDED

#include <vector>

#include "..\Headers\figure.hpp"

class BoiteFigure
{
    public:

        //Constructeur
        BoiteFigure();

        //Destructeur
        virtual ~BoiteFigure();
        
        //Methode
        virtual void afficher(Figure* figure) const;        //Affiche les informations d'une figure
        virtual void afficherTous() const;                  //Affiche les informations de toutes les figures
        virtual void afficherComplet() const;               //Affiche la totalité des informations des figures

        virtual void ajouterFigure(Figure* figure);         //Ajoute une figure
        virtual void supprimerFigure(size_t index);         //Supprime une figure à un index donné  
        virtual void supprimerTous();                       //Supprime toutes les figure de la boite a figure

    private:

        std::vector<Figure*> m_listeFigure;             //Longueur des cotés du carré
};

#endif // BOITEFIGURE_HPP_INCLUDED