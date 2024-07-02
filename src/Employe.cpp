#include "Employer.h"
#include <iostream>

using namespace std;
Employer::Employer()
{
    //ctor
}

Employer::~Employer()
{
    //dtor
}
Employer:: Employer(string a,string b,string c,string d,float f):personne(a,b,c),profission(d),salaire(f)
  {

  }

 istream& operator>>(istream& in,Employer& e)
 {
     personne* q=&e;
     in>>*q;
     cout<<"donner la  profissoin ";
     in>>e.profission;
     cout<<"donner son salaire ";
     in>>e.salaire;
     return in;

 }
 ostream& operator<<(ostream& out, Employer& e)
 {
     personne* q=&e;
     out<<*q;
     out<<"professoion:  "<<e.profission<<endl;
     out<<"salaire:  "<<e.salaire<<endl;
   return out;
 }

 istream& operator>>(istream& in,Employer* p)
 {
    in>>p->nom;
     in>>p->prenom;
     in>>p->telephone;
    in>>p->profission;
     in>>p->salaire;
     return in;

 }
 ostream& operator<<(ostream& out, Employer*p)
 {
     out<<p->nom<<endl;
    out<<p->prenom<<endl;
      out<<p->telephone<<endl;
     out<<p->profission<<endl;
     out<<p->salaire<<endl;

   return out;
 }
void Employer::aficher()
{
    personne::aficher();
     cout<<"professoion:  "<<profission<<endl;
     cout<<" salaire:  "<<salaire<<endl;
}
Employer& Employer::operator=( Employer&w)
{
    if(this!=&w)
    {
        personne*p1=this;
        personne*p2=&w;
       *p1=*p2;
        profission=w.profission;
       salaire=w.salaire;
    }

    return *this;

}
void Employer::creefichier(fstream& f)
{
    f.open("employer.txt", ios::in | ios::out |ios::trunc);
    if(!f.is_open()) cout<<"erreur"<<endl;
}
void Employer::enregistrer(fstream& f)
{
        f<<this;
        f.close();
}
/*void Employer::recuperer(fstream f)
{
    f>>this;
}*/

void Employer::remplir( fstream& f)
{
    int n;
     cout<<"donner le nombre des employers:   ";
     cin>>n;
    for(int i=0;i<n;i++)
     {
        Employer a;
        cin>>a;
        f<<&a;
    }
}

void Employer::operator+(fstream& f)
{
    Employer* p=new Employer();
   cout<<"*****ajouter un employer :*****"<<endl;
    cin>>*p;
   // f.seekg(0);
    //f.seekg(i*sizeof(Employer));
    f<<p;
}
void Employer::aficher_fichier(fstream& f)
{
    f.seekg(0);
    while(1)
    {
    Employer* a=new Employer();
    f>>a;
    if(f.eof())break;
    cout<<*a<<endl;
    }
}

/*void Employer::cherche_emp(string n)
{

}
*/
