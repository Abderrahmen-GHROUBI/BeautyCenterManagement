#include "hair_cut_service.h"
#include<string>
hair_cut_service::hair_cut_service()
{
//    service::service();
    //cout<<"donner l'age "<<endl;
   // cin>>age;
}
istream& operator>>(istream& in,hair_cut_service&h)
{
    service*s=&h;
    in>>*s;
       cout<<"donner l'age ";
    cin>>h.age;
    string msg="erreur";
    try
    {
        if(h.age<=0) throw msg;
    }
    catch(string m)
    {
        cout<<"age doit etre superieur a 0"<<m<<endl;
    }
     cout<<" remplir le tableau des machines "<<endl;
     string machine;
     char rep;
     do
     {
         cin>>machine;
        h.LM.push_back(machine);
        cout<<"ajouter des machines ?"<<endl ;
        cin>>rep;
     }
     while(rep=='o'||rep=='O');
     return in;

}
 ostream& operator<<(ostream& out,hair_cut_service& h)
 {
      service*s=&h;
      out<<*s;
    out<<"l'age:   "<<h.age<<endl;
    out<<"les machines dispo   :";
    for(int i=0;i<h.LM.size();i++)
    {
        out<<h.LM[i]<<" /  ";
    }
return out;
 }

 void hair_cut_service::afficheser()
{
    service::afficheser();
    cout<<"l'age:   "<<age<<endl;
    cout<<"les machines dispo   :";
    for(int i=0;i<LM.size();i++)
    {
        cout<<LM[i]<<" /  ";
    }
cout<<endl;
}
void hair_cut_service::ajout_machine(string mch)
{
    LM.push_back(mch);
}
void hair_cut_service::supp_machine(string mch)
{
    int i=0;
    while(bool test=false&&i<=LM.size())
    {
        if(LM[i]==mch)
        {
           test=true;
        }
    }
            LM.erase(LM.begin()+i);

}



hair_cut_service::~hair_cut_service()
{
LM.clear();
}
istream& operator>>(istream& in,hair_cut_service*h)
{
    service*s=h;
    in>>s;
       cout<<"donner l'age ";
    cin>>h->age;
    string msg="erreur";
    try
    {
        if(h->age<=0) throw msg;
    }
    catch(string m)
    {
        cout<<"age doit etre superieur a 0"<<m<<endl;
    }
     cout<<" remplir le tableau des machines "<<endl;
     string machine;
     char rep;
     do
     {
         cin>>machine;
        h->LM.push_back(machine);
        cout<<"ajouter des machines ?"<<endl ;
        cin>>rep;
     }
     while(rep=='o'||rep=='O');
     return in;

}
 ostream& operator<<(ostream& out,hair_cut_service* h)
 {
      service*s=h;
      out<<s;
    out<<"l'age:   "<<h->age<<endl;
    out<<"les machines dispo   :";
    for(int i=0;i<h->LM.size();i++)
    {
        out<<h->LM[i]<<" /  ";
    }
return out;
 }
hair_cut_service& hair_cut_service::operator=(hair_cut_service&w)
{
    if(this!=&w)
    {
        hair_cut_service*s1=this;
        hair_cut_service*s2=&w;
        *s1=*s2;
        age=w.age;
        for(int i=0;i<w.LM.size();i++)
        {
            LM[i]=w.LM[i];
        }
    }
return *this;
}
