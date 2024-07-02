#include "Facial_service.h"
#include <iostream>

using namespace std;
#include<string>
Facial_service::Facial_service()
{

}
istream& operator>>(istream& in,Facial_service&h)
{
    service*s=&h;
    in>>*s;
    char rep;
 string crem;
 cout<<"saisir les crems disop"<<endl;
     do
     {
         cin>>crem;
       h.LC.push_back(crem);
        cout<<"ajoter des cremes ?"<<endl ;
        cin>>rep;
     }
     while(rep=='o'||rep=='O');
     return in;
}


istream& operator>>(istream& in,Facial_service*h)
{
    service*s=h;
    in>>s;
    char rep;
 string crem;
 cout<<"saisir les crems disop"<<endl;
     do
     {
         cin>>crem;
       h->LC.push_back(crem);
        cout<<"ajoter des cremes ?"<<endl ;
        cin>>rep;
     }
     while(rep=='o'||rep=='O');
     return in;
}
  void Facial_service::ajout_creme(string crem)
  {
       LC.push_back(crem);

}

  void Facial_service::supp_creme(string crem)
  {
      bool test=false;
      int i=0;
    while(bool test=false&&i<=LC.size())
    {
        if(LC[i]==crem)
        {
           test=true;

        }
    }
    LC.erase(LC.begin()+i+1);
  }


  void Facial_service::afficheser()
  {
      service::afficheser();
      cout<<"les cremes  dispo   :";
    for(int i=0;i<LC.size();i++)
    {
        cout<<LC[i]<<"  / ";
    }
    cout<<endl;
  }

ostream& operator<<(ostream& out,Facial_service& h)
 {
      service*s=&h;
      out<<*s;
    out<<"les cremes  dispo   :";
    for(int i=0;i<h.LC.size();i++)
    {
        out<<h.LC[i]<<" /  ";
    }
    out<<endl;
return out;
 }

 ostream& operator<<(ostream& out,Facial_service*s)
 {
    out<<"salle "<<s->num_salle<<endl;
   out<<"perix :"<<s->prix<<endl;
   out<<"dure :"<<s->dure_sevice<<endl;
   out<<"liste creme: ";
    for(int i=0;i<s->LC.size();i++)
    {
        out<<s->LC[i]<<" /  ";
    }
    out<<endl;
return out;
 }


Facial_service& Facial_service::operator=(Facial_service& w)
{
    if(this!=&w)
    {
        service*s1=this;
        service*s2=&w;
        *s1=*s1;
       for(int i=0;i<w.LC.size();i++)
         {
            LC[i]=w.LC[i];
         }
    }

    return *this;
}
Facial_service::Facial_service(const Facial_service&w):service(w)
{
    for(int i=0;i<w.LC.size();i++)
         {
            LC[i]=w.LC[i];
         }
}

Facial_service::~Facial_service()
{
 LC.clear();
}

