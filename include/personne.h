#ifndef PERSONNE_H
#define PERSONNE_H

#include <iostream>
#include<fstream>

using namespace std;
#include<string>

class personne
{
    protected:
    string nom;
    string prenom;
    string telephone;

     public:
        personne();
        personne(string,string,string);
        virtual ~personne();
        friend istream& operator>>(istream& , personne&);
        friend ostream& operator<<(ostream& , personne&);
        friend istream& operator>>(istream& , personne*);
        friend ostream& operator<<(ostream& , personne*);
         virtual void aficher();
         string getprenom(){return prenom;}
         personne& operator=(const personne&);
};

#endif // PERSONNE_H
