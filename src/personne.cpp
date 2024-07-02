#include "personne.h"

personne::personne()
{

}
personne::personne(string a,string b,string c):nom(a),prenom(b),telephone(c)
{

}

personne::~personne()
{
    //dtor
}

void personne::aficher()
{
     cout<<"  nom prenom :  "<<nom<<" "<<prenom<<endl;

      cout<<" telphone:  "<<telephone<<endl;

}
istream& operator>>(istream& in, personne& p)
{
    cout<<"donner le nom: ";
    in>>p.nom;
    cout<<"donner le prenom: ";
     in>>p.prenom;
      cout<<"donner le num de telphone: ";
     in>>p.telephone;
return in;
}
ostream& operator<<(ostream& out , personne&p)
{
    out<<"nom :  "<<p.nom<<endl;
     out<< "prenom:  "<<p.prenom<<endl;

      out<<"telphone:  "<<p.telephone<<endl;
}
istream& operator>>(istream& in, personne* p)
{
    in>>p->nom;
     in>>p->prenom;
     in>>p->telephone;
return in;
}
ostream& operator<<(ostream& out , personne*p)
{
    out<<p->nom<<endl;
    out<<p->prenom<<endl;
      out<<p->telephone<<endl;
}

personne& personne::operator=(const personne&w)
{
    if(this!=&w)
    {
      nom=w.nom;
     prenom=w.prenom;
     telephone=w.telephone;
    }
    return*this;
}

