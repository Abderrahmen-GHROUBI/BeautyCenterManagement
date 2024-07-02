#include "Rendez_vous.h"

Rendez_vous::Rendez_vous()
{
    /*cout<<"saisie le mois  desire:   ";
    cin>>mois;
     cout<<"saisie la date desire:   ";
    cin>>date;
    cout<<"saisie la heur desire:   ";
    cin>>heur;
    cout<<"saisie lacopmte:   ";
    cin>>acompte;
    */
}
istream& operator>>(istream& in,Rendez_vous& r)
{
    cout<<"saisie le mois  desire:   ";
    cin>>r.mois;
     cout<<"saisie la date desire:   ";
    cin>>r.date;
    cout<<"saisie la heur desire:   ";
    cin>>r.heur;
    cout<<"saisie lacopmte:   ";
    cin>>r.acompte;
}
 ostream& operator<<(ostream& out ,Rendez_vous& r)
 {
     out<<"rendez_vous  le:   "<<r.date<<"/"<<r.mois<<"/2023"<<" a "<<r.heur<<" heur"<<endl;
     out<<"lacopmte:   "<<r.acompte<<endl;

 }


Rendez_vous::~Rendez_vous()
{


}
