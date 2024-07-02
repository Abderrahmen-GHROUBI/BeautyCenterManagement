#ifndef EMPLOYER_H
#define EMPLOYER_H
#include<fstream>
#include"personne.h"

class Employer :public personne
{
    string profission;
      float salaire;
    public:
        Employer();
        Employer(string,string,string,string,float);
        virtual ~Employer();
        float getsalaire(){return salaire;}
        float setsalaire(float s){ salaire=s;}


        void aficher();
        friend istream& operator>>(istream&,Employer&);
        friend ostream& operator<<(ostream&, Employer&);
        friend istream& operator>>(istream&,Employer*);
        friend ostream& operator<<(ostream&, Employer*);
        Employer& operator=( Employer&);

               static void creefichier(fstream&);
               void enregistrer(fstream& );
               void remplir(fstream&);
               void aficher_fichier(fstream &);
               void operator+(fstream&);
};

#endif // EMPLOYER_H
