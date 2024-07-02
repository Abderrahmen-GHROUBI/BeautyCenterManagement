#include "hair_cut_homme.h"

hair_cut_homme::hair_cut_homme()
{

}

istream& operator>>(istream& in,hair_cut_homme&h)
{
    hair_cut_service*q=&h;
    in>>*q;
    cout<<"donner la liste des coupes"<<endl;
     string coup;
     char rep;
     do
     {
         cin>>coup;
        h.coupe.push_back(coup);
        cout<<"ajouter des coupes ?"<<endl ;
        cin>>rep;
     }
     while(rep=='o'||rep=='O');
    return in;
}

ostream& operator<<(ostream& out,hair_cut_homme&f)
{
     hair_cut_service*s=&f;
     out<<*s;
      cout<<endl;
     out<<"les coupes dispo   :";
list<string>::iterator it;
for(it=f.coupe.begin();it!=f.coupe.end();it++)
{
    cout<<*it<<"    /";
}
    return out;
}


void hair_cut_homme::afficheser()
{
    hair_cut_service::afficheser();
     cout<<"les coupes dispo   :";
list<string>::iterator it;
for(it=coupe.begin();it!=coupe.end();it++)
{
    cout<<*it<<endl;
}
    cout<<endl;
}
void hair_cut_homme::ajout_coupeh(string coup)
{
    coupe.push_back(coup);
}
void hair_cut_homme::supp_coupeh(string coup)
{
    list<string>::iterator it=coupe.begin();
    int i=0;

    while (it != coupe.end())
        {
        if (*it == coup)
         {
            coupe.erase(it);
            break;
         }
        ++it;
       }
}



hair_cut_homme::~hair_cut_homme()
{
  coupe.clear();
}

istream& operator>>(istream& in,hair_cut_homme*h)
{
    hair_cut_service*q=h;
    in>>*q;
    cout<<"donner la liste des coupes"<<endl;
     string coup;
     char rep;
     do
     {
         cin>>coup;
        h->coupe.push_back(coup);
        cout<<"ajouter des coupes ?"<<endl ;
        cin>>rep;
     }
     while(rep=='o'||rep=='O');
    return in;
}

ostream& operator<<(ostream& out,hair_cut_homme*f)
{
     hair_cut_service*s=f;
     out<<*s;
      cout<<endl;
     out<<"les coupes dispo   :";
list<string>::iterator it;
for(it=f->coupe.begin();it!=f->coupe.end();it++)
{
    cout<<*it<<endl;
}

    return out;
}

void hair_cut_homme::nb_coup_meme_type()
{
    string h;
    cout<<"\n donner le  nom coupe:   ";
    cin>>h;
      int n=count(coupe.begin(),coupe.end(),h);
       cout<<"le nombre d'occurence de ce coupe: "<<n<<endl;
}
void hair_cut_homme::findd()
{
    list<string>::iterator it=coupe.begin();
   string  d;
    cout<<"donner le coupe que vous chercher "<<endl;
  cin>>d;
     it=find(coupe.begin(),coupe.end(),d);
     if(it!=coupe.end()) cout<<*it<<"  existe"<<endl;
     else cout<<"\n  cette coupe n'existe pas dans ce centre "<<endl;
}


