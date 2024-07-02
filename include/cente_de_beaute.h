#ifndef CENTE_DE_BEAUTE _H
#define CENTE_DE_BEAUTE _H
#include <iostream>
using namespace std;
#include<string>
#include "personne.h"
#include<typeinfo>
#include"Employer.h"
#include"client.h"
#include<vector>

class cente_de_beaute
{
    private:
        vector<personne*> tab;
        string nom_centre;
        string adresse;
        string num_tel;
        float recette;
    public:
        cente_de_beaute ();
        cente_de_beaute(const cente_de_beaute&);
        virtual ~cente_de_beaute ();
        void calcul_recette();
        void ajout_personne(personne&);//employer ou client
        void supprimer_personne(string);//employer ou client
        friend istream& operator>>(istream & ,cente_de_beaute &);
        friend ostream& operator<<(ostream & ,cente_de_beaute &);
        friend istream& operator>>(istream & ,cente_de_beaute*);
        friend ostream& operator<<(ostream & ,cente_de_beaute*);
        cente_de_beaute& operator=(const cente_de_beaute&);

    protected:


};

#endif // CENTE_DE_BEAUTE _H
