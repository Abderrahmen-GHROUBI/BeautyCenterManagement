#include "hair_cut_femme.h"

hair_cut_femme::hair_cut_femme()
{
    //ctor
}
istream& operator>>(istream& in ,hair_cut_femme&f)
{
    hair_cut_service*q=&f;
    in>>*q;
     cout<<"donner la liste des meches "<<endl;
     string meche;
     char rep;
     do
     {
         in>>meche;
        f.CM.push_back(meche);
        cout<<"ajouter des meches ?"<<endl ;
        cin>>rep;
     }
     while(rep=='o'||rep=='O');
     return in;
}

void hair_cut_femme::afficheser()
{
     hair_cut_service::afficheser();
     cout<<"les meches dispo   :";
    for(int i=0;i<CM.size();i++)
    {
        cout<<CM[i]<<" /  ";
    }
    cout<<endl;
}
ostream& operator<<(ostream& out,hair_cut_femme&f)
{
     hair_cut_service*h=&f;
     out<<*h;
     cout<<endl;
     out<<"les meches dispo   :";
    for(int i=0;i<f.CM.size();i++)
    {
        out<<f.CM[i]<<" /  ";
    }
    return out;
}
void hair_cut_femme::ajout_couleur(string coul)
{
    CM.push_back(coul);
}
void hair_cut_femme::supp_couleur(string coul)
{
    int i=0;
    while(bool test=false&&i<=CM.size())
    {
        if(CM[i]==coul)
        {
           test=true;
        }
    }
             CM.erase(CM.begin()+i+1);

}
void hair_cut_femme::operator+(string f)
{
    CM.push_back(f);
}


void hair_cut_femme::operator-(string coul)
{
    int i=0;
    while(bool test=false&&i<=CM.size())
    {
        if(CM[i]==coul)
        {
           test=true;

        }
    }
     CM.erase(CM.begin()+i+1);
}


hair_cut_femme::~hair_cut_femme()
{
    //dtor
}
istream& operator>>(istream& in ,hair_cut_femme*f)
{
    hair_cut_service*q=f;
    in>>q;
     cout<<"donner la liste des meches "<<endl;
     string meche;
     char rep;
     do
     {
         in>>meche;
        f->CM.push_back(meche);
        cout<<"ajouter des meches ?"<<endl ;
        cin>>rep;
     }
     while(rep=='o'||rep=='O');
     return in;
}
ostream& operator<<(ostream& out,hair_cut_femme*f)
{
     hair_cut_service*h=f;
     out<<h;
     cout<<endl;
     out<<"les meches dispo   :";
    for(int i=0;i<f->CM.size();i++)
    {
        out<<f->CM[i]<<" /  ";
    }
    return out;
}
hair_cut_femme& hair_cut_femme::operator=(hair_cut_femme&w)
{
    if(this!=&w)
    {
        hair_cut_service*s1=this;
        hair_cut_service*s2=&w;
        *s1=*s2;
        for(int i=0;i<w.CM.size();i++)
        {
            CM[i]=w.CM[i];
        }
    }
return *this;
}
