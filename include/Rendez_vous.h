#ifndef RENDEZ_VOUS_H
#define RENDEZ_VOUS_H
#include <iostream>

using namespace std;
#include<string>
#include"ostream"

class Rendez_vous
{
     private:
         int date;
         int mois;
         int heur;

         float acompte;
    public:
        Rendez_vous();
        virtual ~Rendez_vous();
         friend istream& operator>>(istream& ,Rendez_vous& );
           friend ostream& operator<<(ostream& ,Rendez_vous& );


    protected:


};

#endif // RENDEZ_VOUS_H
