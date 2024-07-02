#include "service.h"

service::service()
{


}
istream& operator>>(istream& in,service& s)
{
    cout<<"  donner id service:  ";
    in>>s.id_ser;
   cout<<"donner numero de salle  ";
    in>>s.num_salle;
     cout<<"donner le prix de service  ";
    in>>s.prix;

    string msg="erreur";
    int x=-1;

        try
    {
       if(s.prix<=0) throw msg;
    }

    catch(string m)
    {
        cout<<"le mun telephone doit etre positif "<<m<<endl;
    }

      cout<<"donner le dure de service  ";
    in>>s.dure_sevice;
   return in;
}
ostream& operator<<(ostream& out,service& s)
{
   out<<" id service:  "<<s.id_ser<<endl;
   out<<" numero de salle:  "<<s.num_salle<<endl;
   out<<" prix de service:  "<<s.prix<<endl;
   out<<" dure de service:  "<<s.dure_sevice<<endl;
   return out;
}


istream& operator>>(istream& in,service* s)
{
    cout<<"  donner id service:  ";
   in>>s->id_ser;
       cout<<"donner numero de salle  ";
    in>>s->num_salle;
         cout<<"donner le prix de service  ";

    in>>s->prix;

    string msg="erreur";
    int x=-1;

        try
    {
       if(s->prix<=0) throw msg;
    }

    catch(string m)
    {
        cout<<"le mun telephone doit etre positif "<<m<<endl;
    }
      cout<<"donner le dure de service  ";
    cin>>s->dure_sevice;
   return in;
}
ostream& operator<<(ostream& out,service* s)
{
   out<<s->id_ser<<endl;
   out<<s->num_salle<<endl;
   out<<s->prix<<endl;
   out<<s->dure_sevice<<endl;
   return out;
}


void service::afficheser()
{
    cout<<" id service:  "<<id_ser<<endl;
    cout<<" numero de salle:  "<<num_salle<<endl;
    cout<<" prix de service:  "<<prix<<endl;
    cout<<" dure de service:  "<<dure_sevice<<endl;
}
  service& service::operator=(const service&w)
  {
      if(this!=&w)
      {
         id_ser=w.id_ser;
         num_salle=w.num_salle;
         prix=w.prix;
         dure_sevice=w.dure_sevice;
      }
        return *this;
  }

service::~service()
{
    //dtor
}
