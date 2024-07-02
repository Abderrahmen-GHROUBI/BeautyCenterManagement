#include "client.h"
#include<typeinfo>
#include <iostream>

using namespace std;
#include<string>
#include"personne.h"
client::client()
{
//    personne::personne();


}
istream& operator>>(istream& in,client& c)
{
    personne*p=&c;
    in>>*p;
   cout<<"choisir un rendez_vous"<<endl;
     Rendez_vous r;
    in>>r;
    c.rende_vous=r;

    cout<<"saisir les services desire"<<endl;
    int choix ,choix1;
    char rep;
      service *s;
    // client::nb_service=0;

    do
    {
        cout<<"coisir le service::hair_cut:1//facial_service:2"<<endl;
        cin>>choix;
        if(choix==2)
        {
            Facial_service* f=new Facial_service();

            in>>*f;
             c.ser.push_back(f);
        }
        else if(choix==1)
        {
            cout<<"homme ::1 ou femme::2"<<endl;
            cin>>choix1;
            if(choix1==1)
             {
                hair_cut_homme*h=new hair_cut_homme();
                in>>*h;
                c.ser.push_back(h);
             }
            else
            {
               hair_cut_femme* w=new hair_cut_femme();
               in>>*w;
                c.ser.push_back(w);
            }
        }
     //  client::nb_service+=1;
        cout<<"rajouter des services ?"<<endl;
        cin>>rep;
    }
     while(rep=='o'||rep=='O');
    return in;
}
ostream& operator<<(ostream& out,client& c)
{
    personne*p=&c;
    out<<*p;
    out<<c.rende_vous;
    for(int i=0;i<c.ser.size();i++)
    {
        out<<"******"<<"service nemero: "<<i+1<<"******"<<endl;

      if(typeid(*c.ser[i])==typeid(Facial_service))
      out<<static_cast< Facial_service&>(*c.ser[i])<<endl;

       else if(typeid(*c.ser[i])==typeid(hair_cut_homme))
       out<<static_cast<hair_cut_homme&>(*c.ser[i])<<endl;

       else if(typeid(*c.ser[i])==typeid(hair_cut_femme))
       out<<static_cast<hair_cut_femme&>(*c.ser[i])<<endl;
    }
    c.calcule_facture();
    out<<"facture:  "<<c.facture<<endl;
    out<<"nb_servive:  "<<c.nb_service<<endl;

    return out;
}

istream& operator>>(istream& in,client* c)
{
    personne*p=c;
    in>>*p;
   cout<<"choisir un rendez_vous"<<endl;
     Rendez_vous r;
    in>>r;
    c->rende_vous=r;

    cout<<"saisir les services desire"<<endl;
    int choix ,choix1;
    char rep;
      service *s;

    do
    {
        cout<<"coisir le service::hair_cut:1//facial_service:2"<<endl;
        cin>>choix;
        if(choix==2)
        {
            Facial_service* f=new Facial_service();

            in>>*f;
             c->ser.push_back(f);
        }
        else if(choix==1)
        {
            cout<<"homme ::1 ou femme::2"<<endl;
            cin>>choix1;
            if(choix1==1)
             {
                hair_cut_homme*h=new hair_cut_homme();
                in>>*h;
                c->ser.push_back(h);
             }
            else
            {
               hair_cut_femme* w=new hair_cut_femme();
               in>>*w;
                c->ser.push_back(w);
            }
        }
        cout<<"rajouter des services ?"<<endl;
        cin>>rep;
    }
     while(rep=='o'||rep=='O');
    return in;
}
ostream& operator<<(ostream& out,client* c)
{
    personne* p=c;
    out<<*p;
    out<<c->rende_vous;
    for(int i=0;i<c->ser.size();i++)
    {
        out<<"******"<<"service nemero: "<<i+1<<"******"<<endl;

      if(typeid(*c->ser[i])==typeid(Facial_service))
      out<<static_cast< Facial_service&>(*c->ser[i])<<endl;

       else if(typeid(*c->ser[i])==typeid(hair_cut_homme))
       out<<static_cast<hair_cut_homme&>(*c->ser[i])<<endl;

       else if(typeid(*c->ser[i])==typeid(hair_cut_femme))
       out<<static_cast<hair_cut_femme&>(*c->ser[i])<<endl;
    }
    c->calcule_facture();
    out<<"facture:  "<<c->facture<<endl;
    out<<"nb_servive:  "<<c->nb_service<<endl;

    return out;
}
void  client::calcule_facture()
{
facture=0;
  for(int i=0;i<ser.size();i++)
  {
      facture+=ser[i]->getprix();
  }
}
void client::ajout_services()
{
    service*q;
    int choix;
    cout<<"quel service voulez vous ajouter 1:hair_cut_homme //2:hair_cut_femme//3:facial_service "<<endl;
    cin>>choix;
    if(choix==3)
        {
            Facial_service* f=new Facial_service();

            cin>>*f;
             ser.push_back(f);
        }
        else if(choix==1)
             {
                hair_cut_homme*h=new hair_cut_homme();
                cin>>*h;
                ser.push_back(h);
             }
            else if(choix==2)
            {
               hair_cut_femme* w=new hair_cut_femme();
               cin>>*w;
                ser.push_back(w);
            }
}
void client::supp_services()
{
    int a;
   cout<<"donner l id de service a supprimer  ";
   cin>>a;
   for(int i=0;i<ser.size();i++)
   {
       if(ser[i]->getid()==a)
       {
           ser.erase(ser.begin()+i);
       }
   }
}
client::client( const client&w)
{
    nom=w.nom;
    prenom=w.prenom;
   telephone=w.telephone;
    facture=w.facture;
    rende_vous=w.rende_vous;
    service*q;
        for(int i=0;i<w.ser.size();i++)
    {

      if(typeid(*w.ser[i])==typeid(Facial_service))
      {
          q=new Facial_service(static_cast< const Facial_service&>(*w.ser[i]));
             ser.push_back(q);
      }
       else if(typeid(*w.ser[i])==typeid(hair_cut_homme))
        {
            q=new hair_cut_homme(static_cast< const hair_cut_homme&>(*w.ser[i]));
             ser.push_back(q);
       }
       else if(typeid(*w.ser[i])==typeid(hair_cut_femme))
       {
           q=new hair_cut_femme(static_cast< const hair_cut_femme&>(*w.ser[i]));
             ser.push_back(q);
       }
    }
}

  client& client::operator=( client&w)
       {
           if(this!=&w)
           {
               personne*p1=this;
               personne*p2=&w;
               *p1=*p2;
                facture=w.facture;
                rende_vous=w.rende_vous;
               for(int i=0;i<ser.size();i++)
                   delete ser[i];
               ser.clear();
              service*q;

            for(int i=0;i<w.ser.size();i++)
                {
                    if(typeid(*w.ser[i])==typeid(Facial_service))
                        {
                            q=new Facial_service(static_cast< const Facial_service&>(*w.ser[i]));
                            ser.push_back(q);
                        }

                    else if(typeid(*w.ser[i])==typeid(hair_cut_homme))
                        {
                            q=new hair_cut_homme(static_cast< const hair_cut_homme&>(*w.ser[i]));
                            ser.push_back(q);
                        }

                    else if(typeid(*w.ser[i])==typeid(hair_cut_femme))
                        {
                            q=new hair_cut_femme(static_cast< const hair_cut_femme&>(*w.ser[i]));
                            ser.push_back(q);
                        }
                }
            return *this;
      }
     }

    int client::nb_service=0;
void client::calcul_nb_service()
  {
     cout<<"nombre de service est:  "<<nb_service<<endl;
  }
client::~client()
{
   for(int i=0;i< ser.size();i++)
    delete  ser[i];
     ser.clear();
}
