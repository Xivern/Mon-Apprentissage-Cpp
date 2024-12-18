#include "..\Headers\Garage.hpp"

using namespace std;

Garage::Garage() { cout << "[!] CREATION DU GARAGE [!]" << endl; }

Garage::~Garage()
{
    for (size_t i = 0; i < m_listeVehicules.size(); i++)
    {
        delete m_listeVehicules[i];                                     //On supprime l'espace alloué aux pointeurs.
        m_listeVehicules[i] = 0;                                        //On ré-initialise le pointeur à 0.
    }
}

void Garage::afficherTous() const
{
    cout << "VEHICULE DISPONIBLE DANS LE GARAGE :" << endl;

    if (m_listeVehicules.empty())
    {
        cout << ">> Le garage est vide !" << endl;
    } else
    {
        for (size_t i = 0; i < m_listeVehicules.size(); i++)
        {
            cout << ">> ";
            m_listeVehicules[i]->affiche();                             //On affiche la description de tous les véhicule du garage
        }
    }
}

void Garage::ajouterVehicule(Vehicule* vehicule)
{
    m_listeVehicules.push_back(vehicule);
    cout << "[AJOUT] : ";
    vehicule->affiche();
}

void Garage::supprimerVehicule(size_t index)
{
    if (index < m_listeVehicules.size())
    {
        cout << ">> Suppression du vehicule : ";
        m_listeVehicules[index]->affiche();                                 // Affiche les informations avant suppression
        delete m_listeVehicules[index];                                     //On supprime l'espace alloué aux pointeurs.
        m_listeVehicules.erase(m_listeVehicules.begin() + index);           //On supprime le vecteur.
    } else 
    {
        cout << "Index invalide." << endl;
    }
}