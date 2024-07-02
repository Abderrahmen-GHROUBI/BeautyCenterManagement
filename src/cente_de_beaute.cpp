#include"cente_de_beaute.h"
#include<iomanip>
 cente_de_beaute ::cente_de_beaute ()
{

}

istream& operator>>(istream& in,cente_de_beaute& c)
{
    cout<<"donner le nom du  centre  "<<endl;
    in>>c.nom_centre;
    cout<<"donner l'aderesse "<<endl;
    in>>c.adresse;
        cout<<"donner le telephone "<<endl;
    in>>c.num_tel;

    int choix;
    char rep;
    personne*p;
    do
    {
        cout<<"vouler vous saisi// 1:Employer //2 :client"<<endl;
        cin>>choix;
        if(choix==1)
        {
          Employer*q=new Employer();

            in>>*q;
            c. tab.push_back(q);

        }
        else if(choix==2)
        {
           client*q=new client();
            in>>*q;
            c. tab.push_back(q);
        }

        cout<<"rajouter des personnes ?"<<endl;
        cin>>rep;
    }
   while(rep=='o'||rep=='O');


    return in;
}


ostream& operator<<(ostream& out,cente_de_beaute& c)
{
    out<<"*******************Votre Centre*******************"<<endl;
   out<<"le nom du  centre:  "<<c.nom_centre<<endl;
    out<<"l'aderesse:   "<<c.adresse<<endl;
    out<<"le num  telephone:  "<<c.num_tel<<endl;

   for(int i=0;i<c.tab.size();i++)
    {
       cout<<"-----personne "<<i+1<<"-----"<<endl;
        if(typeid(*c.tab[i])==typeid(client))
        out<<static_cast<client&>(*c. tab[i])<<endl;
        else if(typeid(*c.tab[i])==typeid(Employer))
         out<<static_cast< Employer&>(*c. tab[i])<<endl;
        }
        cout<<"---------------------------"<<endl;
        c.calcul_recette();
       out<<"la recette du centre: "<<c.recette<<endl;


}


istream& operator>>(istream& in ,cente_de_beaute*c)
{
    in.seekg(0);
    in>>c->nom_centre;
    in>>c->adresse;
    in>>c->num_tel;
    int choix;
    while(1)
    {
        cin>>choix;
        if(in.eof()) break;
        if(choix==1)
        {
          Employer*q=new Employer();
            in>>*q;
            c->tab.push_back(q);
        }
        else if(choix==2)
        {
           client*q=new client();
            in>>*q;
            c->tab.push_back(q);
        }
    }
    return in;
}

ostream& operator<<(ostream & out ,cente_de_beaute*c)
{
    out<<c->nom_centre<<endl;
    out<<c->adresse<<endl;
    out<<c->num_tel<<endl;
   for(int i=0;i<c->tab.size();i++)
    {
        if(typeid(*c->tab[i])==typeid(client))
        {
           out<<static_cast<client&>(*c-> tab[i])<<endl;
        }
        else if(typeid(*c->tab[i])==typeid(Employer))
        {
            out<<static_cast< Employer&>(*c->tab[i])<<endl;
        }
        }
        c->calcul_recette();
               out<<c->recette<<endl;


   return out ;
}




void cente_de_beaute::ajout_personne(personne& p)
{
    personne*q;
     if(typeid(p)==typeid(client))
     {
            cout<<"ajouter un client "<<endl;
          q=new client (static_cast<const client&>(p));
          cin>>*q;
        tab.push_back(q);
     }

     else if(typeid(p)==typeid(Employer))
     {
         cout<<"ajouter un employer "<<endl;
        q=new Employer (static_cast<const Employer&>(p));
         cin>>*q;
         tab.push_back(q);
     }
}
void cente_de_beaute::supprimer_personne(string pm)
{
    for(int i=0;i<tab.size();i++)
    {
        if(tab[i]->getprenom()==pm)
            tab.erase(tab.begin()+i);
    }
}
void cente_de_beaute::calcul_recette()
{
    recette=0;
    client*q;
    Employer*p;
    for(int i=0;i< tab.size();i++)
    {
     if(typeid( *tab[i])==typeid(client))
     {
          q=new client(static_cast<const client&>(*tab[i]));
        recette+= q->getfacture();
     }

     else if(typeid( *tab[i])==typeid(Employer))
     {
          p=new Employer(static_cast<const Employer&>(*tab[i]));
          recette-= p->getsalaire();
     }

    }
}
cente_de_beaute& cente_de_beaute::operator=(const cente_de_beaute&w)
{
    if(this!=&w)
    {
        nom_centre=w.nom_centre;
        adresse=w.adresse;
        num_tel=w.num_tel;
        recette=w.recette;
        for(int i=0;i<tab.size();i++)
            delete tab[i];
            tab.clear();
            personne*p;
             for(int i=0;i<w.tab.size();i++)
             {
              if(typeid(*w.tab[i])==typeid(client))
              {
                   p=new client (static_cast<const client&>(*w.tab[i]));
                      tab.push_back(p);

              }
              else if(typeid(*w.tab[i])==typeid(Employer))
              {
                p=new Employer (static_cast<const Employer&>(*w.tab[i]));
               tab.push_back(p);
              }

             }
    }
    return *this;
}
cente_de_beaute::cente_de_beaute(const cente_de_beaute& w)
{
        nom_centre=w.nom_centre;
        adresse=w.adresse;
        num_tel=w.num_tel;
        recette=w.recette;
            personne*p;
             for(int i=0;i<w.tab.size();i++)
             {
              if(typeid(*w.tab[i])==typeid(client))
              {
                   p=new client (static_cast<const client&>(*w.tab[i]));
                      tab.push_back(p);

              }
              else if(typeid(*w.tab[i])==typeid(Employer))
              {
                p=new Employer (static_cast<const Employer&>(*w.tab[i]));
               tab.push_back(p);
              }

             }
}

cente_de_beaute ::~cente_de_beaute ()
{
for(int i=0;i< tab.size();i++)
    delete  tab[i];
     tab.clear();
}

