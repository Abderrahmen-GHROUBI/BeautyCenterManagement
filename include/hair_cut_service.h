#ifndef HAIR_CUT_SERVICE_H
#define HAIR_CUT_SERVICE_H
#include <iostream>

using namespace std;
#include"service.h"
#include<string>
#include<vector>

class hair_cut_service: public service
{
      protected:
          vector<string> LM; //list_machine utilise
          int age;

    public:
        hair_cut_service();
        void saisir_hair();
        virtual ~hair_cut_service();
        void ajout_machine(string);
        void supp_machine(string);
        virtual void afficheser();
        friend istream& operator>>(istream&,hair_cut_service&);
         friend ostream& operator<<(ostream&,hair_cut_service&);
         friend istream& operator>>(istream&,hair_cut_service*);
         friend ostream& operator<<(ostream&,hair_cut_service*);
                 hair_cut_service& operator=(hair_cut_service&);






};

#endif // HAIR_CUT_SERVICE_H
