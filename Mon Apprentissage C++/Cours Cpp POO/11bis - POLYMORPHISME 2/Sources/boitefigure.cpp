#include "..\Headers\boitefigure.hpp"

using namespace std;

BoiteFigure::BoiteFigure()  {   cout << "[!] CREATION DE LA BOITE A FIGURE [!]" << endl;    }

BoiteFigure::~BoiteFigure()
{
    for (size_t i = 0; i < m_listeFigure.size(); i++)
    {
        //SUPPRESSION DES POINTEURS SITUÉ DANS LA LISTE
        delete m_listeFigure[i];
        m_listeFigure[i] = 0;
    }
}

void BoiteFigure::afficher(Figure* figure) const
{
    cout << "[INFO] ";
    figure->afficher();
}

void BoiteFigure::afficherTous() const
{
    if (m_listeFigure.empty())
    {
        cout << "[ERREUR] : Il n'y a rien dans la boite a figure !" << endl;
    } else 
    {
        for (size_t i = 0; i < m_listeFigure.size(); i++)
        {
            cout << "[INFO] : ";
            m_listeFigure[i]->afficher();
        }
    }    
}

void BoiteFigure::afficherComplet() const
{
    if (m_listeFigure.empty())
    {
        cout << "[ERREUR] : Il n'y a rien dans la boite a figure !" << endl;
    } else 
    {
        for (size_t i = 0; i < m_listeFigure.size(); i++)
        {
            cout << "[INFO] : "; m_listeFigure[i]->afficher();
            cout << "[INFO] : Perimetre : " << m_listeFigure[i]->perimetre() << " cm2  ";
            cout << "|  Aire de la figure : " << m_listeFigure[i]->aire() << " cm3" << endl;
        }
    }    
}

void BoiteFigure::ajouterFigure(Figure* figure)
{
    m_listeFigure.push_back(figure);
    cout << "[AJOUT] : ";
    figure->afficher();
}

void BoiteFigure::supprimerFigure(size_t index)
{
    if (index < m_listeFigure.size())
    {
        cout << "[SUPPRESSION] : ";
        m_listeFigure[index]->afficher();                           // Affiche les informations avant suppression
        delete m_listeFigure[index];                                //On supprime l'espace alloué aux pointeurs.
        m_listeFigure.erase(m_listeFigure.begin() + index);         //On supprime le vecteur.
    } else 
    {
        cout << "[ERREUR] : Index invalide." << endl;
    }
}

void BoiteFigure::supprimerTous()
{
    for (size_t i = 0; i < m_listeFigure.size(); i++)
    {
        //AFFICHAGE DES INFORMATIONS DANS LA LISTE AVANT SUPPRESSION
        cout << "[SUPPRESSION] : ";
        m_listeFigure[i]->afficher();

        //SUPPRESSION DES POINTEURS SITUÉ DANS LA LISTE
        delete m_listeFigure[i];
        m_listeFigure[i] = 0;
    }
    m_listeFigure.clear();
}