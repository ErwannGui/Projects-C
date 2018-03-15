/* --- Programme de recherche des nombres premiers par Erwann --- */

#include <iostream>
#include <vector>

using namespace std;


bool est_premier(int nombre);
void affichageNombres(vector<int> nbPremiers);

int main()
{
    int nombre = 0;
    vector<int> nbPremiers;

    cout<<"Entrez un nombre : ";
    cin>>nombre;

    /*cout<<"Voici les nombres premiers compris entre 0 et "+ nombre;*/ //la concaténation ne fonctionne pas et cela me retourne le booléen

    for(int j = 1; j < nombre; j++)
    {
        if(est_premier(j))
            nbPremiers.push_back(j);
    }

    affichageNombres(nbPremiers);
    system("pause");
}

bool est_premier(int nombre)
{

    for(int i = 2; i < nombre; i++)
    {
        if(nombre % i == 0)
            return false;
    }

    return true;
}

void affichageNombres(vector<int> nbPremiers)
{
    for(int k = 0; k < nbPremiers.size(); k++)
        cout<<nbPremiers[k]<<endl;
}

/* --- Fin de programme --- */


