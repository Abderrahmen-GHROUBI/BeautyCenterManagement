#ifndef CLIENT_H
#define CLIENT_H
#include "Rendez_vous.h"
#include "service.h"
#include"Facial_service.h"
#include"hair_cut_femme.h"
#include"hair_cut_homme.h"
#include"personne.h"
#include"Rendez_vous.h"

#include<vector>
#include<string>

class client :public personne
{
     float facture;
     vector<service*> ser;
     Rendez_vous rende_vous;
      static int nb_service;

    public:
        client();
        virtual ~client();
        client(const client&);
        void ajout_services();
        void supp_services( );
        void calcule_facture();
        float getfacture(){return facture;}
        static void  calcul_nb_service();

       friend  istream& operator>>(istream&,client&);
       friend  ostream& operator<<(ostream&,client&);
       friend  istream& operator>>(istream&,client*);
       friend  ostream& operator<<(ostream&,client*);
       client& operator=( client&);


    protected:


};

#endif // CLIENT_H
