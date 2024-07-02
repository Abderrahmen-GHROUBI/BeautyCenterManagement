#ifndef FACIAL_SERVICE_H
#define FACIAL_SERVICE_H
#include <ostream>
#include<istream>
#include<iostream>
#include"istream"
#include"ostream"
using namespace std;
#include<string>
#include"service.h"
#include<string>
#include<vector>



class Facial_service:public service
{
    private:
        vector<string> LC;//tableau des creme
    public:
        Facial_service();
        Facial_service(const Facial_service&);
        virtual ~Facial_service();
        void ajout_creme(string);
        void supp_creme(string);
        float getprix(){return prix;}
        void afficheser();
       friend istream& operator>>(istream&,Facial_service&);
       friend ostream& operator<<(ostream&,Facial_service&);
              friend istream& operator>>(istream&,Facial_service*);
       friend ostream& operator<<(ostream&,Facial_service*);

        Facial_service& operator=( Facial_service&);




};

#endif // FACIAL_SERVICE_H
