#ifndef HAIR_CUT_HOMME_H
#define HAIR_CUT_HOMME_H
#include <iostream>

using namespace std;
#include"hair_cut_service.h"
#include<vector>
#include<string>
#include<list>
#include<algorithm>
class hair_cut_homme:public hair_cut_service
{
     private:
         list<string>coupe;//listes des coupe disponible
         list<string>::iterator it=coupe.begin();

    public:
        hair_cut_homme();
        virtual ~hair_cut_homme();
        void ajout_coupeh(string);
        void supp_coupeh(string);
        void afficheser();
        void nb_coup_meme_type();// contient  un algorithme
        void findd();
        friend istream& operator>>(istream&,hair_cut_homme&);
        friend  ostream& operator<<(ostream&,hair_cut_homme&);
        friend istream& operator>>(istream&,hair_cut_homme*);
        friend  ostream& operator<<(ostream&,hair_cut_homme*);
                 //hair_cut_homme& operator=(hair_cut_homme&);




};

#endif // HAIR_CUT_HOMME_H
