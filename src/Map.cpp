#include "Map.h"
#include"stack"
#include"algorithm"
using namespace std;
#include<string>

tabmap::tabmap(const tabmap& other)
{
    for (auto it = other.a.begin(); it != other.a.end(); ++it) {
        a[it->first] = it->second;
    }
    it = a.begin();
}

void tabmap::ajoutermap()
{
    int x;
    do{
    string z,v;
    cout<<"donner l  nom de service ";
    cin>>z;
    cout<<"donner l  nom de client ";
    cin>>v;
    a.insert(make_pair(v,z));
    cout<<"\nsi tu peut ajouter autre couple tapez 1 si non 0   ";
    cin>>x;}
    while (x);

}


void tabmap::affichermap()
{
    for (it=a.begin();it!=a.end();it++)
        cout<<"nom service :"<<it->first<<"     "<<"nom client :"<<it->second<<endl;
};



void tabmap::modifiermap()
{
    int x;
    do{
    string z,v;
    cout << "donner l'nom de service: ";
    cin >> z;
    cout << "donner l'nom de client: ";
    cin >> v;
    it = a.find(v);

    if (it != a.end()) {
        a[z] = it->second;
        a.erase(it);
    }

    cout<<"\nsi tu peut modifier autre fois tapez 1 si non 0";
    cin>>x;
    }while(x);
}

void tabmap::recherchermap(string b)
    {
        it=a.find(b);
        if (it!=a.end()) cout<<"cette client existe";
        else cout<<"cette client n'existe pas";
    }

void tabmap::suprimmap(string b)
    {
        it=a.find(b);
        if (it!=a.end()) a.erase(b);
    }
